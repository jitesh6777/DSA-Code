
// Sum of Digits
// i/p -> 99999
// o/p -> 45

// #include<iostream>
// using namespace std ;
// int rec(int num)
// {
//     if(num==0)
//         return 0;
    
//     return(num%10)+rec(num/10);
// }

// int main()
// {
//     int n ;
//     cout<<"Enter the value of n ";
//     cin>> n ;

//     cout<< rec(n);
//     return 0;
// }




// print 1 to n numbers using recursion 

// #include<iostream>
// using namespace std ;

// void rec(int n)
// {
//     if(n==0)
//         return;
//     rec(n-1) ;
//     cout<< n <<" ";
// }
// int main()
// {
//      int n ;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     rec(n);
//     return 0;
// }


// print n to 1 numbers using recursion 

// #include<iostream>
// using namespace std ;

// void rec(int n)
// {
//     if(n==0)
//         return  ;
//     cout<< n <<" ";
//     rec(n-1) ;
// }
// int main()
// {
//      int n ;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     rec(n);
//     return 0;
// }

// print sum of all the natural numbers 

// #include<iostream>
// using namespace std ;
// int sumNat(int n)
// {
//     if(n==0)
//         return 0;
//     return n+sumNat(n-1) ;
// }
//  int main()
//  {
//     int n;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<< sumNat(n);
//     return 0 ;
//  }
