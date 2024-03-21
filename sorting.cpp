// In built sort function in array

// #include<iostream>
// #include<algorithm>
// using namespace std ;
// int main()
// {
//  int arr[]={12 ,3 ,24 ,8 ,3} ;
//  int n = 5 ;
//  sort(arr,arr+n);
//  cout<<"Sorted elements "<< endl ;
//  for(int x : arr)
//     cout<< x << " ";
// cout<< endl ;
// sort(arr,arr+n,greater<int>());
// for(int y : arr)
//     cout<< y << " ";
//  return 0;
// }

// sort function in vector

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std ;
// int main()
// {
//     vector<int> v = {5,7,20,10};
//     sort(v.begin(),v.end());
//     cout<<"Sorted vector in ascending "<< endl ;
//     for(int x : v)
//         cout<< x <<" " ;
//     cout<< endl ;
//     sort(v.begin(),v.end(),greater<int>());
//     cout<<"Sorted Vector in Dscending order "<< endl ;
//     for(int y : v)
//         cout<< y <<" " ;

//     return 0 ;
// }

// Bubble Sort (optimized solution)

// #include<iostream>
// // #include<algorithm> // this header is used for in-built sort function
// using namespace std ;
// void bubble(int arr[],int n )
// {
//     for(int i=0;i<n-1;i++)
//     {
//         bool swapped = false ;
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//                 swapped = true ;
//             }
//         }
//         if(swapped == false)
//             break;
//     }
//     for(int i=0;i<n;i++)
//         cout<< arr[i] <<" " ;
// }

// int main()
// {
//     int n ;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<" Enter the elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     bubble(arr,n);
//     return 0 ;
// }

// Selection Sort

// #include<iostream>
// using namespace std ;
// void selection(int arr[] , int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int min = i ;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]< arr[min])
//                 min = j ;
//         }
//         swap(arr[min],arr[i]);
//     }
//     for(int i=0;i<n;i++)
//         cout<<arr[i] << " " ;
// }
// int main()
// {
//     int n ;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<" Enter the elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     selection(arr,n);
//     return 0 ;
// }

//-------------------------------------------------------------------------------------------------

// > Merge  two sorted array

// #include <iostream>
// using namespace std;
// void merge(int arr1[], int arr2[], int m, int n)
// {
//     int i = 0;
//     int j = 0;
//     int k=0;
//     int temp[m+n];

//     while (i < m && j < n)
//     {
//         if (arr1[i] <= arr2[j])
//         {
//             temp[k]= arr1[i];
//             i++;
//             k++;

//         }
//         else
//         {
//             temp[k] = arr2[j];
//             j++;
//             k++;
//         }
//     }
//     while (i < m)
//     {
//         temp[k] = arr1[i];
//         k++;
//         i++;
//     }
//     while (j < n)
//     {
//         temp[k] = arr2[j] ;
//         j++ ;
//         k++ ;
//     }

//     for(int i=0;i< m+n ; i++)
//         cout<< temp[i]<<" ";

// }
// int main()
// {
//     int m, n;
//     cout << "Enter how many values you want in array 1 :";
//     cin >> m;
//     cout << "Enter how many values you want in array 2 :";
//     cin >> n;
//     int arr1[m], arr2[n];
//     cout << "Enter array 1 value :";
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr1[i];
//     }
//     cout << " Enter array 2 value :";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr2[i];
//     }

//     merge(arr1, arr2, m, n);
//     return 0;
// }

// incomplete merge sort

// #include <iostream>
// using namespace std;
// printArray(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//         cout<< arr[i] << " ";
//     cout<< "\n" ;
// }
// void merge(int arr[], int l, int mid, int r)
// {
//     int n1 = mid - l + 1;
//     int n2 = r - mid;

//     int arr1[n1];
//     int arr2[n2];

//     for (int i = 0; i < n1; i++)
//         arr1[i] = arr[l + i];

//     for (int j = 0; j < n2; j++)
//         arr2[j] = arr[mid+1+j];

