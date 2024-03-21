

// we can do random access in set

// #include<bits/stdc++.h>
// using namespace std ;

// int main()
// {
//     set<int> st ;

//     st.insert(10);
//     st.insert(5);
//     st.insert(15);
//     st.insert(20);
//     st.insert(2);

//     int n=3;

//     auto val = next(st.begin(),n) ;

//     cout<< *val ;

//     return 0 ;

// }



// Implementation Of Chaining

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std ;
// class jitesh
// {
//     public:
//     int BUCKET ;
//     list<int> *table ;

//     jitesh(int b)
//     {
//         BUCKET = b ;
//         table =  new list<int>[b];
//     }

//     void Insert( int key)
//     {
//         int i = key % BUCKET ;
//         table[i].push_back(key);
//     }
//     void Delete(int key )
//     {
//         int i = key%BUCKET;
//         table[i].remove(key);
//     }
//     bool Search(int key)
//     {
//         int i= key%BUCKET ;

//         for(int x : table[i])
//             if(x==key)
//                 return true;
//         return false ;
//     }
// };

// int main()
// {
//     bool ret ;
//     int arr[7] = {10,20,14,21,15,16,25} ;
//     jitesh J(7);

//     for(int i=0;i<7;i++)
//         J.Insert(arr[i]);

//     J.Delete(arr[0]);
//     ret = J.Search(arr[6]) ;
//     cout<< ret ;
//     return 0 ;

// }

// Implementation Of Chaining

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std ;
// class jitesh
// {
//     public:
//     int BUCKET ;
//     list<int> *table ;

//     jitesh(int b)
//     {
//         BUCKET = b ;
//         table =  new list<int>[b];
//     }

//     void Insert( int key)
//     {
//         int i = key % BUCKET ;
//         table[i].push_back(key);
//     }
//     void Delete(int key )
//     {
//         int i = key%BUCKET;
//         table[i].remove(key);
//     }
//     bool Search(int key)
//     {
//         int i= key%BUCKET ;

//         for(int x : table[i])
//             if(x==key)
//                 return true;
//         return false ;
//     }
//     void Print()
//     {
//         for(int i=0;i<BUCKET;i++)
//         {
//             cout<< i ;
//             for(auto x : table[i])
//                 cout<< " --> " << x ;
//             cout<< endl ;
//         }
//     }
// };

// int main()
// {
//     int ret ;
//     int n ;
//     cout<<"Enter the value of n :";
//     cin>> n ;
//     int arr[n];
//     cout<<"Enter the value of linked array :";
//     for(int i=0;i<n;i++)
//         cin>>arr[i] ;

//     jitesh jeet(n) ;

//     for(int i=0;i<n;i++)
//         jeet.Insert(arr[i]);

//     //jeet.Delete(10);
//     jeet.Print();

//     return 0 ;

// }

// Code for Open Addressing

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class jitesh
// {
// public:
//     int cap, size;
//     int arr[];

//     jitesh(int c)
//     {
//         cap = c;
//         size = 0;
//         for (int i = 0; i < c; i++)
//             arr[i] = -1;
//     }
//     void insert(int key)
//     {
//         int h = key % cap;
//         int i = h;
//         if (size == cap)
//             // return false ;

//         while (arr[i] != -1 && arr[i] != -2 && arr[i] != key)
//                 i = (i + 1) % cap;

//         if (arr[i] == key)
//         {
//             // return false ;
//         }
//         else
//         {
//             arr[i] = key;
//             size++;
//             // return true ;
//         }
//     }
//     bool Delete(int key)
//     {
//         int h = key % cap;
//         int i = h;
//         while (arr[i] != -1)
//         {
//             if (arr[i] == key)
//             {
//                 arr[i] = -2;
//                 return true;
//             }
//             i = (i + 1) % cap;

//             if (i == h)
//                 return false;
//         }
//     }
//     bool search(int key)
//     {
//         int h = key % cap;
//         int i = h;

//         while (arr[i] != -1)
//         {
//             if (arr[i] == key)
//                 return true;

//             i = (i + 1) % cap;

//             if (i == h)
//                 return false;
//         }
//         return false;
//     }

//     void Print()
//     {
//         for(int i=0;i<cap;i++)
//             cout<< i << "-->"<< arr[i] << endl;
//     }
// };

// int main()
// {
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;
//     jitesh jeet(n);

//     cout << "insert the elements in array :" << endl;
//     // jeet.insert(49);
//     jeet.insert(50);
//     jeet.insert(51);
//     jeet.insert(63);
//     jeet.insert(68);
//     jeet.insert(76);

