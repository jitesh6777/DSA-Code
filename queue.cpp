
// simple Implementation 
// Enqueue = (O(1))
// Dequeue = (o(n))

// #include <bits/stdc++.h>
// using namespace std;

// // struct Queue
// class Queue
// {
//     public :
//     int size, cap;
//     int *arr;

//     Queue(int c)
//     {
//         cap = c;
//         size = 0;

//         arr = new int[cap];
//     }

//     bool isEmpty()
//     {
//         return (size == 0);
//     }
//     bool isfull()
//     {
//         return (size == cap);
//     }

//     void enque(int x )
//     {
//         if(isfull())
//             return;
//         arr[size] = x;
//         size++ ;
//     }

//     void deque()
//     {
//         if(isEmpty())
//             return;
//         for(int i=0;i< size-1 ;i++)
//         {
//             arr[i] = arr[i+1];
//         }
//         size-- ;
//     }

//     int getFront()
//     {
//         if(isEmpty())
//             return -1 ;
//         else 
//             return 1 ;
//     }
//     int getRear()
//     {
//         if(isEmpty())
//             return 0 ;
//         else
//             return(size-1);


//     }

//     void Print()
//     {
//         for(int i=0;i<size;i++)
//             cout<< arr[i]<<" " ;
//         cout<< endl ;
//     }
// };
// int main()
// {
//     Queue j(7) ;
//     j.enque(10);
//     j.enque(20);
//     j.enque(30);
//     j.enque(40);
//     j.enque(50);

//     cout<< j.getFront()<<endl;
//     cout<< j.getRear()<<endl;

//     j.Print();
//     j.deque();
//     j.Print();

//     return 0 ;



// }


//  Implementation 
// Enqueue = (O(1))
// Dequeue = (o(1))

// #include <bits/stdc++.h>
// using namespace std;

// // struct Queue
// class Queue
// {
//     public :
//     int size,front , cap;
//     int *arr;

//     Queue(int c)
//     {
//         cap = c;
//         size = 0;
//         front = 0 ;

//         arr = new int[cap];
//     }

//     bool isEmpty()
//     {
//         return (size == 0);
//     }
//     bool isfull()
//     {
//         return (size == cap);
//     }

//     int getFront()
//     {
//         if(isEmpty())
//             return -1 ;
//         else 
//             return front;
//     }
//     int getRear()
//     {
//         if(isEmpty())
//             return 0 ;
//         else
//             return((front+size - 1) % cap );
//     }

//     void enque(int x )
//     {
//         if (isfull())
//             return;
//         int Rare = getRear();
//         Rare = (Rare+1)% cap ;

//         arr[Rare] = x ;
//         size++ ;

//     }

//     void deque()
//     {
//        if(isEmpty())
//          return;

//         front = (front+1)% cap ;
//         size-- ;
//     }
//     void Print() // here is problem on printing 
//     {
//         for(int i=front;i<size;i++)
//             cout<< arr[i]<<" " ;
//         cout<< endl ;
//     }
// };
// int main()
// {
//     Queue j(7) ;
//     j.enque(10);
//     j.enque(20);
//     j.enque(30);
//     j.enque(40);
//     j.enque(50);

//     cout<< j.getFront()<<endl;
//     cout<< j.getRear()<<endl;

//     j.Print();
//     j.deque();
//     j.Print();

//     return 0 ;



// }

// Main Queue Implementation

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     queue<int> Q ;

//     Q.push(10);
//     Q.push(20);
//     Q.push(30);
//     Q.push(40);
//     Q.push(50);

//     cout<< Q.front() << endl ;
//     cout<< Q.back() <<endl ;
//     cout<< Q.size() <<endl ;

//     Q.pop();

//     cout<< Q.front() << endl ;
//     cout<< Q.back() <<endl ;
//     cout<< Q.size() <<endl ;

    
//     while(!Q.empty())
//     {
//         cout<< Q.front() <<" ";
//         Q.pop();
//     }
//     cout<< endl ;

//     if(Q.empty())
//         cout<<"Queue is Empty "<< endl ;
//     else
//         cout<<"Queue is Not Empty"<< endl ;
    


// }

// Reversing a queue using stack

// #include<bits/stdc++.h>
// using namespace std ;

// void RevQurUsStack(queue<int> Q )
// {
    
//     stack<int> st ;

//     while( !Q.empty())
//     {
//         st.push(Q.front());
//         Q.pop() ;
//     }
//     while(!st.empty())
//     {
//         cout<< st.top()<<" ";
//         st.pop();
//     }

// }

// int main()
// {

//     queue<int> q ;

//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     RevQurUsStack(q);
// }


// print n numbers such that all these numbers have digits in set{5,10}

// #include<bits/stdc++.h>
// using namespace std ;

// void Digit(int n)
// {
//     queue<string> Q ;

//     Q.push("5");
//     Q.push("6");
//     for(int i=0;i<n;i++)
//     {
//         string curr = Q.front();

//         cout<< curr <<" " ;

//         Q.pop();
//         Q.push(curr+"5");
//         Q.push(curr+"6");

//     }
// }
// int main()
// {

// int n ;
// cout<<"Enter the value of n :";
// cin>> n ;

// Digit(n);

// return 0 ;

// }