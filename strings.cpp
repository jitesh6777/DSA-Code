
// print the frequencies of characters(in sorted order)in a string of lower case alphabets

// #include<bits/stdc++.h>
// using namespace std ;

// int main()
// {
//     string str = "geeksforgeeks" ;

//     int count[26] = {0};

//     for(int i=0;i<str.length();i++)
//         count[str[i]-'a']++ ;

//     for(int i=0;i<26;i++)
//          if(count[i] > 0 )
//             cout<< (char)(i + 'a') <<" " <<  count[i]  <<endl ;
//     return 0 ;
// }

//  compare function

// #include<bits/stdc++.h>
// using namespace std ;
// int main()
// {
//     string s1 = "jitesh" ;
//     string s2 = "verma" ;
//     int s3 =  s1.compare(s2) ;
//     cout<< s3 ;
// }

// #include<bits/stdc++.h>
// using namespace std ;

// int main()
// {
//     string str = "geeksforgeeks" ;
//     cout<< str.length() <<endl ;
//     cout<< str + "jitesh"  << endl ;
//     cout<< str.substr(1,3) << endl ;
//     cout<< str.find("eek") << endl ;

//     // reading string from console

//     string jeet ;
//     cout<<"Enter the string :";
//     // cin>> jeet ; // cin will only read one string
//     // cout<< jeet ;

//     getline(cin,jeet);
//     cout<< jeet ;

//     return 0 ;
// }

// #include<bits/stdc++.h>
// using namespace std ;

// int main()
// {
//     string str = "geeksforgeeks" ;

//     for(int i = 0 ;i<str.length();i++)
//             cout<< str[i] << endl ;
// }

// check is the given string is pallindrom or not
// time (O(n))
// auxi space (O(n))

// #include<bits/stdc++.h>
// using namespace std ;

// bool stttr(string &str)
// {
//     string rev = str ;
//     reverse(rev.begin() , rev.end()) ;

//     return (rev == str ) ;
// }
// int main()
// {   bool store ;
//     string str = "jitesh";

//     store = stttr(str);
//     cout<< store ;

//     return 0 ;

// }

// check if the given string is pallindrom or not
// best case (O(1))
// worst space (O(n))
// auxi space (O(1))

// #include <bits/stdc++.h>
// using namespace std;
// bool iSPal(string &str)
// {
//     int right = str.length() - 1;
//     int left = 0;
//     while (right > left)
//     {
//         if (str[left] != str[right])
//             return false;

//         right--;
//         left++;
//     }
//     return true;
// }
// int main()
// {
//         bool store;
//         string str = "jitesh";
//         store = iSPal(str);
//         cout << store;
//         return 0;
// }

// check if a string is a subsequence of other

// #include <bits/stdc++.h>
// using namespace std;
// bool Subseq(string &str1, string &str2)
// {
//     int n= str1.length();
//     int m= str2.length();

//     int j=0 ;
//     for(int i=0;i<n && j<m;i++)
//     {
//         if(str1[i]==str2[j])
//             j++ ;
//     }
//     if(j==m)
//         return true ;
//     else
//         return false ;
// }

// int main()
// {
//     int n , m ;
//     bool res ;

//     string s1 = "jitesh";
//     string s2 = "jh";

//     res = Subseq(s1,s2);
//     cout<< res ;

//     return 0 ;
// }

// Anagram

// #include<bits/stdc++.h>
// using namespace std ;

// bool anagram(string &str1, string &str2)
// {
//     if(str1.length() == str2.length())
//     {
//         sort(str1.begin(),str1.end());
//         sort(str2.begin(),str2.end());

//         for(int i=0;i<str1.length();i++)
//         {
//             if(str1[i]!= str2[i])
//                 return false ;
//         }
//         return true ;
//     }
//     else
//         return false ;
// }

// int main()
// {
//     int n , m ;
//     bool res ;

//     string s1 = "aab";
//     string s2 = "baa";

//     res = anagram(s1,s2);
//     cout<< res ;

//     return 0 ;
// }

// checking Anagram

// #include<bits/stdc++.h>
// using namespace std ;

// bool anagram(string s1 , string s2 )
// {
//     if(s1.length() != s2.length())
//         return false ;

//     sort(s1.begin() ,s1.end());
//     sort(s2.begin() ,s2.end());

//     if(s1==s2)
//         return true ;
//     else
//         return false ;
// }
// int main()
// {
//     int n , m ;
//     bool res ;

//     string s1 = "jitesh";
//     string s2 = "jitepq";

