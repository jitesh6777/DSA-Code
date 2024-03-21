
// Given a binary sorted non-increasing array of 1s and 0s.
// You need to print the count of 1s in the binary array.

// #include<iostream>
// using namespace std ;
// int count_1_bin(int arr[],int n)
// {
//     int mid;
//     int low=0;
//     int high=n-1;
//     while(low<=high)
//     {
//         mid=(low+high)/2 ;
//         if(arr[mid]==0)
//             high=mid-1;
//         else
//         {
//             if(mid==0|| arr[mid+1]==0)
//                 return (mid+1) ;
//             else
//                 low=mid+1;
//         }
//     }
//     return -1 ;
// }
// int main()
// {
//     int n,m;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<"Enter the binary sorted non-increasing array of 1s and 0s";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = count_1_bin(arr,n);
//     cout<< "Toatl numbers of 1 are - > "<<m ;
//     return 0;
// }

// Binary search

// #include<iostream>
// using namespace std ;
// int binary(int arr[],int n,int item)
// {
//     int low=0;
//     int high=n-1;
//     while(low<=high)
//     {
//         int mid = (low+high)/2;
//         if(arr[mid]== item)
//             return mid ;
//         else if(arr[mid]>item)
//             high = mid-1;
//         else
//             low=mid+1;
//     }
//     return -1 ;
// }

// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<<"Enter the item which you want to search ";
//     cin>> item ;
//     int arr[n];
//     cout<<"Enter elements which should be in sorted(increasing order)";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = binary(arr,n,item);
//     cout<<"position " <<m ;
//     return 0;
// }

// Index of First occurence in sorted array

// #include <iostream>
// using namespace std;
// int fir_occu(int arr[], int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] > x)
//             high = mid - 1;
//         else if (arr[mid] < x)
//             low = mid + 1;
//         else
//         {
//             if (mid == 0 || arr[mid - 1] != x)
//                 return mid;
//             else
//                 high = mid - 1;
//         }
//     }
// }
// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<<"Enter the item to find first occurence ";
//     cin>> item ;
//     int arr[n];
//     cout<<"Enter elements which should be in sorted(increasing order)";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = fir_occu(arr,n,item);
//     cout<<"position " <<m ;
//     return 0;
// }

// Index of last occurence in sorted array

// #include <iostream>
// using namespace std;
// int last_occu(int arr[], int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] > x)
//             high = mid - 1;
//         else if (arr[mid] < x)
//             low = mid + 1;
//         else
//         {
//             if (mid == n - 1 || arr[mid + 1] != x)
//                 return mid;
//             else
//                 low = mid + 1;
//         }
//     }
// }
// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<<"Enter the item to find first occurence ";
//     cin>> item ;
//     int arr[n];
//     cout<<"Enter elements which should be in sorted(increasing order)";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = last_occu(arr,n,item);
//     cout<<"position " <<m ;
//     return 0;
// }

// Count occurence in sorted array

// #include<iostream>
// using namespace std ;
// int fir_occu(int arr[], int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] > x)
//             high = mid - 1;
//         else if (arr[mid] < x)
//             low = mid + 1;
//         else
//         {
//             if (mid == 0 || arr[mid - 1] != x)
//                 return mid;
//             else
//                 high = mid - 1;
//         }
//     }
// }
// int last_occu(int arr[], int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] > x)
//             high = mid - 1;
//         else if (arr[mid] < x)
//             low = mid + 1;
//         else
//         {
//             if (mid == n - 1 || arr[mid + 1] != x)
//                 return mid;
//             else
//                 low = mid + 1;
//         }
//     }
// }
// int occ(int arr[],int n,int x)
// {
//       int first = fir_occu(arr,n,x);
//       if(first==-1)
//         return 0 ;
//       else
//         return(last_occu(arr,n,x)-first + 1);

// }
// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<<"Enter the item to find first occurence ";
//     cin>> item ;
//     int arr[n];
//     cout<<"Enter elements which should be in sorted(increasing order)";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = occ(arr,n,item);
//     cout<<"Occurences " <<m ;
//     return 0;

// }

// count 1s in sorted Binary array

// #include <iostream>
// using namespace std;
// int count_1(int arr[], int n)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == 0)
//             low = mid + 1;
//         else
//         {
//             if (mid == 0 || arr[mid - 1] == 0)
//                 return (n - mid);
//             else
//                 high = mid - 1;
//         }
//     }
//     return -1  ;
// }
// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<"Enter elements should be in sorted(0s to 1s )";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = count_1(arr,n);
//     cout<<"Occurences " <<m ;
//     return 0;
// }