//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (i < n1 && j < n2)
//     {
//         if (arr1[i] <= arr2[j])
//         {
//             arr[k] = arr1[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             arr[k] = arr2[j];
//             j++;
//             k++;
//         }
//     }
//     while (i < n1)
//     {
//         arr[k] = arr1[i];
//         i++;
//         k++;
//     }
//     while (j < n2)
//     {
//         arr[k] = arr2[j];
//         j++;
//         k++;
//     }
// }
// void mergeSort(int arr[], int l, int r)
// {
//     if (r > l)
//     {
//         int mid = (r +l) / 2;
//         mergeSort(arr, l, mid);
//         mergeSort(arr, mid + 1, r);
//         merge(arr, l, mid, r);
//     }
// }
// int main()
// {
//     int arr[] = {40,30,10,20,50};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printArray(arr,n);
//     mergeSort(arr, 0, n-1);
//     printArray(arr,n);
//     return 0;
// }

// Intersection of Two sorted array

// #include <iostream>
// using namespace std;

// void intersection(int arr1[], int arr2[], int m, int n)
// {
//     int i = 0, j = 0;

//     while (i < m && j < n)
//     {
//         if (i > 0 && arr1[i] == arr1[i - 1])
//         {
//             i++;
//             continue;
//         }

//         if (arr1[i] < arr2[j])
//             i++;
//         else if (arr1[i] > arr2[j])
//             j++;
//         else
//         {
//             cout << "output : "<<arr1[i] << " ";
//             i++;
//             j++;
//         }
//     }
// }

// int main()
// {
//     int m, n;
//     cout << "Enter the value of m and n :";
//     cin >> m >> n;

//     int arr1[m];
//     int arr2[n];

//     cout << "Enter the array-1 elements :";
//     for (int i = 0; i < m; i++)
//         cin >> arr1[i];

//     cout << "Enter the array-2 elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr2[i];

//     intersection(arr1, arr2, m, n);

//     return 0;
// }

// Union of two sorted array

// #include <iostream>
// using namespace std;
// void Union(int arr1[], int arr2[], int m, int n)
// {
//     int i =0;
//     int j=0 ;
//     while (i < m && j < n)
//     {
//         if(i>0 && arr1[i]==arr1[i-1])
//         {
//             i++;
//             continue;
//         }
//         if(j>0 && arr2[j]==arr2[j-1])
//         {
//             j++;
//             continue;
//         }
//         if (arr1[i] < arr2[j])
//         {
//             cout<< arr1[i]<<" ";
//             i++;
//         }
//         else if(arr1[i]> arr2[j])
//         {
//             cout<< arr2[j]<<" ";
//             j++;
//         }
//         else
//         {
//             cout<<arr1[i]<<" ";
//             i++;
//             j++;
//         }
//     }
//     while(i<m)
//     {
//         if(i>0 && arr1[i] != arr1[i-1])
//         {
//             cout<<arr1[i]<<" ";
//             i++;
//         }
//         else
//         {
//             i++;
//             continue;
//         }
//     }
//     while(j<n)
//     {
//         if(j>0 && arr2[j] != arr2[j-1])
//         {
//             cout<<arr2[j]<<" ";
//             j++;
//         }
//         else
//         {
//             j++;
//             continue;
//         }
//     }
// }

// int main()
// {
//     int m, n;
//     cout << "Enter the value of m and n :";
//     cin >> m >> n;

//     int arr1[m];
//     int arr2[n];

//     cout << "Enter the array-1 elements :";
//     for (int i = 0; i < m; i++)
//         cin >> arr1[i];

//     cout << "Enter the array-2 elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr2[i];

//     Union(arr1, arr2, m, n);

//     return 0;
// }

//  Count Inversion in an array

// #include<iostream>
// using namespace std ;

// int Inversions(int arr[] , int n)
// {
//     int res = 0;
//     for(int i=0;i<(n-1);i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 cout<<"( "<< arr[i]<< "," <<arr[j] <<" )"  <<"\n";
//                 res++;
//             }
//         }
//     }
//      return res ;

// }
// int main()
// {
//     int n ,m ;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<" Enter the elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = Inversions(arr,n);
//     cout<< m ;
//     return 0 ;

// }

// Partition of a given array(Naive Solution)

// #include<iostream>
// using namespace std ;
// void partition(int arr[],int l , int h,int p)
// {
//     int temp[h-l+1];
//     int index = 0;
//     int pivot = arr[p] ;
//     for(int i=l;i<=h;i++)
//     {
//         if(arr[i]< pivot)
//         {
//             temp[index]=arr[i];
//             index++;
//         }
//     }
//     temp[index] = pivot;
//     index++ ;

