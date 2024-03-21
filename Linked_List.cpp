
// Simple(singly LL) Linked List Creation
//  #include<bits/stdc++.h>
//  using namespace std ;

// struct node
// {
//     int data ;
//     node *next ;

//     node(int x)
//     {
//         data = x ;
//         next = NULL ;
//     }
// } ;

// int main()
// {

// 1st methode

// node *head = new node(10);
// node *temp1 = new node(20);
// node *temp2 = new node(30);

// head->next = temp1 ;
// temp1->next = temp2 ;

// cout<< head->data<<endl ;
// cout<< temp1->data << endl ;
// cout<< temp2->data ;

// 2nd methode

//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);

//     cout<< head->data<<endl ;
//     cout<< head->next->data << endl ;
//     cout<< head->next->next->data ;

//     return 0 ;
// }

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *next ;

//     node(int x)
//     {
//         data = x ;
//         next = NULL ;
//     }
// };

// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30) ;

//     cout<<head->data << endl ;
//     cout<<head->next->data << endl ;
//     cout<< head->next->next->data ;

//     return 0 ;

// }

// traversing singly LL through function

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//      node *next ;

//      node( int val)
//      {
//         data = val ;
//         next = NULL ;
//      }
// };

// void Print(node *head)
// {

//     while(head!=NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next ;
//     }
//             // OR
//     // node *curr = head ;
//     // while(curr!=NULL)
//     // {
//     //     cout<< curr->data <<" ";
//     //     curr=curr->next ;
//     // }
// }

// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);

//     Print(head);

//     return 0 ;
// }

// Insert Item at beginning in singly LL

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *next ;

//     node(int val)
//     {
//         data = val ;
//         next = NULL;
//     }
// };

// node *insertBeg(node *head , int val)
// {
//     node *temp = new node(val);
//     temp->next = head;
//     return temp ;
// }

// void Print( node *head)
// {
//     while(head!=NULL)
//     {
//         cout<< head->data << " ";
//         head = head->next ;
//     }
// }
// int main()
// {
//     node *head = new node(40) ;
//     head = insertBeg(head,30);
//     head = insertBeg(head,20);
//     head = insertBeg(head,10);

//     Print(head);
// }

// Insert at end of singly LL

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *next ;

//     node(int val)
//     {
//         data = val ;
//         next = NULL;
//     }
// };

// node *insertAtEnd(node *head , int val)
// {
//     node *temp = new node(val) ;
//     if(head == NULL)
//         return temp ;

//     node *curr = head ;
//     while(curr->next != NULL)
//     {
//         curr= curr->next;
//     }
//     curr->next = temp ;
//     return head ;

// }

// void Print(node *head)
// {
//     while(head != NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next ;
//     }
// }
// int main()
// {
//     node *head = NULL ;
//     head = insertAtEnd(head,10);
//     head = insertAtEnd(head,20);
//     head = insertAtEnd(head,30);

//     Print(head);

// return 0 ;
// }

// Delete first Node in Singly LL

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *next ;

//     node(int val)
//     {
//         data = val ;
//         next = NULL;
//     }
// };

// node *insertAtEnd(node *head , int val)
// {
//     node *temp = new node(val) ;
//     if(head == NULL)
//         return temp ;

//     node *curr = head ;
//     while(curr->next != NULL)
//     {
//         curr= curr->next;
//     }
//     curr->next = temp ;
//     return head ;

// }

// node *dele1st(node *head)
// {
//     if(head == NULL)
//         return NULL ;

//     node *temp = head->next;
//     delete head ;
//     return temp ;
// }

// void Print(node *head)
// {
//     while(head != NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next ;
//     }
// }
// int main()
// {
//     node *head = NULL ;
//     head = insertAtEnd(head,10);
//     head = insertAtEnd(head,20);
//     head = insertAtEnd(head,30);

//     head = dele1st(head);
//     Print(head);

// return 0 ;
// }

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *next ;

//     node(int val)
//     {
//         data = val ;
//         next = NULL ;
//     }
// };

// // Insert at last

