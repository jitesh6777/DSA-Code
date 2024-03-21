

// return multiple value via the vector from function

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> twoSum(vector<int> &nums, int target)
// {
//     int n = nums.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 return {i, j};
//             }
//         }
//     }
//     return {};
// }
// int main()
// {

//     vector<int>nums={1,2,3,4,5} ;
//     int target = 6 ;

//     vector<int> New ;
//     New = twoSum(nums,target);
//      for(auto vt : New)
//          cout<< vt <<" ";

//     return 0 ;

// }

// how to return multiple value from function -> Through Array

// #include<iostream>
// using namespace std ;

// int *change()   // function should always pointer type to return array
// {
//     int a=1;
//     int b=2;
//   static int New[2]; // the array should be static

//     New[0] = a ;
//     New[1] = b ;
//     return New ;
// }

// int main()
// {
//     int *NEW ; // the holder array should be pointer type
//    NEW =  change();

//     for(int i = 0 ;i<2;i++)
//         cout<< NEW[i];

// }

// return Array from a fuction

// #include<bits/stdc++.h>
// using namespace std ;

// int *nikhil(int arr[]){
//     for(int i=0;i<=4;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl ;
//     arr[2]=10;
//     return arr;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};

//     nikhil(arr);
//      for(int i=0;i<=4;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Prime Numbers between two given numbers

// #include<bits/stdc++.h>
// using namespace std ;

// void Prime( int str1 , int str2)
// {
//      int check = 0;

//      for(int i= str1 ;i<=str2 ;i++)
//      {
//         for(int j=2;j<i;j++)
//         {
//             if(i%j==0)
//             {
//                 check++;
//                 break;
//             }
//         }
//         if(check==0 && i!=0)
//             cout<< i <<" ";
//         check = 0 ;
//      }

// }

// int main()
// {

//     int str1,str2 ;
//     cout<<"Enter the value of starting numbers ";
//     cin>> str1 ;
//     cout<<"Enter the value of starting numbers ";
//     cin>> str2 ;

//     Prime(str1,str2);

//     return 0 ;
// }

// Insert elements in a given position
// #include<iostream>
// using namespace std ;
// int Insrt(int arr[],int cap,int n , int item , int pos)
// {
//     if(n  == cap)
//         return n ;
//     for(int i=n-1 ; i>=pos-1 ; i--)
//     {
//         arr[i+1]=arr[i];
//     }

//     arr[pos-1]=item;
//     return (n+1);

// }
// int main()
// {

//     int arr[10];
//     int n , item , pos ;
//     cout<<"Capacity is 10 "<<endl ;
//     cout<<"Enter the used size array n ";
//     cin>> n ;

//     cout<<"Enter the n elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Enter the item you want to insert";
//     cin>> item ;
//     cout<<"Enter the pos at which you want to put the value";
//     cin>> pos;

//     int hold = Insrt(arr,10,n,item,pos) ;

//  for(int i=0;i<n+1;i++)
//     {
//         cout<< arr[i] <<" ";
//     }
//     return 0;
// }

// delete an elements from the given array
// #include<iostream>
// using namespace std ;
// int del(int arr[],int n , int item)
// {
//     int i;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==item)
//             break;
//     }
//     if(i==n)
//         return n ;
//     for(int j=i; j<n-1;j++)
//     {
//         arr[j]=arr[j+1];
//     }
//     return n-1 ;
// }
// int main()
// {
// int n,item,m;
// cout<<"Enter the size of an array";
// cin>> n ;
// int arr[n];
// cout<<"enter the elements ";
// for(int i=0;i<n;i++)
// {
//     cin>> arr[i];
// }
// cout<<"Enter the item which u want to delete ";
// cin>> item ;
// m=del(arr,n,item) ;
// for(int p=1;p<=m;p++)
// {
//     cout<<arr[p]<<" ";
// }
//  return 0 ;
// }

// Frequency in sorted array

