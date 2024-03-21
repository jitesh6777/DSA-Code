

// Amount using minimum coins using greedy algo

// #include <bits/stdc++.h>
// using namespace std;

// void fun(int coin[], int n, int amount)
// {
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int c = floor(amount / coin[i]);

//         res = res + c;
//         amount = amount - c * coin[i];

//         if (amount == 0)
//             break;
//     }

//     if (amount == 0)
//         cout << "numbers of coin needed " << res;
// }

// int main()
// {
//     int arr[] = {18, 10, 2, 1}; // here we are assuming that the arrary is sorted in decending order
//     int n = 4;
//     int amount = 52 ;

//     fun(arr, n, amount);

//     return 0;
// }

// Activity selcetion problem

// #include<bits/stdc++.h>
// using namespace std ;

// bool SORT(pair<int,int>a , pair<int ,int>b)
// {
//      return(a.second < b.second);
// }

// void activity(pair<int ,int>arr[] , int n)
// {

//      sort(arr,arr+n,SORT);

//      int pre =0;
//      int res =1;

//      for(int curr=1;curr<n;curr++)
//      {
//           if(arr[curr].first >= arr[pre].second)
//           {
//                res++;
//                pre=curr;
//           }
//      }

//      cout<< res;

// }

// int main()
// {
//      int n;
//      pair<int,int>arr[]={{1,3},{2,4},{3,8},{10,11}};

//      n = sizeof(arr)/sizeof(arr[0]);

//      activity(arr,n);

//      return 0;

// }

// Knapsack Problem

// #include<bits/stdc++.h>
// using namespace std ;

// bool mysort(pair<int,int>a , pair<int , int>b )
// {
//      double r1 = (double) a.first / a.second ;
//      double r2 = (double) b.first / b.second ;

//      return (r1>r2);

// }

// double knapsack( pair<int,int> arr[] , int n , int W)
// {
//      sort(arr,arr+n,mysort);

//      double res =0.0;
//      for(int i=0;i<n;i++)
//      {
//           if(arr[i].second <= W)
//           {
//                res = res + arr[i].first;
//                W = W - arr[i].second;
//           }
//           else{
//                res = res + (arr[i].first)*((double)W / arr[i].second);
//                break;
//           }
//      }

//      return res;
// }

// int main()
// {
//      pair<int,int>arr[]={{200,10},{50,5},{100,20}};

//      int w = 15;
//      int n=3;

//      cout<< knapsack(arr,n,w);

//      return 0 ;
// }

#include <iostream>
using namespace std;

int main()
{
     int a = 5 ;
     int b = ++a; // a = a+1; --> b=a;
     cout << a <<" "<< b <<endl ;

     int c = 5;
     int d = c++;  // d=c ; --> c= c+1 
     cout<< c <<" "<<d<<endl ;

     return 0;
}