// node *insertAtLast(node *head,int key)
// {
//     node *temp = new node(key);
//     if(head== NULL)
//         return temp ;
//     node *curr = head ;
//     while(curr->next != NULL)
//     {
//         curr = curr->next ;
//     }
//     curr->next = temp ;
//     return head ;
// }

// node *deleAtLast(node *head)
// {
//     if(head == NULL)
//         return NULL ;

//     node *curr = head ;
//     while(curr->next->next !=NULL)
//     {
//         curr = curr->next ;
//     }

//     delete (curr->next);
//     curr->next = NULL ;
//     return head ;
// }

// void Print(node *head)
// {
//     while(head != NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next ;
//     }
// }

// int main()
// {
//     node *head = NULL ;
//     head = insertAtLast(head,10);
//     head = insertAtLast(head,20);
//     head = insertAtLast(head,30);
//     head = insertAtLast(head,40);
//     head = insertAtLast(head,50);

//     head = deleAtLast(head);
//     Print(head);

//     return 0 ;

// }

// Insert at Given Position

// #include<bits/stdc++.h>
// using namespace std ;
// struct node
// {
//     int data;
//     node *next ;

//     node(int key)
//     {
//         data = key ;
//         next = NULL ;
//     }
// };

// // Insert at Last

// node *insertAtLast(node *head,int key)
// {
//     node *temp = new node(key);
//     if(head== NULL)
//         return temp ;
//     node *curr = head ;
//     while(curr->next != NULL)
//     {
//         curr = curr->next ;
//     }
//     curr->next = temp ;
//     return head ;
// }
// void Print(node *head)
// {
//     while(head != NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next ;
//     }
// }

// // Insert at given position

//  node *insAtGiven( node *head , int data , int pos)
//  {
//     node *temp = new node(data);

//     if(pos == 1)
//     {
//         temp->next=head;
//         return temp ;
//     }

//     node *curr = head ;
//     for(int i=1;i<=pos-2 && curr!=NULL ; i++)
//     {
//         curr=curr->next;
//     }
//     if(curr == NULL)
//         return head ;

//     temp->next = curr->next ;
//     curr->next = temp ;
//     return head ;

//  }
// int main()
// {

//     node *head = NULL ;

//     head = insertAtLast(head,10);
//     head = insertAtLast(head,20);
//     head = insertAtLast(head,30);
//     head = insertAtLast(head,40);
//     head = insertAtLast(head,50);
//     cout<<"before insertion at given position : " ;
//     Print( head);
//     head = insAtGiven(head,15,2);
//     cout<< endl ;
//     cout<<"after insertion at given position : " ;
//     Print(head);

// }

// Searching in a singly Linked List

// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// // Insert at Last

// node *insertAtLast(node *head, int key)
// {
//     node *temp = new node(key);
//     if (head == NULL)
//         return temp;
//     node *curr = head;
//     while (curr->next != NULL)
//     {
//         curr = curr->next;
//     }
//     curr->next = temp;
//     return head;
// }

// int search(node *head, int item)
// {
//     int pos = 1;
//     node *curr = head;

//     while (curr != NULL)
//     {
//         if(curr->data == item)
//             return pos ;
//         else
//         {
//             pos++;
//             curr = curr->next;
//         }
//     }
//     return -1 ;
// }

// int main()
// {
//     int ret ;

//     node *head = NULL ;

//     head = insertAtLast(head,10);
//     head = insertAtLast(head,20);
//     head = insertAtLast(head,30);
//     head = insertAtLast(head,40);
//     head = insertAtLast(head,50);

//     ret = search(head,60);
//     cout<< "Item is present at pos : "<< ret ;

//     return 0 ;
// }
//------------------------------------------------------------------------------------------------------------

//                                              DOUBLY LINKED LIST

// NORMAL PROGRAM

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *prev;
//     node *next;

//     node(int key)
//     {
//         data = key ;
//         prev = NULL ;
//         next = NULL ;
//     }
// };

// void Print(node *head)
// {
//     while(head != NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next ;
//     }
// }
// int main()
// {
//     node *head = new node(10);
//     node *temp1 = new node(20);
//     node *temp2 = new node(30);