// #include <iostream>
// using namespace std;
// void freq(int arr[], int n)
// {
//     int freq = 1;
//     int i;
//     for (int i = 1; i <= n; i++)
//     {
//         if (arr[i - 1] == arr[i])
//         {
//             freq++;
//         }
//         else
//         {
//             cout << arr[i - 1] << " -> " << freq << endl;
//             freq = 1;
//         }
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     freq(arr, n);
//     return 0;
// }

// Leaders in an array

// #include<iostream>
// using namespace std ;
// void Lead(int arr[], int n )
// {
//     int crnt_ldr = arr[n-1];
//     cout<< crnt_ldr <<"  ";

//     for(int i=n-2;i>=0;i--)
//     {
//         if(crnt_ldr < arr[i])
//         {
//             crnt_ldr = arr[i];
//             cout<< crnt_ldr <<"  ";
//         }
//     }
// }
// int main()
// {
//         int n;
//     cout << "Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     Lead(arr, n);
//     return 0;
// }

// Rotate left by 1 Pos
// arr -> 1 2 3 4 5
// o/p -> 2 3 4 5 1

// #include <iostream>
// using namespace std;
// void left_by_one(int arr[], int n)
// {
//     int temp = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         arr[i - 1] = arr[i];
//     }
//     arr[n - 1] = temp;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     left_by_one(arr, n);
//     return 0;
// }

// Rotate left by 1 Pos
// arr -> 1 2 3 4 5
// o/p -> 3 4 5 1 2

// #include <iostream>
// using namespace std;
// void left_by_one(int arr[], int n)
// {
//     int temp = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         arr[i - 1] = arr[i];
//     }
//     arr[n - 1] = temp;
// }
//  void left_by_two(int arr[],int n , int d)
//  {
//     for(int i=0;i<d;i++)
//     {
//         left_by_one(arr,n);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//  }
// int main()
// {
//     int n,d;
//     cout << "Enter the value of n ";
//     cin >> n;
//     cout<<"Enter the value of d ( d-> how many time we rotate ) ";
//     cin>> d ;
//     int arr[n];
//     cout << "Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     left_by_two(arr, n , d );
//     return 0;
// }

// #include<iostream>
// using namespace std ;
//  void zero_at_last(int arr[],int n )
//  {
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=0)
//         {
//             int temp = arr[i];
//             arr[i]= arr[count];
//             arr[count]=temp;

//             count++;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<< arr[i] << " ";
//     }
//  }

// int main()
// {
//     int n;
//     cout << "Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     zero_at_last(arr, n);
//     return 0;
// }

// remove duplicates from an array
//If array is sorted

// #include<iostream>
// using namespace std ;

// void rem_dup(int arr[],int n )
// {
//     int temp[n];
//     temp[0]=arr[0];
//    int res=1;

//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]!=temp[res-1])
//         {
//             temp[res]=arr[i];

//             res++;
//         }
//     }
//     for(int i=0;i<res;i++)
//     {
//         cout<<temp[i]<<" ";
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     rem_dup(arr, n);
//     return 0;
// }

// check array is sorted or not
//  #include<iostream>
//  using namespace std ;

// int if_sort(int arr[],int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         if(arr[i]<arr[i-1])
//             return false ;
//     }
//     return true ;
// }

// int main()
// {
//     int n,m;
//     cout << "Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     m=if_sort(arr, n);
//     if(m==0)
//         cout<< "False";
//     else
//         cout<< "True" ;
//     return 0;
// }

// Reverse an array

// #include<iostream>
// using namespace std ;
// void reverse(int arr[],int n)
// {
//     int low=0;
//     int high=n-1;
//     while(low<high)
//     {
//         int temp=arr[low];
//         arr[low]=arr[high];
//         arr[high]=temp;

//         low++ ;
//         high-- ;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<< arr[i]<<" ";
//     }
// }
// int main()
// {
//         int n;
//     cout << "Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     reverse(arr,n);
//     return 0;
// }

// find the greatest number in given array [ o(n)]

// #include<iostream>
// using namespace std ;

// int greatest(int arr[],int n )
// {
//    int res = 0 ;
//    for(int i=1;i<n;i++)
//    {
//     if(arr[i]>arr[res])
//     {
//         res=i;
//     }
//    }
//     return res ;
// }
// int main()
// {
//      int n,m;
//     cout << "Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     m=greatest(arr,n);
//     cout<<"greatest number is "<< arr[m];
//     return 0;
// }