//     jeet.Print();

//     return 0 ;
// }

// Count Distinct elements( O(n^2) )

// #include<bits/stdc++.h>
// using namespace std ;

// int dist(int arr[],int n)
// {
//     int res = 0 ;

//     for(int i=0;i<n;i++)
//     {
//         bool flag = false ;
//         for(int j=0;j<i;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 flag = true ;
//                 break;
//             }
//         }
//         if(flag == true )
//             continue;
//         else
//             res++ ;
//     }

//     return res ;
// }
// int main()
// {
//     int n , result ;
//     cout<<"Enter the value of n :";
//     cin>> n ;

//     int arr[n] ;
//     cout<<"Enter the array elements :";
//     for(int i=0;i<n;i++)
//         cin>>arr[i];

//     result = dist(arr,n);
//     cout<<"No. of Dictinct elements : "<< result ;

//     return 0 ;

// }

// count Disctint elements  ( O(n) )

// #include<bits/stdc++.h>
// using namespace std ;
// int dist(int arr[],int n)
// {
//     int res = 0;
//     unordered_set<int> s ; // here we used Unordered-set
//     for(int i=0;i<n;i++)  // O(n) for traversing the arra
//         s.insert(arr[i]);

//     return s.size();
// }
// int main()
// {
//     int n , result ;
//     cout<<"Enter the value of n :";
//     cin>> n ;

//     int arr[n] ;
//     cout<<"Enter the array elements :";
//     for(int i=0;i<n;i++)
//         cin>>arr[i];

//     result = dist(arr,n);
//     cout<<"No. of Dictinct elements : "<< result ;

//     return 0 ;

// }

// Intersection of two unsorted array with ( O(n^2) )

// #include<bits/stdc++.h>
// using namespace std ;
// int intersection(int arr1[],int arr2[],int m , int n)
// {
//     int res = 0 ;

//     for(int i=0;i<m;i++)
//     {
//         bool flag = false ;
//         for(int j=0;j<i;j++)
//         {
//             if(arr1[i]==arr1[j])
//             {
//                 flag = true ;
//                 break;
//             }
//         }
//         if(flag == true)
//             continue;

//         for(int j=0;j<n;j++)
//         {
//             if(arr1[i]==arr2[j])
//             {
//                 res++ ;
//                 break;
//             }
//         }
//     }
//     return res ;

// }
// int main()
// {
//     int n ,m , result ;
//     cout<<"Enter the value of m and n :";
//     cin>> m >> n ;

//     int arr1[m] ;
//     int arr2[n] ;
//     cout<<"Enter the array elements m:";
//     for(int i=0;i<m;i++)
//         cin>>arr1[i];
//     cout<<"Enter the array elements m:";
//     for(int i=0;i<n;i++)
//         cin>>arr2[i];

//     result = intersection(arr1,arr2,m,n);
//     cout<<"No. of Dictinct elements : "<< result ;

//     return 0 ;

// }

// Intersection of two unsorted array using unordered set ( O(n) )

// #include <bits/stdc++.h>
// using namespace std;
// int intersection(int arr1[], int arr2[], int m, int n)
// {
//     int res = 0 ;
//     unordered_set<int> s ;

//     for(int i=0;i<m;i++)
//         s.insert(arr1[i]);

//      for(int j=0;j<n;j++)
//      {
//         if(s.find(arr2[j]) != s.end())
//         {
//             res++;
//             s.erase(arr2[j]);
//         }
//      }
//      return res ;
// }

// int main()
// {
//     int n, m, result;
//     cout << "Enter the value of m and n :";
//     cin >> m >> n;

//     int arr1[m];
//     int arr2[n];
//     cout << "Enter the array elements m:";
//     for (int i = 0; i < m; i++)
//         cin >> arr1[i];
//     cout << "Enter the array elements m:";
//     for (int i = 0; i < n; i++)
//         cin >> arr2[i];
//     result = intersection(arr1, arr2, m, n);
//     cout << "No. of Dictinct elements : " << result;
//     return 0;
// }

// Union of two unsorted array (O(n^2))

// #include<bits/stdc++.h>
// using namespace std ;

// int Union(int a[],int b[],int m ,int n)
// {
//     int res = 0 ;

//     int c[m+n];

//     for(int i=0;i<m;i++)
//         c[i]=a[i];
//     for(int j=0;j<n;j++)
//         c[m+j]=b[j];