//     head->next=temp1;
//     temp1->prev = head;
//     temp1->next=temp2;
//     temp2->prev = temp1 ;

//     Print(head);

// }

// Insert at Begining

// #include<bits/stdc++.h>
// using namespace std ;
// struct node
// {
//     int data ;
//     node *prev;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         prev = NULL ;
//         next = NULL ;
//     }
// };

// // Insert at begining

// node *insFirst( node *head , int key)
// {
//     node *temp = new node(key);
//     temp->next = head ;
//     if(head!=NULL)
//         head->prev = temp ;
//     return temp ;
// }
// void Print(node *head)
// {
//     while(head!=NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next ;
//     }
// }
// int main()
// {

//     node *head = NULL ;
//     head = insFirst(head,40);
//     head = insFirst(head,30);
//     head = insFirst(head,20);
//     head = insFirst(head,10);

//     Print(head);
//     return 0 ;

// }

// Insert at End

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *prev;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         prev = next = NULL ;
//     }
// };

// node *insAtLast(node *head , int key)
// {
//     node *temp = new node(key);
//     if(head==NULL)
//         return temp ;

//     node *curr = head ;
//     while(curr->next != NULL)
//     {
//         curr = curr->next;
//     }
//     curr->next = temp ;
//     temp->prev = curr ;

//     return head ;
// }

// void Print( node *head)
// {
//     while(head !=NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next ;
//     }
// }
// int main()
// {
//     node *head = NULL ;
//     head = insAtLast(head,10);
//     head = insAtLast(head,20);
//     head = insAtLast(head,30);
//     head = insAtLast(head,40);
//     head = insAtLast(head,50);

//     Print(head);

//     return 0 ;
// }

// delete at HEAD

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *prev;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         prev = next = NULL ;
//     }
// };

// node *insAtLast(node *head , int key)
// {
//     node *temp = new node(key);
//     if(head==NULL)
//         return temp ;

//     node *curr = head ;
//     while(curr->next != NULL)
//     {
//         curr = curr->next;
//     }
//     curr->next = temp ;
//     temp->prev = curr ;

//     return head ;
// }

// node *deleBeg(node *head)
// {
//     if(head == NULL)
//         return NULL;

//     if(head->next ==NULL)
//     {
//         delete head ;
//         return NULL ;
//     }
//     else{
//         node *temp = head ;

//         head=head->next;
//         head->prev = NULL ;

//         delete temp ;
//         return head ;
//     }
// }

// void Print( node *head)
// {
//     while(head !=NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next ;
//     }
// }
// int main()
// {
//     node *head = NULL ;
//     head = insAtLast(head,10);
//     head = insAtLast(head,20);
//     head = insAtLast(head,30);
//     head = insAtLast(head,40);
//     head = insAtLast(head,50);

//     head = deleBeg(head);

//     Print(head);

//     return 0 ;
// }

// Delete at last in doubly linked list

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *prev;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         prev = next = NULL ;
//     }
// };

// node *insAtLast(node *head , int key)
// {
//     node *temp = new node(key);
//     if(head==NULL)
//         return temp ;

//     node *curr = head ;
//     while(curr->next != NULL)
//     {
//         curr = curr->next;
//     }
//     curr->next = temp ;
//     temp->prev = curr ;

//     return head ;
// }

// node *delelast(node *head)
// {
//     if(head == NULL)
//         return NULL;

//     if(head->next ==NULL)
//     {
//         delete head ;
//         return NULL ;
//     }
//     node *curr = head ;

//     while(curr->next !=NULL)
//     {
//         curr=curr->next;
//     }

//     curr->prev->next = NULL ;
//     delete curr ;
//     return head ;
// }

// void Print( node *head)
// {
//     while(head !=NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next ;
//     }
// }
// int main()
// {
//     node *head = NULL ;
//     head = insAtLast(head,10);
//     head = insAtLast(head,20);
//     head = insAtLast(head,30);
//     head = insAtLast(head,40);
//     head = insAtLast(head,50);
//     head = insAtLast(head,60);

//     head = delelast(head);

//     Print(head);

//     return 0 ;
// }

//-----------------------------------------------------------------------------------------------------------------------
// Circular Singly Linked List

