#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

class List
{

    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val)
    {
        //  Node *new_node(val);  Statically Allocated
        Node *newNode = new Node(val); // Dynamically Allocated
        if (head == NULL)
            head = tail = newNode;
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val); // Dynamically Allocated
        if (head == NULL)
            head = tail = newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    // print linked List
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void insert(int val, int pos)
    {
        Node *newNode = new Node(val);
        // if (pos == 0)
        // {
        //     push_front(val);
        //     return;
        // }
        // if (pos == size() - 1)
        // {
        //     push_back(val);
        //     return;
        // }
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position out of range" << endl;
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LL is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL; // to prevent memory leak
        delete temp;
    }

    void pop_back()
    {
        if (head == NULL || head->next == NULL)
        {
            cout << "LL is empty" << endl;
            return;
        }
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = NULL; // temp = tail's prev
        delete tail;
        tail = temp;
    }

    int searchItr(int key)
    {
        Node *temp = head;
        int pos = 0;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << "Key found" << endl;
                return pos;
            }
            temp = temp->next;
            pos++;
        }
        return -1;
    }

    int helper(Node *h, int key)
    {
        if (h == NULL)
        {
            return -1;
        }

        if (h->data == key)
        {
            return 0;
        }

        int idx = helper(h->next, key);
        if (idx == -1)
        {
            return -1;
        }

        return idx + 1;
    }

    int searchRec(int key)
    {
        return helper(head, key);
    }

    void reverse()
    {
        Node *prev = NULL;
        Node *current = head;
        tail = head;
        while (current != NULL)
        {
            Node *next = current->next;
            current->next = prev;

            prev = current;
            current = next;
        }
        head = prev;
    }

    int count()
    {
        int count = 0;
        Node *current = head;
        while (current != NULL)
        {
            count++;
            current = current->next;
        }
        return count;
    }

    void removeNth(int n)
    {
        int size = count();
        Node *prev = head;

        for (int i = 1; i < (size - n); i++)
        {
            prev = prev->next;
        }

        Node *toDel = prev->next; // Node to delete
        cout << "going to delete : " << toDel->data << endl;

        prev->next = prev->next->next;
    }
};

int main()
{
    List ll;

    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    ll.push_front(50);

    ll.print();

    // ll.reverse();
    ll.removeNth(2);
    ll.print();

    // cout << ll.searchRec(40) << endl;
}