//     for(int i=0;i<m+n;i++)
//     {
//         bool flag = false ;
//         for(int j=0;j<i;j++)
//         {
//             if(c[i]==c[j])
//             {
//                 flag = true ;
//                 break;
//             }
//         }
//         if(flag == false)
//             res++ ;
//     }
//     return res ;
// }

// int main()
// {
//     int n, m, result;
//     cout << "Enter the value of m and n :";
//     cin >> m >> n;

//     int arr1[m];
//     int arr2[n];
//     cout << "Enter the array elements m:";
//     for (int i = 0; i < m; i++)
//         cin >> arr1[i];
//     cout << "Enter the array elements m:";
//     for (int i = 0; i < n; i++)
//         cin >> arr2[i];
//     result = Union(arr1, arr2, m, n);
//     cout << "No. of Dictinct elements : " << result;
//     return 0;
// }

// Union of two unsorted array using unordered set ( O(n) )

// #include<bits/stdc++.h>
// using namespace std ;

// int Union(int a[],int b[],int m ,int n)
// {
//     int res = 0 ;

//     unordered_set<int> s ;

//     for(int i=0;i<m;i++)
//         s.insert(a[i]);

//     for(int j=0;j<n;j++)
//         s.insert(b[j]);

//     return s.size() ;

// }
// int main()
// {
//     int n, m, result;
//     cout << "Enter the value of m and n :";
//     cin >> m >> n;

//     int arr1[m];
//     int arr2[n];
//     cout << "Enter the array elements m:";
//     for (int i = 0; i < m; i++)
//         cin >> arr1[i];
//     cout << "Enter the array elements m:";
//     for (int i = 0; i < n; i++)
//         cin >> arr2[i];
//     result = Union(arr1, arr2, m, n);
//     cout << "No. of Dictinct elements : " << result;
//     return 0;
// }

// subarray with 0 sum ( 0(n^2) )

// #include<bits/stdc++.h>
// using namespace std ;

// bool subarray(int arr[], int n)
// {
//     for(int i =0 ;i<n;i++)
//     {
//         int sum = 0;
//         for(int j=i;j<n;j++)
//         {
//             sum=sum+arr[j];
//             if(sum==0)
//                 return true ;
//         }
//     }
//     return false ;
// }
// int main()
// {
//     int n,ret ;
//     cout<<"Enter the value of n :";
//     cin>> n ;

//     int arr[n];
//     cout<<"Enter the elements :";
//     for(int i=0;i<n;i++)
//         cin>> arr[i];

//     ret = subarray(arr,n);
//     cout<< ret ;

//     return 0 ;

// }

// subarray with 0 sum ( 0(n) )

// #include <bits/stdc++.h>
// using namespace std;

// bool subarray(int arr[], int n)
// {
//     unordered_set<int> s;
//     int sum = 0;
//     for (int j = 0; j < n; j++)
//     {
//         sum = sum + arr[j];
//         if (s.find(sum) != s.end())
//             return true;

//         if(sum==0)
//             return true ;
//         s.insert(sum);
//     }
//     return false;
// }
// int main()
// {
//     int n, ret;
//     cout << "Enter the value of n :";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     ret = subarray(arr, n);
//     cout << ret;

//     return 0;
// }

// subarray with given sum ( 0(n^2) )

// #include<bits/stdc++.h>
// using namespace std ;

// bool subarray(int arr[],int n,int sum)
// {
//     for(int i=0;i<n;i++)
//     {
//         int pre= 0 ;
//         // unordered_set<int> v ;  // need not to be write
//         for(int j=i;j<n;j++)
//         {
//             pre = pre+arr[j];
//             if(pre==sum)
//                 return true ;
//             // v.insert(pre);
//         }
//     }
//     return false ;
// }
// int main()
// {
//     int n, ret,sum;
//     cout << "Enter the value of n :";
//     cin >> n;
//     cout<<"Enter the Sum :";
//     cin>> sum ;
//     int arr[n];
//     cout << "Enter the elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     ret = subarray(arr, n,sum);
//     cout << ret;
//     return 0;

// }

 

// longest subarray with equal numbers of 0's and 1's

// #include <bits/stdc++.h>
// using namespace std;

// int longest(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int c0 = 0 ;
//         int  c1 = 0;
//         for (int j = i; j < n; j++)
//         {
//             if (arr[j] == 1)
//                 c1++;
//             else
//                 c0++;

//             if (c0 == c1)
//                 res = max(res, j - i + 1);
//         }
//     }
//     return res;
// }

// int main()
// {