// Traversal of singly circular linked list

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL ;
//     }
// };

// void Print(node *head)
// {
//     if(head == NULL)
//         return ;
//     cout<<head->data << " ";
//     for(node *p = head->next ; p != head ; p = p->next)

//             cout<<p->data<<" ";
// }

// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next= new node(40);
//     head->next->next->next->next = head ;

//     Print(head);

//     return 0 ;
// }

// insert at begin in singly circular linked list , time comp ->(O(n))

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// void Print(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     for (node *p = head->next; p != head; p = p->next)
//         cout << p->data << " ";
// }

// node *inrtAtBeg(node *head, int item)
// {

//     node *temp = new node(item);
//     if (head == NULL)
//         temp->next = temp;

//     node *curr = head;
//     while (curr->next != head)
//         curr = curr->next;

//     temp->next = head;
//     curr->next = temp;

//     return temp;
// }

// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = head;

//     head = inrtAtBeg(head, 5);
//     Print(head);

//     return 0;
// }

//  insert at begin in singly circular linked list , time comp ->(O(1))

// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;

//     node(int item)
//     {
//         data = item;
//         next = NULL;
//     }
// };
// void Print(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     for (node *p = head->next; p != head; p = p->next)
//         cout << p->data << " ";
// }

// node *inrtAtBeg(node *head, int item)
// {
//     node *temp = new node(item);

//     if (head == NULL)
//     {
//         temp->next = temp;
//         return temp;
//     }

//     temp->next = head->next;
//     head->next = temp;
//     int t = head->data;
//     head->data = temp->data;
//     temp->data = t;

//     return head;
// }
// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = head;

//     head = inrtAtBeg(head,5);
//     Print(head);

//     return 0;
// }

//  insert at end in singly circular linked list , time comp ->(O(1))

// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;

//     node(int item)
//     {
//         data = item;
//         next = NULL;
//     }
// };
// void Print(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     for (node *p = head->next; p != head; p = p->next)
//         cout << p->data << " ";
// }

// node *inrtAtEnd(node *head, int item)
// {
//     node *temp = new node(item);

//     if (head == NULL)
//     {
//         temp->next = temp;
//         return temp;
//     }

//     temp->next = head->next;
//     head->next = temp;
//     int t = head->data;
//     head->data = temp->data;
//     temp->data = t;

//     return temp;
// }
// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = head;

//     head = inrtAtEnd(head,5);
//     Print(head);

//     return 0;
// }

// delete head of the singly circular linked list O(n) [Naive Solution]

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };
// void Print(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     for (node *p = head->next; p != head; p = p->next)
//         cout << p->data << " ";
// }

// node *delBeg(node *head)
// {
//     if (head == NULL)
//         return NULL;

//     if (head->next == head)
//     {
//         delete head;
//         return NULL;
//     }
//     else
//     {
//         node *curr = head;
//         while (curr->next != head)
//             curr = curr->next;

//         curr->next = head->next;
//         delete head;
//         return (curr->next);
//     }
// }
// int main()
// {

//     node *head = new node(5);
//     head->next = new node(10);
//     head->next->next = new node(15);
//     head->next->next->next = new node(20);
//     head->next->next->next->next = head;

//     head = delBeg(head);
//     Print(head);

//     return 0;
// }

// delete head of the singly circular linked list O(1) [Efficient Solution]

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *next;
//     node(int key)
//     {
//         data = key ;
//         next = NULL ;
//     }
// };
// void Print(node *head)
// {
//     if(head == NULL)
//     {
//         return ;
//     }
//     cout<<head->data<<" ";
//     for(node *P=head->next ; P!=head; P=P->next)
//         cout<<P->data <<" ";
// }

// node *delBeg(node *head)
// {
//     if(head== NULL)
//         return NULL;
//     if(head->next == head)
//     {
//         delete head ;
//         return NULL ;
//     }
//     else{
//         head->data = head->next->data ;
//         node *temp = head->next ;
//         head->next = head->next->next ;

