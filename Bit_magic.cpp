// Count Set Bit
// #include<iostream>
// using namespace std ;
// int countbit(int n )
// {
//     int res=0;
//     while(n>0)
//     {
//         if(n%2!=0)
//             res++ ;
//         n=n/2;
//     }
//     return res ;
// }
// int main()
// {
//    int a , b;
//    cout<<"Enter the value of a ";
//    cin>> a;
//    b=countbit(a) ;
//    cout<< b ;
//     return 0;
// }

// WAP to find First set bit position
//  #include<iostream>
//  using namespace std ;
//  int firstbit(int n)
//  {
//      int res=0;
//      int pos=1;
//      while(n>0)
//      {
//          if(n%2==0)
//          {
//              pos++;
//              n=n/2;
//          }
//          else
//              return pos ;
//      }
//  }
//  int main()
//  {
//      int a , b;
//     cout<<"Enter the value of a ";
//     cin>> a;
//     b=firstbit(a) ;
//     cout<<"pos "<<  b ;
//      return 0;
//  }
//  Write a program to find the binary number of the given decimal  number

// #include<iostream>
// using namespace std ;
// void bin(int n )
// {
//     int a[n];
//     int rem ;
//     int i=0;
//     while(n>0)
//     {
//         rem=n%2;
//         a[i]=rem;
//         i++;
//         n=n/2;
//     }
//     for(int j=i-1;j>=0;j--)
//     {
//         cout<<a[j];
//     }
// }
// int main()
// {   int m ;
//     cout<<"Enter the value of m ";
//     cin>> m ;
//     bin(m);
//     return 0;
// }

// Kth position (Incomplete)

// #include<iostream>
// using namespace std ;

// void kthPos(int n , int k)
// {
//     int arr[n],rem;
//     int i=1;
//     int pos = k ;
//     while(n>0)
//     {
//         rem=n%2;
//         arr[i]=rem;
//         i++;
//         n=n/2;
//     }
//     for(int j=i-1;j>=1;j--)
//         cout<<arr[j]<<" ";

//     // if(arr[pos]==1)
//     //     return true;
//     // return false;
// }
// int main()
// {
//      int n1 , k1,ret;
//      cout<<"Enter the value of n1 " ;
//      cin>>n1;
//      cout<<"enter the valuye of k1 (position) ";
//      cin>>k1;
//       kthPos(n1,k1);
//       cout<< ret ;
//      return 0;
// }

// check the given number is having power of 2 or not

// #include<iostream>
// using namespace std ;
// int pow(int n)
// {
//     if(n==0)
//         return false ;
//     while(n!=1)
//     {
//         if(n%2==0)
//             n=n/2;
//         else
//             return false ;
//     }
//     return true ;
// }
// int main()
// {
//     int m,o ;
//     cout<<"Enter the value of m ";
//     cin>> m ;
//     o=pow(m);
//     cout<< o ;
// }

// Find the only Odd occuring numbers in the given array [O(n^2)]

// #include <iostream>
// using namespace std;
// void odd(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == arr[i])
//             {
//                 count++;
//             }
//         }
//         if (count % 2 != 0)
//             cout<< arr[i]<<" ";
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of array ";
//     cin >> n;
//     int ar[n];
//     cout << "Enter the array elements ";
//     for (int i = 0; i < n; i++)
//         cin >> ar[i];
//     odd(ar, n);
//     return 0;
// }

// Find the only Odd occuring numbers in the given array [O(n)]
// #include<iostream>
// using namespace std ;
// int odd(int arr[], int n)
// {
//    int res=0;
//    for(int i=0;i<n;i++)
//    {
//     res=res^arr[i];
//    }
//    return res  ;
// }
// int main()
// {
//     int n,m ;
//     cout<<"Enter the size of n";
//     cin>> n ;
//     int ar[n];
//     cout<<"Enter elements of an array ";
//     for(int i=0;i<n;i++)
//         cin>>ar[i];
//     m=odd(ar,n);
//     cout<<"odd occuring number is in array "<< m ;
//     return 0 ;
// }

// Count total digits in given numbers 

// #include<iostream>
// using namespace std ;

// int total_digit(int n )
// {
//     int count=0;
//     while(n>0)
//     {
//         count++;
//         n=n/10;
//     }
//     return count;
// }
// int main()
// {
//     int n ;
//     cout<<"Enter the value of n ";
//     cin>> n ;

//     cout<< total_digit(n);
//     return 0;
// }

//Digital root -> if n = 123 
                  //o/p = 6

#include<iostream>
using namespace std ;
int digital_root(int n )
{
    int sum =0 ;
    while(n>0)
    {
        int rem ;
        rem = n%10;
        sum = sum+rem ;
        n=n/10;
    }
    if(sum>=10)
    {
        int add=0;
        while(sum>0)
        {
            int rem1 ;
            rem1= sum%10;
            add= add + rem1;
            sum=sum/10 ;
        }
        return add;
    }
    return sum ;
}
int main()
{
        int n ;
    cout<<"Enter the value of n ";
    cin>> n ;

    cout<< digital_root(n);
    return 0;

}