//     int arr[] = {1,0,1,1,1,0,0};
//     int result = longest(arr,sizeof(arr)/sizeof(arr[0]));
//     cout<< result ;

//     return 0 ;
// }

// longest common span with same sum in two binary array

// #include<bits/stdc++.h>
// using namespace std ;

// int common(int arr1[],int arr2[],int n )
// {
//     int res = 0 ;
//     for(int i=0;i<n;i++)
//     {
//         int sum1=0, sum2=0 ;
//         for(int j=i;j<n;j++)
//         {
//             sum1=sum1+arr1[j];
//             sum2=sum2+arr2[j];

//             if(sum1 == sum2)
//                 res=max(res,j-i+1);
//         }
//     }
//     return res ;
// }
// int main()
// {
//     int n , result ;
//     cout<<"Enter the value of n :";
//     cin>> n ;

//     int arr1[n];
//     int arr2[n];
//     cout<<"Enter the array-1's elements :";
//     for(int i=0;i<n;i++)
//         cin>> arr1[i];
//     cout<<"Enter the array-2's elements :";
//     for(int i=0;i<n;i++)
//         cin>> arr2[i];

//     result = common(arr1,arr2,n) ;

//     cout<< result ;
//     return 0 ;
// }

// longest consecutive subsequence (O(n log n))

// #include <bits/stdc++.h>
// using namespace std;

// int longest(int arr[], int n)
// {
//     int res = 0;
//     int curr = 1;
//     sort(arr, arr + n);
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] == arr[i - 1] + 1)
//         {
//             curr++;
//         }
//         else
//         {
//             res = max(res, curr) ;
//                 curr = 1;
//         }
//     }
//     res = max(res,curr);
//     return res ;
// }

// int main()
// {
//     int n, ret;
//     cout << "Enter the value of n :";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     ret = longest(arr, n);
//     cout << ret;
//     return 0;
// }

// longest consecutive subsequence (O(n))

// #include <bits/stdc++.h>
// using namespace std;

// int longest(int arr[], int n)
// {
//     int res = 0;
//     int curr = 1;
//     set<int> s;
//     for (int i = 0; i < n; i++)
//         s.insert(arr[i]);

//     for (auto x : s)
//     {
//         if (s.find(x + 1) != s.end())
//         {
//             curr++;
//         }
//         else
//         {
//             res = max(res, curr);
//             curr = 1;
//         }
//     }
//     res = max(res, curr);
//     return res;
// }
// int main()
// {
//     int n, ret;
//     cout << "Enter the value of n :";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     ret = longest(arr, n);
//     cout << ret;
//     return 0;
// }

//  More than n-k Occurences ( O(n log n))

// #include<bits/stdc++.h>
// using namespace std ;
// void Occurences(int arr[],int n , int k)
// {
//     int curr= 1 ;
//     int i ;
//     sort(arr,arr+n);
//     for( i=1;i<n;i++)
//     {
//         if(arr[i] == arr[i-1])
//             curr++;
//         else
//         {
//             if((n/k)< curr)
//                 cout<< "Output :"<<arr[i-1] <<" ";
//             curr = 1 ;
//         }
//     }
//     if((n/k)<curr)
//         cout<<"Output :"<<arr[i-1] <<" ";
// }

// int  main()
// {
//     int n, k ;
//     cout << "Enter the value of n :";
//     cin >> n;
//     cout<<"Enter the value of k :";
//     cin>> k ;
//     int arr[n];
//     cout << "Enter the elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     Occurences(arr, n,k);
//     return 0;
// }

//  More than n/k Occurences ( O(n))

// #include <bits/stdc++.h>
// using namespace std;
// void Occurences(int arr[], int n, int k)
// {
//     unordered_map<int , int >m;

//     for(int i=0;i<n;i++)
//         m[arr[i]]++ ;

//     for(auto e : m )
//         if(e.second > (n/k))
//             cout<<e.first <<"\n";

// }

// int main()
// {
//     int n, k;
//     cout << "Enter the value of n :";
//     cin >> n;
//     cout << "Enter the value of k :";
//     cin >> k;
//     int arr[n];
//     cout << "Enter the elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     Occurences(arr, n, k);
//     return 0;
// }

// incomplete

// input -> 1 2 3 7 5
// output-> 2 4
// Based on 1-indexing

// #include<bits/stdc++.h>
// using namespace std ;

// int position(int arr[], int n , int sum )
// {
//     int pre = 0 ;
//     int left = 1 , right = 1 , i = 1 ;
//     while(i<=n)
//     {
//         if(pre == sum)
//             return (left,right);