//         delete temp ;
//         return head;
//     }
// }
// int main()
// {
//     node *head = new node(5);
//     head->next = new node(10);
//     head->next->next = new node(15);
//     head->next->next->next = new node(20);
//     head->next->next->next->next = head ;

//     cout<<"before deletion  ";
//     Print(head);
//     cout<< "\n";
//     head = delBeg(head);
//     cout<<"After deletion  ";
//     Print(head);

//     return 0 ;
// }

// Delete Kth node from a Circular Linked list O(k)

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;
//     node(int key)
//     {
//         data = key;
//         next = NULL ;
//     }
// };

//  void Print( node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     cout << head->data << " ";
//     for (node *P = head->next; P != head; P = P->next)
//         cout << P->data << " ";
// }
// node *delBeg(node *head)
// {
//     if(head== NULL)
//         return 0;
//     if(head->next == head)
//     {
//         delete head ;
//         return NULL ;
//     }
//     else{
//         head->data = head->next->data ;
//         node *temp = head->next ;
//         head->next = head->next->next ;

//         delete temp ;
//         return head;
//     }
// }

// node *delKth(node *head , int k)
// {
//     if(head == NULL)
//         return NULL;
//     if(k==1)
//         return delBeg(head);

//     node *curr = head ;
//     for(int i = 0  ;i<k-2;i++)
//         curr = curr->next ;

//     node *temp = curr->next ;
//     curr->next = curr->next->next ;
//     delete temp ;

//     return head ;
// }
// int main()
// {
//     node *head = new node(5);
//     head->next = new node(10);
//     head->next->next = new node(15);
//     head->next->next->next = new node(20);
//     head->next->next->next->next = new node(25);
//     head->next->next->next->next->next = head ;

//     head = delKth(head , 3);
//     Print(head);
//     return 0 ;
// }

// Sorted Insertion In Singly Linked List

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// node *sortedIns(node *head, int item)
// {
//     node *temp = new node(item);
//     if (head == NULL)
//         return temp;
//     if (item < head->data)
//     {
//         temp->next = head;
//         return temp;
//     }
//     node *curr = head;
//     while (curr->next != NULL && item > curr->next->data)
//     {
//         curr = curr->next;
//     }

//     temp->next = curr->next;
//     curr->next = temp;
//     return head;
// }
// void Print(node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     cout << head->data << " ";
//     for (node *P = head->next; P != head; P = P->next)
//         cout << P->data << " ";
// }

// int main()
// {

//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);

//     cout << "before insertion : ";
//     Print(head);

//     head = sortedIns(head, 25);
//     cout << ("After Insertion : ");
//     Print(head);

//     return 0;
// }

// Print middle of the linked list (O(n))

// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// void MiddleEle(node *head)
// {
//     if (head == NULL)
//         return;
//     int count = 0;
//     node *curr;
//     for (curr = head; curr != NULL; curr = curr->next)
//         count++;
//      curr = head;

//      for(int i=0;i<count/2;i++)
//         curr=curr->next;

//     cout<< curr->data ;
// }
// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(60);

//     MiddleEle(head);

//     return 0 ;
// }

// Print middle of the linked list (O(1))

// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// void MiddleEle(node *head)
// {
//     if (head == NULL)
//         return;
//     node *slow = head , *fast = head ;
//     while( fast != NULL && fast->next !=NULL)
//     {
//         slow = slow->next ;
//         fast =fast->next->next ;
//     }
//     cout<< slow->data ;
// }
// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     // head->next->next->next->next->next = new node(60);

//     MiddleEle(head);

//     return 0 ;
// }

// 1st Method -> Find Kth node from end of linked list (O(n))

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *next;

//     node(int key)
//     {
//         data = key ;
//         next = NULL;
//     }
// };

// void KthElem(node *head , int k)
// {
//     if(head == NULL)
//         return;

//     int count = 0 ;
//     node *curr = head ;
//     for( curr ; curr!=NULL ; curr = curr->next)
//             count++ ;
//     if(count < k)
//         return;
//     curr = head ;
//     for(int i=1;i<(count-k+1);i++)
//         curr = curr->next ;
//     cout<< curr->data;
// }

// int main()
// {
//     int k;
//     cout<<"Enter the kth Elements ";
//     cin>> k ;
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(60);

