
// --------------------- Array Implementation of Stack -----------------------------

// creation and some operation on stack // fixed size stack

// problem here is .... stack overflow and underflow

// #include <bits/stdc++.h>
// using namespace std;

// class jitesh
// {
// public:
//     int *arr;
//     int cap;
//     int top;

//     jitesh(int c)
//     {
//         cap = c;
//         arr = new int[cap];
//         top = -1;
//     }

//     void Push(int item)
//     {
//         if (top == cap - 1)
//             cout << "stack overflow" << endl;
//         else
//         {
//             top++;
//             arr[top] = item;
//         }
//     }

//     int Pop()
//     {
//         if(top == -1)
//             cout<<"Stack Underflow" ;
//         else{
//         int res = arr[top];
//         top--;
//         return res;
//         }
//     }

//     int Peek()
//     {
//         if(top == -1)
//             cout<< " there is not any elements";
//         else
//             return arr[top];
//     }

//     bool Isempty()
//     {
//         if (top != -1)
//             return false;
//         else
//             return true;
//     }
//     int size()
//     {
//         return (top + 1);
//     }

//     void Print()
//     {
//         for (int i = 0; i <= top; i++)
//             cout << arr[i] << " ";
//         cout << endl;
//     }
// };

// int main()
// {

//     jitesh j(5);
//     j.Push(100);
//     j.Push(200);
//     j.Push(300);
//     j.Push(400);
//     j.Push(500);
//     j.Push(600);

//     j.Print();

//     cout << j.Pop() << endl;

//     j.Print();

//     cout << j.Peek() << endl;
//     cout << j.size();

//     return 0;
// }

// Dynamic stack implementation

// #include<bits/stdc++.h>
// using namespace std ;

// class jitesh
// {
//     public :

//     vector<int> v ;
//     void Push(int item)
//     {
//         v.push_back(item);
//     }
//     int Pop()
//     {
//         int res = v.back();
//         v.pop_back();
//         return res ;
//     }
//     int Size()
//     {
//         return v.size() ;
//     }
//     int peek()
//     {
//         return v.back();
//     }
//     bool Isempty()
//     {
//         return v.empty();
//     }

//     int Print()
//     {
//         for(int i = 0 ; i< v.size() ;i++)
//             cout<< v[i] <<" ";
//         cout<< endl ;
//     }
// };

// int main()
// {
//     jitesh j ;

//     j.Push(100);
//     j.Push(200);
//     j.Push(300);
//     j.Push(400);
//     j.Push(500);
//     j.Push(600);
//     j.Push(700);

//     j.Print();

//     cout<< j.Pop() << endl ;
//     j.Print();
//     cout<< j.peek() << endl ;
//     cout<< j.Size() << endl ;

//     return 0 ;

// }

// --------------------- Linked List Implementation of Stack -----------------------------

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//  int data ;
//  node *next ;

//  node(int key)
//  {
//     data = key ;
//     next = NULL ;
//  }
// };

// class jitesh
// {
//     public :

//     node *head ;
//     int Size ;

//     jitesh()
//     {
//         head = NULL;
//         Size = 0 ;
//     }

//     void push(int data)
//     {
//         node *temp = new node(data);
//         temp->next = head ;
//         head = temp ;
//         Size++;
//     }
//     int pop()
//     {
//         if(head == NULL)
//             return 0;
//         else
//         {
//         node *temp = head;
//         int res = head->data ;
//         head = head->next;
//         delete temp ;
//         Size--;
//         return res ;
//         }
//     }
//     int size()
//     {
//         return Size;
//     }
//     int peek()
//     {
//         if(head==NULL)
//             return 0 ;
//         else
//             return (head->data);
//     }

//     bool Isempty()
//     {
//         if(head == NULL)
//             return true;
//         else
//             return false;
//     }

//     void Print()
//     {
//         for(node *curr = head ; curr!=NULL;curr = curr->next)
//             cout<< curr->data <<" " ;
//         cout<< endl ;
//     }
// };

// int main()
// {

//     jitesh j ;

//     j.push(10);
//     j.push(20);
//     j.push(30);
//     j.push(40);
//     j.push(50);
//     j.push(60);

//     j.Print() ;
//     cout<< j.peek() << endl;
//     cout<< j.pop()<< endl;

//     j.Print();

//     return 0 ;

// }

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

// class jitesh
// {
// public:
//     node *head;
//     int Size;

//     jitesh()
//     {
//         head = NULL;
//         Size = 0;
//     }

//     void Push(int item)
//     {
//         node *temp = new node(item);
//         temp->next = head;
//         head = temp;
//         Size++;
//     }

