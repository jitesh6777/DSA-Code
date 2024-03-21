
// finding numbers of digits in a number
// #include<iostream>
// using namespace std ;
// int fun(int n)
// {
//     int rev=0;
//     while(n!=0)
//     {  n=n/10;
//         rev++ ;
//     }
//     return rev ;
// }
// int main()
// {
//     int r,m;
//     cout<<"Enter the numbers ";
//     cin>> m ;
//     r = fun(m) ;
//     cout<< r ;
//     return 0;
// }

// WAP to Check number is palindrome or not 
// #include<iostream>
// using namespace std ;
// int isPali(int n)
// {
//     int rev=0;
//     int temp=n ;
//     while(temp!=0)
//     {
//         int ld;
//         ld=temp%10;
//         rev=rev*10+ld;
//         temp=temp/10;
//     }
//     if(rev==n)
//         return true ;
//     return false ;
// }
// int main()
// {
//     int n,m;
//     cout<<"Enter the value of n ";
//     cin>>n ;
//     m = isPali(n);
//     cout<< m ;
//     return 0 ;
// }

// factorial number
// #include<iostream>
// using namespace std ;

// int Fact(int n)
// { 
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }
// int main()
// {
//     int m,h;
//     cout<<"Enter the value of m ";
//     cin>> m;
//     h = Fact(m);
//     cout<< h ;
//     return 0;
// }


// trailing Zeros in factorial

// #include<iostream>
// using namespace std ;

// int trail(int n)
// {
//     int fact=1;
//     for(int i=2;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     int rev=0;
//     while(fact%10==0)
//     {
//         rev++;
//         fact=fact/10;
//     }
//     return rev ;
// }
// int main()
// {
//     int j,k;

//     cout<<"Enter the value of j ";
//     cin>> j;
//      k = trail(j) ;
//     cout<<k;
//     return 0;
// }

// GCF/HCF(Greatest Common Factor)
// #include<iostream>
// using namespace std ;
// int gcf(int a , int b)
// {
//     int rev = min(a,b);
//     while(true)
//     {
//         if(a%rev==0 && b%rev==0)
//         {
//             return rev ;
//         }
//         rev--;
//     }
//     return rev ;
// }
// int main()
// {
//     int n,m,o;
//     cout<<"Enter the value of n and m ";
//     cin>>n>>m;
//     o=gcf(n,m);
//     cout<< "GCF is -> " << o;
//     return 0;
// }

// LCM (least Common Multiple)
// #include<iostream>
// using namespace std ;

// int lcm(int a , int b)
// {
//     int rev = max(a,b);
//     while(true)
//     {
//         if(rev%a==0 && rev%b==0)
//         {
//             return rev ;
//         }
//         rev++;
//     }
//     return rev ;
// }
// int main()
// {
//     int n,m,o;
//     cout<<"Enter the value of n and m ";
//     cin>>n>>m;
//     o=lcm(n,m);
//     cout<< "LCM is -> " << o;
//     return 0;
// }

// Check Number Is Prime Or Not(O(n))
// #include<iostream>
// using namespace std ;

// int isPrime(int n)
// {
//     if(n==1)
//         return false ;
    
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//             return false ;
//     }
//     return true ;
// }
// int main()
// {
//     int n , m ;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     m = isPrime(n);
//     if(m==0)
//         cout<<"the number is NOT Prime";
//     else
//         cout<<"the number is Prime";
//     return 0;
// }

// Check Number Is Prime Or Not( O(root n) )
// #include<iostream>
// using namespace std ;

// int isPrime(int n)
// {
//     if(n==1)
//         return false ;
    
//     for(int i=2;i*i<=n;i++)
//     {
//         if(n%i==0)
//             return false ;
//     }
//     return true ;
// }
// int main()
// {
//     int n , m ;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     m = isPrime(n);
//     if(m==0)
//         cout<<"the number is NOT Prime";
//     else
//         cout<<"the number is Prime";
//     return 0;
// }

// print all the divisior of the given number[O(n)]

// #include<iostream>
// using namespace std ;
// void DIV(int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//             cout<< i << " " ;
//     }
// }
// int main()
// {
//     int n ;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     DIV(n);
//     return 0;
// }

// print all the divisior of the given number[O( 2 root n) but 2 is constant we will ignore it]

//  #include<iostream>
//  using namespace std ;
 
//  void DIV(int m)
//  {
//     int i ;
//     for( i=1;i*i<m;i++)
//     {
//         if (m%i==0)
//             cout<< i <<" " ;
//     }
//     for( ; i>=1;i--)
//         if(m%i==0)
//             cout<<(m/i) << " ";
//  }
//  int main()
//  {
//     int n;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     DIV(n);
//     return 0;
//  }

// Write a program to find the binary number of the given decimal  number

#include<iostream>
using namespace std ;
void bin(int n )
{ 
    int a[n];
    int rem ;
    int i=0;;
    while(n>0)
    { 
        rem=n%2;
        a[i]=rem;
        i++;
        n=n/2;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<a[j]<<" ";
    }
}
int main()
{   int m ;
    cout<<"Enter the value of m ";
    cin>> m ;
    bin(m);
    return 0;
}