//     KthElem(head , k);

//     return 0 ;

// }

// 2nd Method -> Find Kth node from end of linked list (O(n))

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *next;

//     node(int key)
//     {
//         data = key ;
//         next = NULL;
//     }
// };

// void KthElem(node *head , int k)
// {
//     if(head == NULL)
//         return;
//     node *first = head ;
//     for(int i=0;i<k;i++)
//     {
//         if(first == NULL)
//             return;
//         first = first->next;
//     }
//     node *second = head ;
//     while(first != NULL)
//     {
//         second = second->next;
//         first = first->next ;
//     }
//     cout<< second->data ;
// }

// int main()
// {
//     int k;
//     cout<<"Enter the kth Elements ";
//     cin>> k ;
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(60);

//     KthElem(head , k);
//     return 0 ;
// }

// Reverse Linked List

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *next ;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };
// node *Reverse(node *head)
// {
//     vector<int> arr;

//     for(node *curr = head ; curr !=NULL;curr=curr->next)
//         arr.push_back(curr->data);
//     for(node *curr = head ;curr!=NULL;curr=curr->next)
//     {
//         curr->data = arr.back();
//         arr.pop_back() ;
//     }
//     for(node *curr = head ;curr!=NULL;curr=curr->next)
//     {
//        cout<< curr->data <<" " ;
//     }
// }
// int main()
// {

//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(60);

//     Reverse(head);

//     return 0 ;
// }

// Remove Duplicates From the Sorted Linked List

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// node *RmDuplicate(node *head)
// {
//     node *curr = head;
//     while (curr != NULL && curr->next != NULL)
//     {
//         if (curr->data == curr->next->data)
//         {
//             node *temp = curr->next;
//             curr->next = curr->next->next;
//             delete temp;
//         }
//         else
//             curr = curr->next;
//     }
//     return head;
// }
// void Print(node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     cout << head->data << " ";
//     for (node *P = head->next; P != head; P = P->next)
//         cout << P->data << " ";
// }

// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(20);
//     head->next->next->next = new node(30);
//     head->next->next->next->next = new node(30);
//     head->next->next->next->next->next = new node(30);

//     head = RmDuplicate(head);
//     Print(head);

//     return 0 ;
// }

// Reverse a Linked List

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *next ;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };
// void *Reverse(node *head)
// {
//     vector<int> arr;

//     for(node *curr = head ; curr !=NULL;curr=curr->next)
//         arr.push_back(curr->data);
//     for(node *curr = head ;curr!=NULL;curr=curr->next)
//     {
//         curr->data = arr.back();
//         arr.pop_back() ;
//     }
//     for(node *curr = head ;curr!=NULL;curr=curr->next)
//     {
//        cout<< curr->data <<" " ;
//     }
// }
// int main()
// {

//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(60);

//     Reverse(head);

//     return 0 ;
// }

// Reverse a Linked List

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//      node *next;

//      node(int key)
//      {
//         data = key ;
//         next = NULL;
//      }
// };

// void reverse(node *head)
// {
//     vector<int> arr ;

//     for(node *curr = head ; curr!= NULL ; curr= curr->next)
//         arr.push_back(curr->data);

//     for(node *curr = head ; curr !=NULL ; curr = curr->next)
//     {
//         curr->data = arr.back();
//         arr.pop_back();
//     }
//     for( node *curr = head ; curr != NULL ; curr = curr->next)
//         cout<< curr->data << " ";

// }
// int main()
// {

//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(60);

//     reverse(head);

//     return 0 ;

// }

// Remove Duplicates from Linked List

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//      node *next;

//      node(int key)
//      {
//         data = key ;
//         next = NULL;
//      }
// };

// void RemoveDupli(node *head)
// {

//     node *curr = head ;

//     while(curr != NULL && curr->next != NULL)
//     {
//         if(curr->data == curr->next->data)
//         {
//             node *temp = curr->next;
//             curr->next = curr->next->next;
//             delete temp ;
//         }
//         else
//             curr = curr->next ;
//     }

//     for(node *curr = head ; curr != NULL ; curr = curr->next)
//         cout<< curr->data <<" ";