//     res = anagram(s1,s2);
//     cout<< res ;

//     return 0 ;
// }

// Left most repeating elements

// #include<bits/stdc++.h>
// using namespace std ;

//  int leftRep(string &str1)
//  {
//     int CHAR = 256 ;
//     int n = str1.length() ;
//     int count[CHAR] = {0};

//     for(int i=0;i<n;i++)
//     {
//         count[str1[i]]++ ;
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(count[str1[i]] > 1)
//             return i ; // it will return position
//     }
//  }

// int main()
// {
//     int n , m ;
//     int res ;
//     string s1 = "geeksforeeks";
//     res = leftRep(s1);
//     cout<< res ;
//     return 0 ;
// }

// Left most non-repeating elements

// #include <bits/stdc++.h>
// using namespace std;

// int leftNonRep(string &str)
// {
//     int CHAR = 256;
//     int count[CHAR] = {0};

//     for (int i = 0; i < str.length(); i++)
//         count[str[i]]++;
//     for (int i = 0; i < str.length(); i++)
//         if (count[str[i]] == 1)
//             return i; // will return the inderx where the elements occurence is 1
// }
// int main()
// {
//     int n , m ;
//     int res ;
//     string s1 = "geeksforgeeks";
//     res = leftNonRep(s1);
//     cout<< res ;
//     return 0 ;
// }

//  reverse a whole sentances
// input -> welcome to geeksforgeeks
// output-> geeksforgeeks to welcome

// #include<bits/stdc++.h>
// using namespace std ;
// void PRINT(char str[])
//  {
//     cout<< str ;
//  }
// void reverse(char str[] ,int start , int end)
// {
//     while(end>=start)
//     {
//         swap(str[end],str[start]);
//         end-- ;
//         start ++ ;
//     }
// }
// void ReverseWo(char str[] , int n)
// {
//     int start = 0 ;
//     int end ;
//     for( end=0;end<n;end++)
//     {
//         if(str[end] == ' ')
//         {
//             reverse(str,start,end-1);
//             start = end+1 ;
//         }
//     }
//     reverse(str,start,end-1);
//     reverse(str,0,n-1);
//     PRINT(str);
// }
// int main()
// {
//     int n , m ;
//     char str[] = "welcome to geeksforgeeks";
//     n = strlen(str);
//     ReverseWo(str,n) ;
//     return 0 ;
// }

//-----------------------------------------------------------------------------------------------------------------

// Overview Of Pattern Searching

// 1. Naive Sloution (O((n-m+1)*m))

// #include <bits/stdc++.h>
// using namespace std;

// void Overview(string &txt, string &ptr)
// {
//     int n = txt.length();
//     int m = ptr.length();

//     for (int i = 0; i <= (n - m); i++)
//     {
//         int j;
//         for (j = 0; j < m; j++)
//         {
//             if (ptr[j] != txt[i + j])
//                 break;

//         }
//             if (j == m)
//                 cout << i << " ";
//     }
// }

// int main()
// {
//     string txt = "geeksforgeeks";
//     string ptr = "eks";

//     Overview(txt, ptr);

//     return 0;
// }

// 2. Improved Naive Solution (O( n ))

// #include<bits/stdc++.h>
// using namespace std ;

// void Overview( string &txt , string &ptr)
// {
//     int n = txt.length();
//     int m = ptr.length();

//     for(int i=0;i<=n-m;)
//     {
//         int j ;
//         for(j=0;j<m;j++)
//         {
//             if(ptr[j]!= txt[i+j])
//                 break;
//         }
//         if(j==m)
//             cout<< i <<" ";
//         if(j==0)
//             i++ ;
//         else
//             i=i+j ;
//     }
// }

// int main()
// {
//     string txt = "geeksforgeeks";
//     string ptr = "eks";

//     Overview(txt, ptr);

//     return 0;
// }

//-------------------------------------------------- Practice ------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str ;
//     cout<<"Enter Your Name :";
//     // cin>> str ; // we can not take a input like Jitesh Verma by cin>>

//     getline(cin,str);

//     cout<< str ;

//     return 0 ;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str1 = "abc" ;
//     string str2 = "bcd" ;

//     if(str1 == str2)
//         cout<<"equal";
//     else if(str1> str2)
//         cout<<"str1 is greater";
//     else
//         cout<<"str2 is greater";

//     cout<<endl ;

//     string strr ="geeksforgeeks";

//     for(int i=0;i<strr.length();i++)
//         cout<< strr[i]<<" ";
//     cout<< endl;

//     for(auto x : strr)
//         cout<< x <<" ";