//     for(int i=l;i<=h;i++)
//     {
//         if(arr[i]>pivot)
//         {
//             temp[index]=arr[i];
//             index++ ;
//         }
//     }

//     for(int i=l;i<=h;i++)
//         arr[i]=temp[i];

//     for(int i=l;i<=h;i++)
//         cout<< arr[i]<<" ";
// }
// int main()
// {
//     int n,l,h,p ;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<" Enter the elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     cout<<"Enter the value of low index ";
//     cin>> l ;
//     cout<<"Enter the value of high index ";
//     cin>> h ;
//     cout<<"Enter the value of pivot ";
//     cin>> p ;

//     partition(arr,l,h,p);
//     return 0 ;

// }

// Lomuto Partition

// #include <iostream>
// using namespace std;
// int lomuto(int arr[], int l, int h)
// {
//     int i = l;
//     int pivot = arr[h];
//     for (int j = l; j <= (h - 1); j++)
//     {
//         if (arr[j] < pivot)
//         {
//             swap(arr[j], arr[i]);
//             i++;
//         }
//     }
//     swap(arr[i], arr[h]);

//     for (int i = l; i <= h; i++)
//         cout << arr[i] << " ";
//     return i;
// }
// int main()
// {
//     int n, l, h, p;
//     cout << "Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << " Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Enter the value of low index ";
//     cin >> l;
//     cout << "Enter the value of high index ";
//     cin >> h;
//     p = lomuto(arr, l, h);
//     cout<< "pivot :" << p <<"\n";
//     return 0;
// }

// Hoare's Partitions

// #include <iostream>
// using namespace std;
// int Hoare(int arr[], int l, int h)
// {
//     int i = l - 1;
//     int j = h + 1;
//     int pivot = arr[l];

//     while (true)
//     {
//         do
//         {
//             i++;
//         } while (arr[i] < pivot);

//         do
//         {
//             j--;
//         } while (arr[j] > pivot);

//         if (i >= j)
//             return j;

//         swap(arr[i], arr[j]);
//     }
// }
// int main()
// {
//     int n, l, h, p;
//     cout << "Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << " Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Enter the value of low index ";
//     cin >> l;
//     cout << "Enter the value of high index ";
//     cin >> h;
//     p = Hoare(arr, l, h);
//     cout << "pivot :" << p << "\n";
//     return 0;
// }

// Quick Sort Algorithm

// #include <iostream>
// using namespace std;
// int lomuto(int arr[], int l, int h)
// {
//     int i = l;
//     int pivot = arr[h];
//     for (int j = l; j <= (h - 1); j++)
//     {
//         if (arr[j] < pivot)
//         {
//             swap(arr[j], arr[i]);
//             i++;
//         }
//     }
//     swap(arr[i], arr[h]);
//     return i;
// }
// void Qsort(int arr[], int l, int h)
// {
//     if (l < h)
//     {
//         int p = lomuto(arr, l, h);
//         Qsort(arr, l, p - 1);
//         Qsort(arr, p + 1, h);
//     }
// }
// int main()
// {
//     int n, l, h, p;
//     cout << "Enter the value of n ";
//     cin >> n;
//     int arr[n];
//     cout << " Enter the elements ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Enter the value of low index ";
//     cin >> l;
//     cout << "Enter the value of high index ";
//     cin >> h;
//     Qsort(arr, l, h);
//     for (int i = l; i <= h; i++)
//         cout << arr[i] << " ";
//     return 0;
// }

// Kth smallest KthElements

// #include<iostream>
// #include<algorithm>
// using namespace std ;
// int KthElements(int arr[] , int n , int k)
// {
//     sort(arr,arr+n) ;
//     return (arr[k-1]);
// }
// int main()
// {
//     int n,k,returns;
//     cout<<"Enter the value of n :";
//     cin>> n ;

//     cout<<"Enter the value of k :";
//     cin>> k ;

//     int arr[n];
//     cout<<"Enter the array elements :";
//     for(int i=0;i<n;i++)
//         cin>> arr[i];

//     returns = KthElements(arr,n,k);
//     cout<< returns ;

//     return 0 ;
// }

// Chocolate Distribution Problems