// }
// int main()
// {

//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(20);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(50);

//     RemoveDupli(head);

//     return 0 ;

// }

// Detection of the loop from the Linked List using Hashing technique

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// bool DetectLoop(node *head)
// {
//     unordered_set< int > s ;

//     for(node *curr = head ; curr !=NULL ; curr = curr->next)
//     {
//         if(s.find(curr->data) != s.end())
//             return true ;

//         s.insert(curr->data);
//     }
//     return false ;
// }
// int main()
// {

//     bool res ;
//     node *head = new node(10 );
//     head->next = new node(20 );
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(60);
//     head->next->next->next->next->next->next = head->next->next; // not pointing null
//     // head->next->next->next->next->next->next = NULL  ; // pointing to null

//      res = DetectLoop(head);
//     cout<< res ;
//     return 0;
// }

// Detection of the loop from the Linked List using [FLODY ALGORITHM]

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// bool DetectLoop(node *head)
// {
//    node *slow = head ;
//    node *fast = head;

//    while(fast !=NULL && fast->next != NULL)
//    {
//         slow = slow->next ;
//         fast = fast->next->next;

//         if(slow == fast)
//             return true;
//    }
//    return false ;
// }
// int main()
// {

//     bool res ;
//     node *head = new node(10 );
//     head->next = new node(20 );
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(60);
//     head->next->next->next->next->next->next = head->next->next; // not pointing null
//     // head->next->next->next->next->next->next = NULL  ; // pointing to null

//      res = DetectLoop(head);
//     cout<< res ;
//     return 0;
// }

// Detect and remove loop from the Linked List using [FLODY ALGORITHM]

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// void DetAndRemLoop(node *head)
// {
//    node *slow = head ;
//    node *fast = head;

//    while(fast !=NULL && fast->next != NULL)
//    {
//         slow = slow->next ;
//         fast = fast->next->next;

//         if(slow == fast)
//             break;
//    }
//    if(slow != fast)
//     return;

//    slow = head ;
//    while(slow->next != fast->next )
//    {
//     slow = slow->next;
//     fast = fast->next;
//    }
//    fast->next = NULL ;
// }
// bool DetectLoop(node *head)
// {
//    node *slow = head ;
//    node *fast = head;

//    while(fast !=NULL && fast->next != NULL)
//    {
//         slow = slow->next ;
//         fast = fast->next->next;

//         if(slow == fast)
//             return true;
//    }
//    return false ;
// }
// int main()
// {

//     bool res ;
//     node *head = new node(10 );
//     head->next = new node(20 );
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(60);
//     head->next->next->next->next->next->next = head->next->next; // not pointing null
//     // head->next->next->next->next->next->next = NULL  ; // pointing to null

//      DetAndRemLoop(head); // here it will dectect and remove the loop
//      res = DetectLoop(head); // here it will check loop
//     cout<< res ;
//     return 0;
// }

// Intersection point of two linked list -- method 1

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// int intersection(node *head1 , node *head2)
// {
//     unordered_set< int > s ;

//     for(node *curr = head1 ; curr != NULL;curr = curr->next)
//         s.insert(curr->data);
//     for(node *curr1 = head2 ; curr1 != NULL ; curr1 = curr1->next)
//         {
//             if(s.find(curr1->data) != s.end())
//                 return (curr1->data);
//         }
// }

// int main()
// {
//     int res ;

//     node *head1 = new node(5);
//     head1->next = new node(8);
//     head1->next->next = new node(7);
//     head1->next->next->next = new node(10);
//     head1->next->next->next->next = new node(12);
//     head1->next->next->next->next->next = new node(15);

//     node *head2 = new node(9);
//     head2->next = new node(10);
//     head2->next->next = new node(12);
//     head2->next->next->next = new node(15);

//     res = intersection(head1 , head2);

//     cout<< res ;

//     return 0 ;

// }

// Intersection point of two linked list -- method 2

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };
// int intersection(node *head1, node *head2)
// {
//     int c1, c2 = 0;
//     int c3;
//     for (node *curr1 = head1; curr1 != NULL; curr1 = curr1->next)
//         c1++;
//     for (node *curr2 = head2; curr2 != NULL; curr2 = curr2->next)
//         c2++;

