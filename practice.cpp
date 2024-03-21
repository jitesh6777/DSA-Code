

// // There is a range given n and m in which we have to find the count of all the prime
// //  pairs whose difference is 6. We have to find how many sets are there within a given range.

// // https://www.faceprep.in/tcs/tcs-digital-placement-papers/

// #include <bits/stdc++.h>
//     using namespace std;

// int A[100], B[100];
// int count1 = 0;
// int count2 = 0;

// void Prime1(int str1, int str2)
// {
//     int k = 0;

//     int check = 0;

//     for (int i = str1; i <= str2; i++)
//     {
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 check++;
//                 break;
//             }
//         }
//         if (check == 0 && i != 0)
//         {
//             A[k] = i;
//             count1++;
//             k++;
//         }
//         check = 0;
//     }
// }
// void Prime2(int str1, int str2)
// {
//     int k = 0;

//     int check = 0;

//     for (int i = str1; i <= str2; i++)
//     {
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 check++;
//                 break;
//             }
//         }
//         if (check == 0 && i != 0)
//         {
//             B[k] = i;
//             k++;
//             count2++;
//         }
//         check = 0;
//     }
// }

// void number()
// {
//     int val = 0;

//     for (int i = 0; i < count1; i++)
//     {
//         for (int j = i + 1; j < count2; j++)
//         {
//             if (abs(A[i] - B[j]) == 6)
//                 val++;
//         }
//     }
//     cout << val;
// }

// int main()
// {

//     int str1 = 101;
//     int str2 = 500;

//     Prime1(str1, str2);
//     Prime2(str1, str2);
//     number();

//     return 0;
// }

// Incomplete

// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     vector<int>vt = { 4,60,10,20,8,80,100};

//     cout << "before sorting :" << endl;
//     for (auto x : vt)
//         cout << x << " ";
//     cout << endl;
//     int *res;
//     int i;
//     for (i = 1; i < vt.size(); i++)
//     {
//         if (vt[i] < vt[i - 1])
//         {
//             res = &vt[i - 1];
//             break;
//         }
//     }
//     cout<< *res<<endl ;
//     int mn = vt[i];
//     int *MIN = &vt[4];
//     // for (int j = i + 1; j < vt.size(); j++)
//     // {
//     //     mn = min(mn, vt[j]);
//     //     MIN = &mn;
//     // }

//     for(int i=0;i<vt.size();i++)
//         cout<< vt[i]<<" ";

//     swap(*res,*MIN) ;

//     cout << "After Sorting :" << endl;
//     for(int i=0;i<vt.size();i++)
//         cout<< vt[i]<<" ";

// }

//---------------------------------------- string ----------------------------------------------------------

// check string is subsequences

// #include<iostream>
// using namespace std ;

// void SubseQ( string &str1 , string &str2)
// {
//     int Sn =0 ;
//     int Sm = 0 ;
//     for(int i=0;str1[i]!='\0';i++)
//         Sn++ ;
//     for(int i=0;str2[i]!='\0';i++)
//         Sm++ ;

//     int j=0;
//     for(int i=0;i<Sn && j<Sm ; i++)
//     {
//         if(str1[i]== str2[j])
//             j++;
//     }

//     if(j == Sm)
//         cout<<"Yes";
//     else
//         cout<<"No";
// }

// int main()
// {
//     string str1 = "jitesh" ;

//     string str2 = "Jit";

//     SubseQ(str1,str2);

//     return 0 ;

// }

// overview of pattern searching O(n+m)

// #include <iostream>
// using namespace std;
// void pattern(string &str1, string &str2)
// {
//     int Sn = 0;
//     int Sm = 0;
//     for (int i = 0; str1[i] != '\0'; i++)
//         Sn++;
//     for (int i = 0; str2[i] != '\0';i++)
//         Sm++;

//     int j = 0;
//     for (int i=0 ; i < Sn && j < Sm;i++)
//     {
//         if (str1[i] == str2[j])
//             j++;

//         if (j == Sm)
//         {
//             cout << i - j + 1 << " ";
//             i = i - j + 1;
//             j = 0;
//         }
//     }
// }

// int main()
// {
//     string str1 = "GEEKSFORGEEKS" ;
//     string str2 = "EKS";

//     // string str1 = "AAAAA";
//     // string str2 = "AAA";

//     // string str1 ="ABCABCD";
//     // string str2 ="ABCD";

//     SubseQ(str1, str2);

//     return 0;
// }

// Given two strings a and b. The task is to find if the string 'b' can be
// obtained by rotating another string 'a' by exactly 2 places.

// a = amazon
// b = azonam
// Output: 1

// a = geeksforgeeks
// b = geeksgeeksfor
// Output: 0

// this solution is not in an order of O(n)
// we have to solve in O(n)
// #include <iostream>
// using namespace std;

// void Rot2place(string &str1, string &str2)
// {
//     int Sn = 0;
//     int Sm = 0;
//     for (int i = 0; str1[i] != '\0'; i++)
//         Sn++;

//     for(int i=0;i<2;i++)
//     {
//         char ch = str1[0];
//         int j ;
//         for(j=0;j< Sn-1;j++)
//         {
//             str1[j] = str1[j+1];
//         }
//         str1[j] = ch ;
//     }

//     // cout<< str1 <<endl ;
//     // cout<< str2 <<endl ;

//     if( str1 == str2)
//         cout<< true ;
//     else
//         cout<< false ;
// }

// int main()
// {
//     // string str1 = "amazon";
//     // string str2 = "azonam";

//     string str1 = "geeksforgeeks";
//     string str2 = "geeksgeeksfor";