//     int Pop()
//     {
//         if (head == NULL)
//             return 0;
//         else
//         {
//             int res = head->data;
//             node *temp = head;
//             head = head->next;
//             delete temp;
//             Size-- ;
//             return res;
//         }
//     }
//     int size()
//     {
//         return Size;
//     }
//     int Peek()
//     {
//         if (head == NULL)
//             return 0;
//         else
//             return (head->data);
//     }
//     bool Isempty()
//     {
//         if (head == NULL)
//             return true;
//         else
//             return false;
//     }

//     void Print()
//     {
//         for (node *curr = head; curr != NULL; curr = curr->next)
//             cout << curr->data << " ";
//         cout << endl;
//     }
// };

// int main()
// {

//     jitesh j;

//     j.Push(10);
//     j.Push(20);
//     j.Push(30);
//     j.Push(40);
//     j.Push(50);
//     j.Push(60);

//     j.Print();
//     cout << j.Peek() << endl;
//     cout << j.Pop() << endl;
//     cout << j.Pop() << endl;

//     j.Print();
//     cout<< j.size() <<endl ;

//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------

// Balanced Parathesis -->
//  we can not solve this problem without using stack ..
//  we can but it will become very complecated.........

// #include <bits/stdc++.h>
// using namespace std;

// bool matching(char a, char b)
// {
//     return ((a == '(' && b == ')') ||
//             (a == '[' && b == ']') ||
//             (a == '{' && b == '}')) ;
// }

// bool Paranthesis(string str)
// {
//     stack< char > s;

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == '(' || str[i] == '{' || str[i] == '[')
//             s.push(str[i]);
//         else
//         {
//             if (s.empty() == true)
//                 return false;
//             if (matching(s.top(), str[i]) == false)
//                 return false ;
//             else
//                 s.pop();
//         }
//     }
//     return (s.empty() == true );
// }

// int main()
// {
// bool res ;
// string str =  "({[]})" ;

// res = Paranthesis(str);
// cout<< res ;

// return 0 ;

// }

// Insert Two Stack In an Array

// #include<bits/stdc++.h>
// using namespace std ;

// class jitesh
// {
//     public :

//     int *arr , cap , top1 , top2 ;

//     jitesh(int n)
//     {
//         cap = n ;
//         top1 = -1;
//         top2 = cap;
//         arr = new int[n];
//     }

//     int Push1(int item)
//     {
//         if(top1 < top2 )
//         {
//             top1++;
//             arr[top1] = item ;
//         }
//         else
//             return 0;
//     }
//     int Push2(int item)
//     {
//         if(top2 > top1 )
//         {
//             top2 --;
//             arr[top2] = item ;
//         }
//         else
//             return 0;
//     }
//     int Pop1()
//     {
//         if(top1 >= 0)
//         {
//             int x = arr[top1];
//             top1 --;
//             return x ;
//         }
//     }
//     int Pop2()
//     {
//         if( top2 < cap)
//         {
//             int y = arr[top2];
//             top2 ++ ;
//             return y ;
//         }
//     }

//     void Print()
//     {
//         cout<<"top1 :" <<" " ;
//         for(int i=0 ; i<= top1 ;i++)
//             cout<< arr[i]<<" ";
//         cout<<endl ;
//         cout<< "top2 :"<<" ";
//         for(int i= cap-1 ; i>= top2 ;i--)
//             cout<< arr[i]<<" ";
//         cout<<endl ;

//     }
// };

// int main()
// {
//     jitesh j(7);

//     j.Push1(100);
//     j.Push1(200);
//     j.Push1(300);
//     j.Push1(400);
//     j.Push2(1100);
//     j.Push2(1200);
//     j.Push2(1300);

//     j.Print();

//     cout<< "Popped Item : " << j.Pop1()<< endl ;
//     cout<< "Popped Item : " <<j.Pop2()<< endl ;

//     j.Print();

//     return 0 ;
// }

// Stock Span Problem [naive solution (O(n^2))]

// #include<bits/stdc++.h>
// using namespace std ;

// void span(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int Span = 1;

//         for(int j = i-1 ; j>=0;j--)
//         {
//             if(arr[j]<=arr[i])
//                 Span++ ;
//         }
//         cout<< Span <<" ";
//     }
// }

// int main()
// {
//     int n  ;

//     int arr[]= {40,30,20,10} ;
//     span(arr,sizeof(arr)/sizeof(arr[0]));

//     return 0 ;
// }

// Stock Span Problem [efficient solution (O(n)) ]

// #include<bits/stdc++.h>
// using namespace std ;

// void span(int arr[],int n)
// {
//     stack<int> s ;
//     s.push(0);
//     cout<< 1 <<" ";