// search in finite sized array

// #include <iostream>
// using namespace std;
// int binary(int arr[],int item,int low,int high)
// {
//     while(low<=high)
//     {
//         int mid = (low+high)/2;
//         if(arr[mid]== item)
//             return mid ;
//         else if(arr[mid]>item)
//             high = mid-1;
//         else
//             low=mid+1;
//     }
//     return -1 ;
// }
// int finite(int arr[], int item)
// {
//     if (arr[0] == item)
//         return 0;
//     int i = 1;
//     while (arr[i] < item)
//     {
//         i = i * 2;
//     }
//     if (arr[i] == item)
//         return i;
//     else
//         return binary(arr, item, i / 2 + 1, i);
// }
// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<<"Enter the item ";
//     cin>> item ;
//     int arr[n];
//     cout<<"Enter elements should be in sorted(0s to 1s )";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = finite(arr,item);
//     cout<<"Occurences " <<m ;
//     return 0;
// }

// Square Root of the given number [O(root-n)]

// #include<iostream>
// using namespace std ;
// int root(int n)
// {
//     int i=1;
//     while(i*i<=n)
//         i++;
//     return (i-1);
// }
// int main()
// {
//     int n,m;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     m=root(n);
//     cout<< " Square root of "<< n <<" is "<< m ;
//     return 0;
// }

// Square Root of the given number [O(log n)]

// #include <iostream>
// using namespace std;
// int root(int n)
// {
//     int ans;
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         int msrt = mid * mid;
//         if (msrt == n)
//             return mid;
//         if (msrt > n)
//             high = mid - 1;
//         else
//         {
//             low = mid + 1;
//             ans = mid;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n, m;
//     cout << "Enter the value of n ";
//     cin >> n;
//     m = root(n);
//     cout << " Square root of " << n << " is " << m;
//     return 0;
// }

// Search in sorted roated array

// #include<iostream>
// using namespace std ;
// int srted_roated(int arr[],int n,int item)
// {
//     int low=0;;
//     int high=n-1;
//     while(low<=high)
//     {
//         int mid=(low+high)/2 ;
//         if(item==arr[mid])
//             return mid ;
//         if(arr[mid]> arr[low])
//         {
//             if(item>=arr[low]&&item<arr[mid])
//                     high=mid-1;
//             else
//                     low=mid+1;
//         }
//         else
//         {
//             if(item>arr[mid]&& item<=arr[high])
//                     low=mid+1;
//             else
//                     high=mid-1;
//         }
//     }
//     return -1 ;
// }
// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<<"Enter the item ";
//     cin>> item ;
//     int arr[n];
//     cout<<"Enter sorted roated elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = srted_roated(arr,n,item);
//     cout<<"Occurences " <<m ;
//     return 0;
// }

// Peak Value

// #include<iostream>
// using namespace std ;
// int peak(int arr[], int n )
// {
//     int i,res;
//     if(n==1)
//         return arr[0];
//     if(arr[0]>=arr[1])
//         return arr[0];
//     if(arr[n-1]>arr[n-2])
//         return arr[n-1];
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
//                  res =arr[i];
//     }
//     return res ;
// }
// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<"Enter elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = peak(arr , n);
//     cout<<"Peak value is " << m << endl ;
//     return 0;
// }

// we need to find if there is a pair in the array with sum equals to item
// [O(n^2)]
// #include<iostream>
// using namespace std ;
// bool sum_pair(int arr[],int n,int item)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]+arr[j]==item)
//                 return true  ;
//         }
//     }
//     return false ;
// }
// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<<"Enter the item ";
//     cin>> item ;
//     int arr[n];
//     cout<<"Enter sorted roated elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = sum_pair(arr,n,item);
//     cout<< m ;

//     return 0;
// }

// find a sorted aarray and a sum , find if there is a pair with given sum
// [O(n)] --> sorted array 
// #include <iostream>
// using namespace std;
// bool sum_pair(int arr[], int n, int item)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         if (arr[low] + arr[high] == item)
//             return true;
//         if (arr[low] + arr[high] > item)
//             high--;
//         else
//             low++;
//     }
//     return false;
// }
// int main()
// {
//     int n, m, item;
//     cout << "Enter the value of n ";
//     cin >> n;
//     cout << "Enter the item ";
//     cin >> item;
//     int arr[n];
//     cout << "Enter sorted roated elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     m = sum_pair(arr, n, item);
//     cout << m;
//     return 0;
// }