//     c3 = abs(c2-c1);
//     int mov = 0;
//     node *curr1 = head1;
//     while (mov != c3)
//     {
//         curr1 = curr1->next;
//         mov++;
//     }
//     node *curr2 = head2;

//     while (curr1 != NULL && curr2 != NULL)
//     {
//         if (curr1 == curr2)
//             return (curr1->data);
//         curr1 = curr1->next;
//         curr2 = curr2->next;
//     }
//     return -1 ;
// }

// int main()
// {
//     int res;

//     node *head1 = new node(5);
//     head1->next = new node(8);
//     head1->next->next = new node(7);
//     head1->next->next->next = new node(10);
//     head1->next->next->next->next = new node(12);
//     head1->next->next->next->next->next = new node(15);

//     node *head2 = new node(9);
//     head2->next = new node(10);
//     head2->next->next = new node(12);
//     head2->next->next->next = new node(15);

//     res = intersection(head1, head2);

//     cout << res;

//     return 0;
// }

// Delete a Node with only pointer given to it

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// void DelPointer(node *ptr)
// {
//     node *temp = ptr->next;
//     ptr->data = temp->data;
//     ptr->next = temp->next;

//     delete temp;
// }

// int main()
// {

//     node *head1 = new node(5);
//     head1->next = new node(8);
//     head1->next->next = new node(7);
//     head1->next->next->next = new node(10);
//     head1->next->next->next->next = new node(12);
//     head1->next->next->next->next->next = new node(15);

//     node *ptr = head1->next->next->next->next;

//     DelPointer(ptr);

//     for (node *curr = head1; curr != NULL; curr = curr->next)
//         cout << curr->data << " ";

//     return 0;
// }

// Merge Two Sorted Linked List

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// node *mergTwoSrtLL(node *a , node *b)
// {
//     node *tail = NULL;
//     node *head = NULL ;
//     if(a==NULL)
//         return b;
//     if(b==NULL)
//         return a ;

//     if(a->data <= b->data)
//     {
//         tail = head = a ;
//         a =a->next;
//     }
//     else{
//         tail = head = b ;
//         b = b->next ;
//     }

//     while( a !=NULL && b!=NULL)
//     {
//         if(a->data <= b->data)
//         {
//             tail->next = a ;
//             tail = a;
//             a = a->next;
//         }
//         else{
//             tail->next = b ;
//             tail = b;
//             b = b->next;
//         }
//     }
//     if(b == NULL)
//         tail->next = a ;
//     else
//         tail->next = b ;
//
//      return head ;

// }

// int main()
// {

//     node *head1 = new node(10);
//     head1->next = new node(20);
//     head1->next->next = new node(30);
//     head1->next->next->next = new node(40);
//     head1->next->next->next->next = new node(52);
//     head1->next->next->next->next->next = new node(65);

//     node *head2 = new node(5);
//     head2->next = new node(15);
//     head2->next->next = new node(35);
//     head2->next->next->next = new node(53);
//     head2->next->next->next->next = new node(75);
//     head2->next->next->next->next->next = new node(80);

//     head = mergTwoSrtLL(head1 , head2);
//     for(node *curr = head ; curr != NULL ; curr=curr->next)
//         cout<< curr->data <<" ";

//     return 0;
// }

// palindrome linked list [ character ]

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     char data;
//     node *next;

//     node(char key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// bool isPalindrome( node *head)
// {
//     stack<char> st;

//     for(node *curr = head ; curr !=NULL ; curr = curr->next)
//         st.push(curr->data);
//     for(node *curr = head ; curr !=NULL ; curr = curr->next)
//     {
//         if(st.top() != curr->data)
//             return false ;
//         st.pop();
//     }
//     return true ;
// }

// int main()
// {
//     bool res ;

//     node *head1 = new node('G');
//     head1->next = new node('E');
//     head1->next->next = new node('E');
//     head1->next->next->next = new node('G');
    
//     res = isPalindrome(head1);
//     cout<< res ;

// }