//     for(int i=1;i<n;i++)
//     {
//         while(s.empty() == false && arr[s.top()] <= arr[i])
//         {
//             s.pop();
//         }

//         int Span = s.empty() ? i+1 : i-s.top() ;
//         cout<< Span <<" " ;
//         s.push(i);
//     }
// }
// int main()
// {
//     int n  ;

//     int arr[]= {60,10,20,40,35,30,50,70,65} ;
//     span(arr,sizeof(arr)/sizeof(arr[0]));

//     return 0 ;
// }

// Previous Greater Elements [ Naive Solution (O(n^2))]

// #include<bits/stdc++.h>
// using namespace std ;

// void PrevGre(int arr[],int n)
// {
//     cout<< -1 <<" ";
//     for(int i=1;i<n;i++)
//     {
//         int j ;
//         for(j = i-1 ; j>=0;j--)
//         {
//             if(arr[j]>arr[i])
//             {
//                 cout<< arr[j]<< " ";
//                 break;
//             }
//         }
//         if(j == -1)
//             cout<< -1 <<" ";

//     }
// }

// int main()
// {
//     int n  ;

//     int arr[]= {15,10,18,12,4,6,2,8} ;
//     PrevGre(arr,sizeof(arr)/sizeof(arr[0]));

//     return 0 ;
// }

// Previous Greater Elements [ Naive Solution (O(n))]

// #include<bits/stdc++.h>
// using namespace std ;

// void PrevGre(int arr[],int n)
// {
//     stack<int> s ;
//     s.push(arr[0]);
//     cout<< -1 <<" ";
//     for(int i=1;i<n;i++)
//     {
//         while( s.empty() == false && s.top() <= arr[i])
//             s.pop();

//         int pg = s.empty() ? -1 : s.top();
//         cout<< pg << " ";
//         s.push(arr[i]);
//     }
// }
// int main()
// {
//     int n  ;
//     int arr[]= {15,10,18,12,4,6,2,8} ;
//     PrevGre(arr,sizeof(arr)/sizeof(arr[0]));
//     return 0 ;
// }

// Next Greater Elements

// Output will in reverse order .. we have to reverse it

// #include <bits/stdc++.h>
// using namespace std;
// void NxGreat(int arr[], int n)
// {
//     stack<int> s;

//     s.push(arr[n - 1]);
//     cout << -1 <<" ";

//     for (int i = n - 2; i >= 0; i--)
//     {
//         while (s.empty() == false && s.top() <= arr[i])
//             s.pop();

//         int pg = (s.empty()) ? (-1) : (s.top());
//         cout << pg << " ";
//         s.push(arr[i]);
//     }
// }

// int main()
// {

//         int n  ;
//     int arr[]= {5,15,10,8,6,12,9,18} ;
//     NxGreat(arr,sizeof(arr)/sizeof(arr[0]));
//     return 0 ;
// }

// Largest rectangular Area In Histogram

// #include<bits/stdc++.h>
// using namespace std ;

// void Histo(int arr[],int n)
// {
//     int res = 0;

//     for(int i=0;i<n;i++)
//     {
//         int curr = arr[i];
//         for(int j= i-1;j>=0;j--)
//         {
//             if(arr[j]>=arr[i])
//                 curr = curr + arr[i];
//             else
//                 break;
//         }
//         for(int j = i+1 ;j< n ;j++)
//         {
//             if(arr[j]>=arr[i])
//                 curr = curr + arr[i];
//             else
//                 break;
//         }

//         res = max(res , curr);
//     }
//     cout<< res ;
// }
// int main()
// {

//     int n  ;
//     // int arr[]= {6,2,5,4,1,5,6} ; //  output --> 10
//     int arr[]= {2,5,1} ;    //output --> 5
//     Histo(arr,sizeof(arr)/sizeof(arr[0]));
//     return 0 ;

// }

// Infix to Postifx

// #include <bits/stdc++.h>
// using namespace std;

// bool isOperator(char c)
// {
//     if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
//         return true;
//     else
//         return false;
// }