// Find the second greatest number in given array

// #include<iostream>
// using namespace std ;
// int greatest(int arr[],int n)
// {
//     int large=0;
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]>arr[large])
//             large = i ;
//     }
//     return large ;
// }

// int sec_large(int arr[],int n)
// {
//     int first ;
//      first=greatest(arr,n);
//     int second;
//     if(arr[first]>arr[0])
//     {
//         second = 0;
//     }
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]!=arr[first])
//         {
//            // second = max (arr[second], arr[i]);
//            if(arr[i]>arr[second])
//                 second = i;
//         }
//     }
//     return arr[second] ;

// }
// int main()
// {
//      int n,m;
//     cout <<"Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     m=sec_large(arr,n);
//     cout<<"second large number is "<< m;
//     return 0;
//}

// Stock buy and sells

// #include<iostream>
// using namespace std ;
// void buy_sells(int arr[],int n)
// {
//     int profit=0;
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]> arr[i-1])
//         {
//            profit=profit+(arr[i]-arr[i-1]);
//         }
//     }
//     cout<< "profit " << profit ;
// }
// int main()
// {
//             int n,m;
//     cout << "Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     buy_sells(arr,n);
//     return 0;
// }

// Trapping Rain Water

// #include<iostream>
// using namespace std ;

// int Trap_rain_water(int arr[],int n)
// {
//     int lmax[n];
//     lmax[0]=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         lmax[i]=max(lmax[i-1],arr[i]);
//     }

//     int rmax[n];
//     rmax[n-1]=arr[n-1];
//     for(int i= n-2;i>=0;i--)
//     {
//         rmax[i]=max(rmax[i+1],arr[i]);
//     }
//     int total=0;

//     for(int i=0;i<n;i++)
//     {
//         total=total+(min(lmax[i],rmax[i])-arr[i]);
//     }

//     return total ;
// }
// int main()
// {
//          int n,m;
//     cout << "Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     m=Trap_rain_water(arr,n);
//     cout<<"Total number is "<< m  ;
//     return 0;
// }

// Fibonacci Numbers

// #include<iostream>
// using namespace std ;
// void fibo(int n)
// {
//     int t1=0;
//     int t2=1;
//     if(n<=1)
//         cout<< n ;
//     else
//         cout<< t1 << " "<< t2 <<" " ;
//     int s=t1+t2;
//     while(s<=n)
//     {
//         s=t1+t2;
//         cout<< s <<" ";
//         t1=t2;
//         t2=s;
//     }
// }
// int main()
// {
//     int n ;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     fibo(n);
//     return 0;
// }

// given array of integer, find if it has an equilibrium point

// #include<iostream>
// using namespace std ;
// void equi(int arr[],int n)
// {
//     int m ;
//     cout<<"Enter the value of m ";
//     cin>> m ;
//     int l_sum =0;
//     for(int i=0;i<m;i++)
//     {
//         l_sum=l_sum+arr[i];
//     }
//     int r_sum=0;
//     for(int i=m+1;i<n;i++)
//     {
//         r_sum=r_sum+arr[i];
//     }
//     if(l_sum==r_sum)
//         cout<<"True";
//     else
//         cout<<"False";
// }
// int main()
// {
//     int n;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<"Enter the value of array elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     equi(arr,n);
//     return 0;
// }

// maximum consecutive of 1's in binary array

// #include<iostream>
// using namespace std ;

// int max_conse(int arr[],int n)
// {
//     int res=0;
//     int count=0;

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=0)
//         {
//             count++;
//             res=max(count,res);
//         }
//         else
//             count = 0;
//     }
//     return res ;
// }
// int main()
// {
//     int n,m;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<"Enter the value of array elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//    m= max_conse(arr,n);
//    cout<< m ;
//     return 0;
// }

// Majority elements