// #include<iostream>
// #include<algorithm>
// using namespace std ;
// int diff(int arr[],int n , int m)
// {
//     int res =0 ;
//     if(m>n)
//         return -1 ;
//     sort(arr,arr+n) ;
//     res = (arr[m-1] - arr[0]) ;
//     for(int i=1 ; (i+m-1)<n ;i++)
//     {
//         res = min(res, (arr[i+m-1]-arr[i])) ;
//     }
//     return res ;
// }
// int main()
// {
//     int n,m,returns;
//     cout<<"Enter the value of n :";
//     cin>> n ;
//     cout<<"Enter the value of m :";
//     cin>> m ;
//     int arr[n];
//     cout<<"Enter the array elements :";
//     for(int i=0;i<n;i++)
//         cin>> arr[i];
//     returns = diff(arr,n,m);
//     cout<< returns ;
//     return 0 ;
// }
// ---------------------------------------------------------------------------------------------------------------

// Segregation of +ve and -ve

// #include <iostream>
// using namespace std;
// void segregatePosNeg(int arr[], int n)
// {
//     int temp[n];
//     int index = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 0)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] >= 0)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int j = 0; j < n; j++)
//         arr[j] = temp[j];
//     for (int j = 0; j < n; j++)
//         cout << arr[j] << " ";
// }
// int main()
// {
//     int n;
//     cout<<"Enter the value of n :";
//     cin>> n ;
//     int arr[n];
//     cout<<"Enter the array elements :";
//     for(int i=0;i<n;i++)
//         cin>> arr[i];
//     segregatePosNeg(arr,n);
//     return 0 ;
// }

//  Segregation of Even and Odd

// #include <iostream>
// using namespace std;
// void segregateEvOd(int arr[], int n)
// {
//     int temp[n];
//     int index = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int j = 0; j < n; j++)
//         arr[j] = temp[j];
//     for (int j = 0; j < n; j++)
//         cout << arr[j] << " ";
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
//     segregateEvOd(arr, n);
//     return 0;
// }

// Sort a Binary array

// #include <iostream>
// using namespace std;
// void Binary(int arr[], int n)
// {
//     int temp[n];
//     int index = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]  == 0)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 1)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int j = 0; j < n; j++)
//         arr[j] = temp[j];
//     for (int j = 0; j < n; j++)
//         cout << arr[j] << " ";
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
//     Binary(arr, n);
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------
// Sort an Array with three types

// Sort an Array of 0s , 1s and 2s ....

// #include <iostream>
// using namespace std;
// void ZeroOneTwo(int arr[], int n)
// {
//     int temp[n];
//     int index = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]  == 0)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]  == 1)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]  == 2)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int j = 0; j < n; j++)
//         arr[j] = temp[j];
//     for (int j = 0; j < n; j++)
//         cout << arr[j] << " ";
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
//     ZeroOneTwo(arr, n);
//     return 0;
// }

// Three Way Partitioning

// #include <iostream>
// using namespace std;
// void ThreeWay(int arr[], int n , int pivot)
// {
//     int temp[n];
//     int index = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]< pivot)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]  == pivot)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]> pivot)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int j = 0; j < n; j++)
//         arr[j] = temp[j];
//     for (int j = 0; j < n; j++)
//         cout << arr[j] << " ";
// }
// int main()
// {
//     int n , pivot;
//     cout << "Enter the value of n :";
//     cin >> n;
//     cout<<"Enter the pivot value :";
//     cin>> pivot ;
//     int arr[n];
//     cout << "Enter the array elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     ThreeWay(arr, n,pivot);
//     return 0;
// }

// Partition around a Range 

// #include <iostream>
// using namespace std;
// void PartionRange(int arr[], int n , int pivot1 , int pivot2)
// {
//     int temp[n];
//     int index = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < pivot1)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]  == pivot1)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > pivot1 && arr[i] < pivot2)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]  == pivot2)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > pivot2)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     for (int j = 0; j < n; j++)
//         arr[j] = temp[j];
//     for (int j = 0; j < n; j++)
//         cout << arr[j] << " ";
// }
// int main()
// {
//     int n,pivot1,pivot2;
//     cout << "Enter the value of n :";
//     cin >> n;
//     cout<<"Enter the Pivot-1 value :";
//     cin>> pivot1 ;
//     cout<<"Enter the Pivot-2 value :";
//     cin>> pivot2 ;
//     int arr[n];
//     cout << "Enter the array elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     PartionRange(arr, n, pivot1 , pivot2);
//     return 0;
// }