// int precedence(char c)
// {
//     if (c == '^')
//         return 3;
//     else if (c == '*' || c == '/')
//         return 2;
//     else if (c == '+' || c == '-')
//         return 1;
//     else
//         return -1;
// }
// string InfixtoPosstfix(stack<char> s, string infix)
// {
//     string postfix;
//     for (int i = 0; i < infix.length(); i++)
//     {
//         if (infix[i] >= 'a' && infix[i] <= 'z' || infix[i] >= 'A' && infix[i] <= 'Z')
//         {
//             postfix += infix[i];
//         }
//         else if (infix[i] == '(')
//         {
//             s.push(infix[i]);
//         }
//         else if (infix[i] == ')')
//         {
//             while ( (s.top() != '(') && (!s.empty()))
//             {
//                 char temp = s.top();
//                 postfix += temp;
//                 s.pop();
//             }
//             if (s.top() == '(')
//                 s.pop();
//         }
//         else if (isOperator(infix[i]))
//         {
//             if (s.empty())
//             {
//                 s.push(infix[i]);
//             }
//             else
//             {
//                 if (precedence(infix[i]) > precedence(s.top()))
//                 {
//                     s.push(infix[i]);
//                 }
//                 else if ((precedence(infix[i]) == precedence(s.top())) && (infix[i] == '^'))
//                 {
//                     s.push(infix[i]);
//                 }
//                 else
//                 {
//                     while ((!s.empty()) && (precedence(infix[i]) <= precedence(s.top())))
//                     {
//                         char temp = s.top();
//                         postfix += temp;
//                         s.pop();
//                     }
//                     s.push(infix[i]);
//                 }
//             }
//         }
//     }
//     while (!s.empty())
//     {
//         postfix += s.top();
//         s.top();
//     }

//     return postfix;
// }

// int main()
// {

//     string infix_exp, postfix_exp;
//     cout << "Enter a Infix Expression :" << endl;
//     cin >> infix_exp;

//     stack<char> stack;

//     cout << "INFIX EXPRESSION: " << infix_exp << endl;

//     postfix_exp = InfixtoPosstfix(stack, infix_exp);

//     cout << "POSTFIX EXPRESSION: " << postfix_exp;

//     return 0;
// }

// Infix To Postfix

// #include<bits/stdc++.h>
// using namespace std ;

// bool Operator( char c)
// {
//     if( c =='+' || c =='-' || c =='/'|| c =='^'|| c =='*')
//         return true ;
//     else
//         return false ;
// }
// int Precedence( char  val)
// {
//     if( val == '^')
//         return 3;
//     else if(val == '*' || val == '/')
//         return 2 ;
//     else if( val == '+' || val == '-')
//         return 1 ;
//     else
//         return -1 ;
// }

// string InfixToPostfix( stack<char> s , string infix)
// {
//      string postfix ;
//      for(int i=0;i< infix.length() ; i++)
//      {
//         if(infix[i]>='a' && infix[i]<='z' || infix[i]>='A' && infix[i]<='Z')
//         {
//             postfix += infix[i];
//         }
//         else if( infix[i] == '(')
//         {
//             s.push(infix[i]);
//         }
//         else if(infix[i] == ')')
//         {
//             while((!s.empty()) && s.top() != '(')
//             {
//                 char temp = s.top();
//                 postfix += temp ;
//                 s.pop();
//             }
//             if( s.top() == '(')
//             {
//                 s.pop();
//             }
//         }
//         else if( Operator(infix[i]))
//         {
//             if( Precedence(infix[i]) > Precedence(s.top()))
//             {
//                 s.push(infix[i]);
//             }
//             else if(Precedence(infix[i]) == Precedence(s.top()) && infix[i] == '^')
//             {
//                 s.push(infix[i]);
//             }
//             else
//             {
//                 while(!s.empty() && Precedence(infix[i]) <= Precedence(s.top()))
//                 {
//                     char temp = s.top();
//                     postfix += temp ;
//                     s.pop();
//                 }
//                 s.push(infix[i]);
//             }

//         }

//      }
//      while(!s.empty())
//      {
//         postfix += s.top();
//         s.pop();
//      }

//      return postfix ;
// }

// int main()
// {

//     string infix_exp , postdfix_exp ;
//     cout<<"enter the Infix Expression : " ;
//     cin>> infix_exp ;

//     stack<char> stack ;

//     cout<< "infix_exp is : " << infix_exp <<endl ;

//     postdfix_exp = InfixToPostfix( stack , infix_exp);

//     cout<<"enter the Postfix Expression : " << postdfix_exp << endl ;

//     return 0 ;

// }

//--------------------------------------- Problems ----------------------------------------------------

// Delete middle element of a stack

// input - 1 2 3 4 5
// output - 1 2 4 5 

#include <bits/stdc++.h>
using namespace std;

void deleteMid(stack<int> &s, int sizeOfStack)
{
    int n = s.size() / 2;

    stack<int> st2  ;

    for (int i = 1; i <= n; i++)
    {
        st2.push(s.top());
        s.pop();
    }
    s.pop();

   while(!st2.empty())
   {
    
        s.push(st2.top())  ;
        st2.pop();
   }
   while(!s.empty())
   {
        cout<< s.top()<<" ";
        s.pop();
   }
    
   
}

int main()
{

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int d = s.size();
    deleteMid(s, d);

    return 0;
}