// #include<iostream>
// using namespace std ;
// int majority(int arr[],int n)
// {
//     int count =1;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 count++;
//             }
//         }
//         if(count > n/2)
//             return i ;
//     }
//     return -1 ;
// }
// int main()
// {
//     int n,m;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<"Enter the value of array elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//    m= majority(arr,n);
//    cout<< "position "<< m ;
//     return 0;
// }

// Window sliding technique

// #include<iostream>
// using namespace std ;
// int win_slid(int arr[],int n , int k)
// {
//     int curr_sum=0;
//     for(int i=0;i<k;i++)
//     {
//         curr_sum=curr_sum+arr[i];
//     }
//     int res_sum=curr_sum;
//     for(int j=k;j<n;j++)
//     {
//         curr_sum=(curr_sum+arr[j])-arr[j-k];
//         res_sum=max(curr_sum,res_sum);
//     }
//     return res_sum ;
// }
// int main()
// {
//     int n,m,k;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<<"Enter the value of k ";
//     cin>> k ;
//     int arr[n];
//     cout<<"Enter the value of array elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//    m= win_slid(arr,n,k);
//    cout<< "final output "<< m <<" ";
//     return 0;
// }

// Prefix sum [ o(n)]

// #include<iostream>
// using namespace std ;

// int get_sum(int arr[],int l,int r)
// {
//     int sum=0;
//     for(int i=l;i<=r;i++)
//     {
//         sum=sum+arr[i];
//     }
//     return sum ;
// }
// int main()
// {
//         int n,m,l,r;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<<"Enter the left and right ";
//     cin>> l >> r ;
//     int arr[n];
//     cout<<"Enter the value of array elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//    m= get_sum(arr,l,r);
//    cout<< "sum is "<< m ;
//     return 0;

// }

// prefix sum [o(1)]

// #include<iostream>
// using namespace std ;
// void getsum(int presum[],int l , int r)
// {
//     if(l!=0)
//         cout<< presum[r]-presum[l-1];
//     else
//         cout<< presum[r] ;
// }
// void pre_sum(int arr[],int n)
// {
//     int presum[n];
//     presum[0]=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         presum[i]=presum[i-1]+arr[i];
//     }
//     int l , r;
//     cout<<"enter the value of l and r ";
//     cin>> l >> r;
//     getsum(presum,l,r);
// }
// int main()
// {
//   int n,m,l,r;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<"Enter the value of array elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//    pre_sum(arr,n);
//     return 0;
// }

// move all zeros at end

// #include<bits/stdc++.h>
// using namespace std ;
// void ZeroAtEnd(int arr[],int n)
// {
//     int count = 0 ;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=0)
//         {
//             swap(arr[i],arr[count]);
//             count++;
//         }
//     }

//     for(int i=0;i<n;i++)
//         cout<< arr[i]<<" ";
// }
// int main()
// {
//     int n ;
//     cout<<"Enter the value of n :";
//     cin>> n ;

//     int arr[n];
//     cout<<"Enter the array elements :";
//     for(int i=0;i<n;i++)
//         cin>> arr[i];

//     ZeroAtEnd(arr,n);

//     return 0 ;
// }

// Rotate array by One

// #include <bits/stdc++.h>
// using namespace std;

// void Rotate(int arr[], int n)
// {
//     int i;
//     int temp = arr[0];
//     for (i = 1; i < n; i++)
//     {
//         arr[i - 1] = arr[i];
//     }
//     arr[i - 1] = temp;

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }
// int main()
// {
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the array elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     Rotate(arr, n);

//     return 0;
// }

// D-times rotation

// #include <bits/stdc++.h>
// using namespace std;

// void Rotate(int arr[], int n)
// {
//     int i;
//     int temp = arr[0];
//     for (i = 1; i < n; i++)
//     {
//         arr[i - 1] = arr[i];
//     }
//     arr[i - 1] = temp;
// }
// int main()
// {
//     int n, d;
//     cout << "Enter the value of n :";
//     cin >> n;
//     cout << "how many times you want to rotate :";
//     cin >> d;

//     int arr[n];
//     cout << "Enter the array elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     for (int i = 0; i < d; i++)
//         Rotate(arr, n);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     return 0;
// }