//     Rot2place(str1,str2);

//     return 0 ;
// }

// this solution is an order of O(n)

// #include <iostream>
// using namespace std;

// void Rot2place(string &str1, string &str2)
// {
//     int Sn = 0;
//     int Sm = 0;
//     for (int i = 0; str1[i] != '\0'; i++)
//         Sn++;

//     char ch1 = str1[0];
//     char ch2 = str1[1];
//     int j;
//     for (j = 0; j < Sn - 2; j++)
//     {
//         str1[j] = str1[j + 2];
//     }
//     str1[j] = ch1;
//     str1[j+1] = ch2;

//     cout << str1 << endl;
//     cout << str2 << endl;

//     if( str1 == str2)
//         cout<< true ;
//     else
//         cout<< false ;
// }

// int main()
// {
//     // string str1 = "amazon";
//     // string str2 = "azonam";

//     string str1 = "geeksforgeeks";
//     string str2 = "geeksgeeksfor";

//     Rot2place(str1, str2);

//     return 0;
// }
// Check if strings are rotations of each other or not

// Input:
// geeksforgeeks
// forgeeksgeeks
// Output:
// 1

// Input:
// mightandmagic
// andmagicmigth
// Output:
// 0
// Incomplete
// #include <iostream>
// using namespace std;

// void Rotation(string str1, string str2)
// {
//     int Sn = 0;
//     int Sm = 0;

//     for (int i = 0; str1[i] != '\0'; i++)
//         Sn++;
//     for (int i = 0; str2[i] != '\0'; i++)
//         Sm++;

//     if (Sn != Sm)
//         cout << " not present ";
//     else
//     {
//         int j = 0;
//        string str = str1 + str2;
//         int Snew = 0;
//         for (int i = 0; str[i] != '\0'; i++)
//             Snew++;

//         for (int i = 0; i < Snew && j < Sm; i++)
//         {
//             if (str[i] == str2[j])
//                 j++;
//             else
//             {
//                 i = i-j+1 ;
//                 j = 0;
//             }
//         }

//         if (j == Sm)
//             cout << true;
//         else
//             cout << false;
//     }
// }

// int main()
// {
//     string str1 = "ABCD";
//     string str2 = "CDAB";
//     Rotation(str1, str2);

//     return 0;
// }

// Reverse Word in a string
// i/p - > "welcome.to.Gfg"
// o/p -> "Gfg.to.welcome"

//  #include<bits/stdc++.h>
//  using namespace std ;

//  void reverse(char str[] , int low , int high)
//  {
//     while(low<=high)
//     {
//     swap(str[low],str[high]);
//     low++;
//     high--;
//     }
//  }

//  void REVER(char str[] , int n)
//  {

//     int start = 0;

//     for(int end = 0 ; end< n ;end++)
//     {
//         if(str[end] == '.')
//         {
//             reverse(str,start, end-1);
//             start = end +1 ;
//         }
//     }
//     reverse(str,start, n-1);
//     reverse(str,0,n-1);
//     cout<< str << endl ;
//  }

//  int main()
//  {
//     char str[] = {"i.like.this.program.very.much"};

//     int n = strlen(str);
//     REVER(str,n);

//     return 0;

//  }

// Keypad typing

// You are given a string S of lowercase alphabet characters and the task
//  is to find its matching decimal representation as on the shown keypad.
//   Output the decimal representation corresponding to the string.
//    For ex: if you are given amazon then its corresponding decimal representation will be 262966.

// #include <iostream>
// using namespace std;

// string KeypadTyping(string &str)
// {
//    string result;

//    for (int i = 0; i < str.size(); i++)
//    {

//       if (str[i] >= 'a' && str[i] < 'c')
//          result += '2';
//       else if (str[i] >= 'd' && str[i] <= 'f')
//          result += '3';
//       else if (str[i] >= 'g' && str[i] <= 'i')
//          result += '4';
//       else if (str[i] >= 'j' && str[i] <= 'l')
//          result += '5';
//       else if (str[i] >= 'm' && str[i] <= 'o')
//          result += '6';
//       else if (str[i] >= 'p' && str[i] <= 's')
//          result += '7';
//       else if (str[i] >= 't' && str[i] <= 'v')
//          result += '8';
//       else if (str[i] >= 'w' && str[i] <= 'z')
//          result += '9';
//    }

//    return result;
// }
// int main()
// {

//    string str = "geeksquiz";

//    string strN = KeypadTyping(str);

//    cout<< strN ;

//    return 0;
// }



// #include <iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>vt = { 4,60,10,20,8,80,100};

//     cout << "before sorting :" << endl;
//     for (auto x : vt)
//         cout << x << " ";
//     cout << endl;
//     int *res;
//     int i;
//     for (i = 1; i < vt.size(); i++)
//     {
//         if (vt[i] < vt[i - 1])
//         {
//             res = &vt[i - 1];
//             break;
//         }
//     }
//     int mn = vt[i];
//     int *MIN = &mn ;
//     for (int j = i + 1; j < vt.size(); j++)
//     {
//         mn = min(mn, vt[j]);
//         MIN = &mn;
//     }
//     swap(*res,*MIN) ;
//     int count =0 ;
//     for(int i=0;i < vt.size();i++)
//     {
//         if( vt[i] == *res )
//             count++ ;
        
//         if(count == 2 )
//         {
//             &vt[i] = *res ;
//             break;
//         }
//     }
//     cout << "After Sorting :" << endl;
//     for(int i=0;i<vt.size();i++)
//         cout<< vt[i]<<" ";

// }