//     return 0 ;
// }

// Check the Given String Is Palinfrome Or Not

// #include<bits/stdc++.h>
// using namespace std ;

// void Palindrome(string str1)
// {
//     stack<char> st;

//     for( auto x : str1)
//         st.push(x);

//     string str2 ;

//     while(!st.empty())
//     {
//         str2 = str2 + st.top();
//         st.pop();
//     }

//     if(str1 == str2)
//         cout<<"Palindrome";
//     else
//         cout<<"Not Palindrome";

// }

// int main()
// {
//     string str = "ABBA";

//     Palindrome(str);

//     return 0 ;
// }

// Check the Given String Is Palinfrome Or Not // this is not good practice

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std ;

// void palindrome(string &str)
// {
//     string rev = str ;

//     reverse(str.begin(),str.end());

//     if(rev == str )
//         cout<<"Yes Palinfrome ";
//     else
//         cout<<"No , Not a Palindrome";

// }

// int main()
// {

//     string str = "ABB";

//     palindrome(str);

//     return 0;

// }

// Check if a string is subsequence of other

// #include <bits/stdc++.h>
// using namespace std;

// void Subsequence(string str1, string str2)
// {
//     int n = str1.length();
//     int m = str2.length();
//     int j = 0;

//     for (int i = 0; i < n && j < m; i++)
//     {
//         if(str1[i]== str2[j])
//             j++;
//     }
//     if(j==m)
//         cout<<"Yes";
//     else
//         cout<<"NO";
// }

// int main()
// {
//     string str1 = "ABCDE";
//     string str2 = "AED";

//     Subsequence(str1,str2);

//     return 0 ;
// }

// Left Most Repeating character

// #include<bits/stdc++.h>
// using namespace std ;

//  int CHAR = 256;

// void leftMostRepeat( string str)
// {
//     int count[CHAR] = {0};

//     for(int i=0;i<str.length();i++)
//     {
//         count[str[i]]++;
//     }

//     for(int i=0;i<str.length();i++)
//     {
//         if(count[str[i]] > 1)
//         {
//             cout<< str[i]<<" ";
//             break;
//         }
//     }

// }

// int main()
// {

//     string str = "geeksforgeeks";

//     leftMostRepeat(str);

//     return 0 ;

// }

// Left Most Non-Repeating character

// #include<bits/stdc++.h>
// using namespace std ;

//  int CHAR = 256;

// void leftMostRepeat( string str)
// {
//     int count[CHAR] = {0};

//     for(int i=0;i<str.length();i++)
//     {
//         count[str[i]]++;
//     }

//     for(int i=0;i<str.length();i++)
//     {
//         if(count[str[i]] == 1)
//         {
//             cout<< str[i]<<" ";
//             break;
//         }
//     }

// }

// int main()
// {

//     string str = "geeksforgeeks";

//     leftMostRepeat(str);

//     return 0 ;

// }

// Reverse Word in a string
// i/p - > "welcome to Gfg"
// o/p -> "Gfg to welcome"

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
//         if(str[end] == ' ')
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
//     char str[] = {"welcome to Gfg"};

//     int n = strlen(str);
//     REVER(str,n);

//     return 0;

//  }

// Check Given String Is Palindrome Or Not (with out using STL library)

// #include <iostream>
// using namespace std;

// void Pali(char str[])
// {

//     int n = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//         n++;

//     // 1st method -- this method is used for only UPPER CASE or LOWER CASE

//     string str1;
//     for (int i = n - 1; i >= 0; i--)
//         str1 = str1 + str[i];

//     if (str == str1)
//         cout << "Palindrome";
//     else
//         cout << "Not Palindrome";

// 2nd method -- this method is used for only UPPER CASE or LOWER CASE

// int start = 0 ;
// int end = n-1;
// bool flag = true ;
// while(start <= end  )
// {
//     if(str[start] != str[end])
//     {
//         flag = false ;
//         break;
//     }
//     start++ ;
//     end-- ;
// }

// if(flag == false)
//     cout<<" not a Palindrome ";
// else
//     cout<<" Palindrome ";
// }

// int main()
// {
//     char str[] = {"GEEG"};
//     Pali(str);

//     return 0;
// }

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

// Given two strings s1 and s2. Modify both the strings such that all the common
// characters of s1 and s2 are to be removed and the uncommon characters of s1 and s2 are to be concatenated.
// Note: If all characters are removed print -1.

// * best method is Below

// Input:
// s1 = aacdb
// s2 = gafd
// Output: cbgf