//         pre = pre+arr[i];

//         if(pre< sum)
//             right++ ;
//         else if(pre>sum)
//         {
//             left++;
//             pre= pre-arr[left-1];
//         }
//         else
//             return(left,right);

//         i++ ;
//     }

// }

// int main()
// {
//     int n, sum , ret ;
//     cout << "Enter the value of n :";
//     cin >> n;
//     cout << "Enter the value of sum :";
//     cin >> sum;
//     int arr[n];
//     cout << "Enter the elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//      ret = position(arr, n, sum);
//      cout<< ret << " " << ret ;
//     return 0;

// }

//-----------------------------------------------------------------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std ;

// int main()
// {

//     unordered_map<string ,int> umap;

//     umap["jitesh"] = 20 ;
//     umap["madhu"] = 19 ;
//     umap["nidhi"] = 25 ;
//     umap["priti"] = 30 ;

//     // if(umap.find("verma") != umap.end())
//     //     cout<<"item Found" << endl ;
//     // else
//     //     cout<<"item Not Found" <<endl ;

//     // for(auto x : umap)
//     //     cout<< x.first<<" " << x.second<< endl ;

//    cout<< umap.size() << endl ;
//     umap.erase(umap.begin(),umap.end());
//    cout<<  umap.size() << endl ;
//     return 0 ;
// }

//  Implimentation of chaining

// #include<bits/stdc++.h>
// using namespace std ;

// class jitesh
// {
//     public:
//     int bucket ;
//     list<int> *table;

//     jitesh(int b )
//     {
//         bucket = b;
//         table = new list<int>[b];
//     }

//     void insert(int key)
//     {
//         int i = key % bucket ;
//         table[i].push_back(key);
//     }
//     void Remove(int key)
//     {
//         int i=  key% bucket ;
//         table[i].remove(key);
//     }
//     bool Search(int key)
//     {
//         int i = key % bucket ;
//         for(auto x : table[i])
//         {
//             if(x == key)
//                 return true;
//             return false ;
//         }
//     }

// };
// int main()
// {
//     bool res ;
//     int arr[] = {10,20,14,21,15,16,25} ;
//      int b = 8 ;

//      jitesh J(7);

//      for(int i =0 ;i<7 ;i++)
//      {
//         J.insert(arr[i]);
//      }
//      res = J.Search(arr[4]);
//       cout<< res << endl ;

//       J.Remove(arr[3]);

//      res = J.Search(arr[4]);
//       cout<< res ;

//       return 0 ;

//       //     bool ret ;
// //     int arr[7] = {10,20,14,21,15,16,25} ;
// //     jitesh J(7);

// //     for(int i=0;i<7;i++)
// //         J.Insert(arr[i]);

// //     J.Delete(arr[0]);
// //     ret = J.Search(arr[6]) ;
// //     cout<< ret ;

// }
//---------------------------------------------- Practice ------------------------------------------------------------
// count the distinct numbers of elements  (O(n^2))

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {10,10,10,10,11};

//     int count = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         bool flag = false;
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag == false)
//             count++;
//     }

//     cout<< count ;
// }

// count the distinct numbers of elements  (O(n))

// #include<bits/stdc++.h>
// using namespace std ;

// int main()
// {
//     int arr[] = { 10 , 20 ,30 ,20 ,10,30,40};
//     unordered_set<int > uset ;

//     for(int i=0;i<7 ;i++)
//     {
//         uset.insert(arr[i]);
//     }
//     cout<< uset.size();

// }

// Frequency of an Array O(n^2)

// #include <bits/stdc++.h>
// using namespace std;

// void Freq(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         bool flag = false;

//         for (int j = 0; j < i; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 flag = true;
//                 break;
//             }
//         }

//         if(flag == true)
//             continue;
//         int freq = 1 ;
//         for(int k = i+1 ;k<n;k++)
//         {
//             if(arr[i]== arr[k])
//                 freq++;
//         }

//         cout<< arr[i] <<" "<< freq  << endl;

//     }
// }

// int main()
// {
//     int n = 5 ;
//     int arr[] = {10,20,20,30,10};

//     Freq(arr,n);

//     return 0 ;
// }

// Frequency of an Array O(n)
// #include<bits/stdc++.h>
// using namespace std ;

// void freq(int arr[],int n)
// {
//     unordered_map<int , int> uset ;

//     for(int i=0;i<n;i++)
//         uset[arr[i]]++ ;
//     for(auto x : uset)
//         cout<< x.first <<" "<<x.second  <<endl;

