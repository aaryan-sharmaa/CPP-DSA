#include <iostream>
#include <vector>
#include <string>
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
public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val)
    {
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
        Node *newNode = new Node(val);
        if (head == NULL)
            head = tail = newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
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
        temp->next = NULL; // To prevent memory leak
        delete temp;
    }

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
};

bool isCycle(Node *head)
{
    if (head == NULL)
        return false;
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "Cycle exists\n";
            return true;
        }
    }
    cout << "No cycle exists\n";
    return false;
}

void removeCycle(Node *head)
{
    // detect cycle

    Node *slow = head, *fast = head;
    bool isCycle = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "cycle detected\n";
            isCycle = true;
            break;
        }
    }
    if (!isCycle)
    {
        cout << "No cycle exists\n";
        return;
    }
    // find start of cycle
    slow = head;
    if (slow == fast) // special case : tail -> head
    {
        while (fast->next != slow)
        {
            fast = fast->next;
        }
        fast->next = NULL; // remove cycle
    }
    else
    {
        Node *prev = fast;
        while (slow != fast)
        {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL; // remove cycle
    }
}

Node *splitAtMid(Node *head)
{
    Node *slow = head, *fast = head;
    Node *prev = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (prev != NULL)
    {
        prev->next = NULL; // split at middle
    }
    return slow; // slow = rightHead
}

Node *merge(Node *left, Node *right)
{
    List ans;
    Node *i = left;
    Node *j = right;

    while (i != NULL && j != NULL)
    {
        if (i->data <= j->data)
        {
            ans.push_back(i->data);
            i = i->next;
        }
        else
        {
            ans.push_back(j->data);
            j = j->next;
        }
    }

    while (i != NULL)
    {
        ans.push_back(i->data);
    }

    while (j != NULL)
    {
        ans.push_back(j->data);
    }

    return ans.head;
}

Node *mergeSort(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *rightHead = splitAtMid(head);

    Node *left = mergeSort(head);       // left head
    Node *right = mergeSort(rightHead); // right head

    return merge(left, right); // head of sorted LL
}

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev; // prev is head of reversed LL
}

Node *zigZagLL(Node *head)
{

    Node *rightHead = splitAtMid(head);
    Node *rightHeadRev = reverse(rightHead);

    // alternate merging : 1st head = head; 2nd head = rightHead
    Node *left = head;
    Node *right = rightHeadRev;
    Node *tail = right;

    while (left != NULL && right != NULL)
    {
        Node *nextLeft = left->next;
        Node *nextRight = right->next;

        left->next = right;
        right->next = nextLeft;

        tail = right;

        left = nextLeft;
        right = nextRight;
    }

    if (right != NULL)
    {
        tail->next = right;
    }

    return head;
}

int main()
{
    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    ll.print();

    ll.head = zigZagLL(ll.head);
    ll.print();
}

// class Solution {
// public:
//     void reorderList(ListNode* head) {
//         if (!head || !head->next) return;

//         ListNode* rightHead = splitAtMid(head);
//         ListNode* rightHeadRev = reverse(rightHead);

//         ListNode* left = head;
//         ListNode* right = rightHeadRev;

//         while (left != NULL && right != NULL) {
//             ListNode* nextLeft = left->next;
//             ListNode* nextRight = right->next;

//             left->next = right;
//             if (nextLeft == NULL) break;
//             right->next = nextLeft;

//             left = nextLeft;
//             right = nextRight;
//         }
//     }

// private:
//     ListNode* splitAtMid(ListNode* head) {
//         ListNode* slow = head, *fast = head;
//         ListNode* prev = NULL;
//         while (fast != NULL && fast->next != NULL) {
//             prev = slow;
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         if (prev != NULL) {
//             prev->next = NULL;
//         }
//         return slow;
//     }

//     ListNode* reverse(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* next = NULL;
//         while (curr != NULL) {
//             next = curr->next;
//             curr->next = prev;

//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
// };