// Input:
// s1 = abcs
// s2 = cxzca
// Output: bsxz

// this method won't be work for long string --> first test case failed in GFG

// #include <iostream>
// using namespace std;

// const int CHAR = 256;

// string RmDuplicate(string &str1, string &str2)
// {
//     int count[CHAR] = {0};

//     for (int i = 0; i < str1.size(); i++)
//         count[str1[i]]++;
//     for (int i = 0; i < str2.size(); i++)
//         count[str2[i]]++;
//     string result;
//     for (int i = 0; i < str1.size(); i++)
//     {
//         if (count[str1[i]] == 1)
//             result = result + str1[i];
//     }
//     for (int i = 0; i < str2.size(); i++)
//     {
//         if (count[str2[i]] == 1)
//             result = result + str2[i];
//     }
//     if (result.size() != 0)
//     {
//         return result;
//     }
//     else
//         return "-1";
// }

// int main()
// {

//     string str1 = "abcs";
//     string str2 = "cxzca";

//     string res = RmDuplicate(str1, str2);

//     cout << res;
//     return 0;
// }

// #include <iostream>
// #include <unordered_set>
// // #include<bits/stdc++.h>
// using namespace std;

// string Rmduplicates(string &s1, string &s2)
// {
//     string str;

//     unordered_set<char> s;

//     for (char c : s1)
//     {
//         if (s2.find(c) == string::npos)
//             str += c;
//         else
//             s.insert(c);
//     }

//     for (char c : s2)
//     {
//         if (s.find(c) == s.end())
//             str += c;
//     }

//     if (!str.empty())
//         return str;
//     else
//         return "-1";
// }

// int main()
// {

//     string str1 = "abcs";
//     string str2 = "cxzca";

//     string res = Rmduplicates(str1, str2);

//     cout << res;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std ;

// void jitesh(string &str)
// {
//     int star =0;
//     int hash=0;
//    for(int i=0;i<str.size();i++)
//    {
//     if(str[i]=='*')
//         star++;
//     else
//         hash++;
//    }

//    cout<< star-hash ;
// }

// int main()
// {
// string str = "***###";

// jitesh(str);

// return 0;

// }

// One programming language has the following keywords that cannot be used as identifiers:
// break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var
// Write a program to find if the given word is a keyword or not
// Input – defer
// Expected Output – defer is a keyword
// Input – While
// Expected Output – while is not a keyword

// #include <iostream>
// using namespace std;
// // break, case, continue, default, defer, else, for, func, goto, if
// // map, range, return, struct, type, var

// void identifires(string &str)
// {
//     string str1[] = {"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if",
//                     "map", "range", "return", "struct", "type", "var"};
    
    
//     bool flag = false ;
//     for(int i=0;i<16 ;i++)
//     {
//         if( str == str1[i])
//             flag = true ;
//     }

//     if(flag == true )
//         cout<<"key word";
//     else
//         cout<<"identifiers";
// }

// int main()
// {
//     string str = "for";

//     identifires(str);
//     return 0;
// }


// • Input:
// processed -> input string A
// esd -> input string B
// • Output:
// proc -> Output string C


// this code will not work if our 2nd string size is Greater than 3 ;

// #include<iostream>
// using namespace std ;

// void Dict(string &str1 , string &str2)
// {
//     char A = str2[0];
//     char B = str2[1];
//     char C = str2[2];

//     int S = str1.size();
//     for(int i=0;i<S;i++)
//     {
//         if( str1[i] == A || str1[i] == B || str1[i] == C)
//             str1[i] = '\0';
//     }

//     for(int i=0;i<S;i++)
//     {
//         if(str1[i] != '\0')
//             cout<< str1[i];
//     }
// }

// int main()
// {
//     string str1 = "tiger";
//     string str2 = "itge";

//     Dict(str1, str2);

//     return 0 ;
// }

// solution -> O(n*m) // will work for All type of pattern
//  n -> size of string 1;
//  m -> size of string 2;

// #include<bits/stdc++.h>
// using namespace std ;

// void Dict(string &str1 , string &str2)
// {
//     for(int i=0;i<str2.size();i++)
//     {
//         for(int j=0;j<str1.size();j++)
//         {
//             if(str1[j] == str2[i])
//                 str1[j]='\0';
//         }
//     }

//     for(int i=0;i<str1.size();i++)
//     {
//         if(str1[i] != '\0')
//             cout<< str1[i];
//     }
// }

// int main()
// {
//     string str1="processed";
//     string str2="esd";

//     Dict(str1,str2);
// }