// }
// int main()
// {

//     int n = 5 ;
//     int arr[] = {10,20,20,30,10};

//     freq(arr,n);

//     return 0 ;

// }

// more than n/k occurences O(nlogn)

// #include<bits/stdc++.h>
// using namespace std ;

// void NKoccurence(int arr[],int n , int k)
// {
//     int count = 1;
//     int i ;
//     sort(arr,arr+n);
//     for( i=1;i<n;i++)
//     {
//         if(arr[i] == arr[i-1])
//         {
//             count++ ;
//         }
//         else{
//             if(count > n/k)
//                 cout<< arr[i-1]<<" ";
//             count++ ;
//         }
//     }
//     if(count > n/k)
//         cout<< arr[i-1];

// }
// int main()
// {
//     int n,k ;
//     cout<< "Enter the value of n :";
//     cin>> n ;
//     cout<< "Enter the value of k :";
//     cin>> k ;
//     int arr[n];
//     cout<< "Enter the array :";
//     for(int i=0;i<n;i++)
//         cin>> arr[i] ;
//     NKoccurence(arr,n,k);

//     return 0 ;

// }

// more than n/k occurences O(n)

// #include<bits/stdc++.h>
// using namespace std ;

// void NKoccurence(int arr[],int n , int k)
// {
//     int count = 1;
//     unordered_map<int , int> umap ;

//     for(int i=0;i<n;i++)
//         umap[arr[i]]++ ;
//     for( auto e : umap)
//     {
//         if(e.second > (n/k))
//             cout<< e.first << " " << e.second << endl ;
//     }

// }
// int main()
// {
//     int n,k ;
//     cout<< "Enter the value of n :";
//     cin>> n ;
//     cout<< "Enter the value of k :";
//     cin>> k ;
//     int arr[n];
//     cout<< "Enter the array :";
//     for(int i=0;i<n;i++)
//         cin>> arr[i] ;
//     NKoccurence(arr,n,k);

//     return 0 ;

// }


// Map in c++ stl

// #include <bits/stdc++.h>
// #include <map>
// using namespace std;

// int main()
// {
//     map<int, int> m;

//     m.insert({10, 300});
//     m[5] = 100;
//     m.insert({1, 200});

//     for (auto x : m)
//         cout << x.first << " " << x.second << endl;

//     cout << m.size() << endl;
//     m.erase(m.find(5), m.end());
//     cout << m.size();
//     return 0;
// }

// set in c++ stl

// #include<bits/stdc++.h>
// #include<set>
// using namespace std ;

// int main()
// {
//     set<int> st;

//     st.insert(20);
//     st.insert(10);
//     st.insert(30);

//     auto val = st.upper_bound(12) ;
//     cout<< *val ;
//     auto al = st.lower_bound(22) ;
//    cout<< *al ;


//     return 0 ;
// }

// Ceiling On Left Side

// #include<bits/stdc++.h>
// using namespace std ;

// void ceiling(int arr[],int n)
// {
//     set<int>st;
//     st.insert(arr[0]);
//     cout<< -1<<" ";
//     for(int i=1;i<n;i++)
//     {
//         auto ceil = st.lower_bound(arr[i]);
//         if(ceil != st.end())
//             cout<< *ceil<<" ";
//         else
//             cout<< -1 << " ";
        
//         st.insert(arr[i]);
//     }
// }

// int main()
// {
//     int arr[] = {2,8,30,15,25,12};

//     ceiling(arr,6);

//     return 0 ;

// }

// Find The Kth smallest Elements

// #include<bits/stdc++.h>
// using namespace std ;

// void Smallest(int k)
// {
//     set<int , greater<int>> st ;

//     st.insert(10);
//     st.insert(5);
//     st.insert(15);
//     st.insert(20);
//     st.insert(2);

//     auto val = next(st.begin(),k-1);
//     cout<< *val ;
// }

// int main()
// {
//     int k ;
//     cout<<"Enter the Position :";
//     cin>> k ;

//     Smallest(k);

//     return 0 ;
// }

// ---------------------------------- MAP -----------------------------------------------

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    map<int,int> mp ;

    mp[1] = 10 ;
    mp[2] = 20 ;
    mp[3] = 30 ;
    mp[4] = 40 ;
    mp[5] = 50 ;
    mp[5] = 70 ; 

    for(auto x : mp)
    {
        cout<< x.first <<" "<<x.second;
        cout<< endl ;

    }

}