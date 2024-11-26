// insted of struct that we use in c, we are using class in c++ and constructor to get oops benefits

// class Node{
//     Public: // access modifier
//     int data; // the data value
//     Node* next; // the pointer to the next value

//     Public:
//     // constructor
//     Node (int data1, Node* next1){
//         data=data1;  // Initialize data with the provided value
//         next=next1;  // Initialize next with the provided
//     }

//     Node (int data1){
//         data=data1;  // Initialize data with the provided value
//         next=nullptr;  // Initialize next as null since it's the end of the list
//     }
// };

// arr to linklist

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // Default constructor
  Node()
  {
    data = 0;
    next = NULL;
  }

  // Parameterised Constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

Node *constructLL(vector<int> &arr)
{
  // code here

  int n = arr.size();

  Node *head = new Node(arr[0]);
  Node *mover = head;

  for (int i = 1; i < n; i++)
  {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }

  return head;
}
    
// traversal in linklist :: >>
void linkListTravercel(Node* head)
{
    cout << "linklist is :: ";
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << " -> ";
      temp = temp->next;
    }
}

void lenOfLL(Node* head)
{
    int count =0;
    Node *temp = head;
    while (temp != NULL)
    {
      count++;
      temp = temp->next;
    }
  cout << "\nlenght of linklist is :: " << count;
}

bool checkIfPresent(Node* head, int val)
{
  Node* temp = head;
  while(temp != NULL)
  {
    if(temp -> data == val) return true;
    temp = temp->next;
  }
  return false;
}

int main()
{
  vector<int> arr = {12, 1, 2, 5, 8, 7};

  Node *head = constructLL(arr);
  
  if(checkIfPresent(head,5)) {
    cout << "Given value is present in LL" << endl;
  } else {
    cout << "value not fount in LL" << endl;
  }
  linkListTravercel(head);
  lenOfLL(head);

}