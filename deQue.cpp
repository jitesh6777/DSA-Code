
// // Basic Operations on Deque

// #include <bits/stdc++.h>
// using namespace std;

// void Deque()
// {
//     deque<int> dq;

//     dq.push_back(10);
//     dq.push_front(5);
//     dq.push_back(20);
//     dq.push_back(30);
//     dq.push_back(40);

//     cout << "before performing any operation :" << endl;

//     for (auto x : dq)
//     {
//         cout << x << " ";
//     }
//     cout << endl;

//     cout << dq.front() << " "<< endl ;
//     dq.pop_front();
//     cout << dq.back() << " "<< endl ;
//     dq.pop_back();

//     cout << "After performing any operation :" << endl;
//     for (auto x : dq)
//     {
//         cout << x << " ";
//     }
// }

// int main()
// {
//     Deque();

//     return 0;
// }

// Design a data structure that support following operations in o(1) Tc 


// #include<bits/stdc++.h>
// using namespace std ;

// class jitesh
// {
//     public :

//     deque<int> dq ;
//     void insertMin(int x)
//     {
//         dq.push_front(x) ;
//     }
//     void insertMax(int x )
//     {
//         dq.push_back(x);
//     }

//     int getMin()
//     {
//         return( dq.front());
//     }

//     int getMax()
//     {
//         return(dq.back());
//     }
//     void ExtractMin()
//     {
//         dq.pop_front();
//     }

//     void ExtractMax()
//     {
//         dq.pop_back();
//     }
//     void Print()
//     {
//         for( auto x : dq )
//             cout<< x <<" ";
//         cout<< endl ;
//     }

// };

// int main()
// {
//     jitesh j ;

//     j.insertMin(5);
//     j.insertMax(7);
//     j.insertMin(10);
//     j.insertMax(12);
//     j.insertMin(15);
//     j.insertMax(20);

//     j.Print();
//     cout<< j.getMin() <<endl ;
//     cout<< j.getMax() <<endl ;

//     j.ExtractMin();
//     j.ExtractMax();

//     j.Print();

// return 0 ;
// }

