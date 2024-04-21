
// Search In Binary Search Tree
// recursive Method O(h)

// #include<bits/stdc++.h>
// using namespace std ;
// struct node
// {
//     int key ;
//     node *left;
//     node *right;

//     node(int item)
//     {
//         key = item ;
//         left = NULL;
//         right = NULL;
//     }
// };

// bool search(node *root , int x)
// {
//     if(root==NULL)
//         return false;
//     else if(root->key == x)
//         return true;
//     else if(root->key > x)
//         return search(root->left , x);
//     else if(root->key < x)
//         return search(root->right,x);
// }
// int main()
// {

//     node *root = new node(50);
//     root->left = new node(30);
//     root->left->left = new node(10);
//     root->left->right = new node(40);

//     root->right=new node(70);
//     root->right->left = new node(60);
//     root->right->right = new node(80);

//     bool x =search(root,80);
//     cout<< x ;

//     return 0 ;
// }

// Search In Binary Search Tree
// Iterative Method O(h)

// #include<bits/stdc++.h>
// using namespace std ;
// struct node
// {
//     int key ;
//     node *left;
//     node *right;

//     node(int item)
//     {
//         key = item ;
//         left = NULL;
//         right = NULL;
//     }
// };

// bool search(node *root , int x)
// {
//    while(root!=NULL)
//    {
//     if(root==NULL)
//         return false;
//     else if(root->key== x)
//         return true;
//     else if (root->key > x)
//         root = root->left;
//     else
//         root = root->right;
//    }
// }
// int main()
// {

//     node *root = new node(50);
//     root->left = new node(30);
//     root->left->left = new node(10);
//     root->left->right = new node(40);

//     root->right=new node(70);
//     root->right->left = new node(60);
//     root->right->right = new node(80);

//     bool x =search(root,20);
//     cout<< x ;

//     return 0 ;
// }

// Insertion in BST

// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int key;
//     node *left;
//     node *right;
//     node(int item)
//     {
//         key = item;
//         left = NULL;
//         right = NULL;
//     }
// };

// node *Insertion(node *root, int x)
// {
//     if (root == NULL)
//         return new node(x);
//     if (root->key > x)
//         root->left = Insertion(root->left, x);
//     else if (root->key < x)
//         root->right = Insertion(root->right, x);

//     return root;
// }

// void Print(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         int count = q.size();

//         for (int i = 0; i < count; i++)
//         {
//             node *temp = q.front();
//             q.pop();
//             cout << temp->key << " ";

//             if (temp->left != NULL)
//                 q.push(temp->left);
//             if (temp->right != NULL)
//                 q.push(temp->right);
//         }
//     }
// }

// int main()
// {
//     node *root = new node(10);
//     root->left = new node(5);
//     // root->left->left= new node(3);

//     root->right = new node(15);
//     root->right->left = new node(12);
//     root->right->right = new node(18);

//     cout<<"Before Insertion :"<<endl ;
//     Print(root);
//     Insertion(root,2);
//     cout<< endl ;
//     cout<<"After Insertion :"<<endl ;
//     Print(root);

//     return 0 ;
// }

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int key;
//     node *left;
//     node *right;

//     node(int item)
//     {
//         key = item;
//         left = NULL;
//         right = NULL;
//     }
// };

// node *succ(node *curr)
// {
//     curr = curr->right;
//     while (curr != NULL && curr->left != NULL)
//         curr = curr->left;

//     return curr;
// }

// node *deletion(node *root, int x)
// {
//     if (root == NULL)
//         return root;
//     else if (root->key > x)
//         root->left = deletion(root->left, x);
//     else if (root->key < x)
//         root->right = deletion(root->right, x);
//     else
//     {
//         if (root->left == NULL)
//         {
//             node *temp = root->right;
//             delete root;
//             return temp;
//         }
//         else if (root->right == NULL)
//         {
//             node *temp = root->left;
//             delete root;
//             return temp;
//         }
//         else
//         {
//             node *curr = succ(root);
//             root->key = curr->key;
//             root->right = deletion(root->right, curr->key);
//         }
//     }
//     return root;
// }
// void Print(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         int count = q.size();

//         for (int i = 0; i < count; i++)
//         {
//             node *temp = q.front();
//             q.pop();
//             cout << temp->key << " ";

//             if (temp->left != NULL)
//                 q.push(temp->left);
//             if (temp->right != NULL)
//                 q.push(temp->right);
//         }
//     }
// }

// int main()
// {

//     node *root = new node(10);
//     root->left = new node(5);
//     root->left->left = new node(3);

//     root->right = new node(15);
//     root->right->left = new node(12);
//     root->right->right = new node(18);

//     cout << "Before Insertion :" << endl;
//     Print(root);
//     node *temp = deletion(root, 10);
//     cout << endl;
//     cout << "After Insertion :" << endl;
//     Print(temp);

//     return 0;
// }

// Floor in BST

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node* left;
//     node* right;

//     node(int item)
//     {
//         key = item ;
//         left = NULL ;
//         right = NULL;
//     }
// };

// node *floor(node *root , int x)
// {
//     node *res = NULL;
//     while(root!=NULL)
//     {
//         if( root->key == x)
//             return root;
//         else if(root->key > x)
//             root = root->left;
//         else
//         {
//             res = root ;
//             root=root->right ;
//         }

//     }
//     return res ;
// }

// int main()
// {

//     node *root = new node(10);
//     root->left = new node(5);
//     root->left->left = new node(3);

//     root->right = new node(15);
//     root->right->left = new node(12);
//     root->right->right = new node(18);

//     node *temp = floor(root,1);
//     cout<< temp->key ;

//     return 0 ;

// }

// Ceilling in  BST

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node* left;
//     node* right;

//     node(int item)
//     {
//         key = item ;
//         left = NULL ;
//         right = NULL;
//     }
// };

// node *ceilling(node *root , int x)
// {
//     node *res = NULL;
//     while(root!=NULL)
//     {
//         if( root->key == x)
//             return root;
//         else if(root->key < x)
//             root = root->right;
//         else
//         {
//             res = root ;
//             root=root->left ;
//         }

//     }
//     return res ;
// }

// int main()
// {

//     node *root = new node(10);
//     root->left = new node(5);
//     root->left->left = new node(3);

//     root->right = new node(15);
//     root->right->left = new node(12);
//     root->right->right = new node(18);

//     node *temp = ceilling(root,40);
//     cout<< temp->key ;

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

// Check Given Tree Is BST or Not

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key;
//     node *left;
//     node *right;

//     node(int item)
//     {
//         key = item;
//         left= NULL;
//         right= NULL;
//     }
// };

// void check(node *root)
// {
//     stack<node*> st;
//     vector<int>vt;

//     node *curr = root;

//     while(curr !=NULL || !st.empty())
//     {
//         while(curr !=NULL)
//         {
//             st.push(curr);
//             curr = curr->left;
//         }
//         curr = st.top();
//         st.pop();

//         vt.push_back(curr->key);
//         curr= curr->right;
//     }
//     bool flag = true;
//     for(int i=1;i<vt.size();i++)
//     {
//         if(vt[i]<vt[i-1])
//         {
//             flag = false ;
//             break;
//         }
//     }

//     if(flag == true)
//         cout<<"given tree is BST ";
//     else
//         cout<<"given tree is not BST ";

// }

// int main()
// {

// node *root = new node(20);
// root->left = new node(8);
// root->right= new node(30);
// root->right->right = new node(35);
// root->right->left = new node(28);

// check(root);

// return 0 ;

// }

// Fix a BST with TWO Node Swapped

// Incomplete

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int key;
//     node *left;
//     node *right;

//     node(int item)
//     {
//         key = item;
//         left = NULL;
//         right = NULL;
//     }
// };

// void check(node *root)
// {
//     stack<node *> st;
//     vector<int> vt;

//     node *curr = root;

//     while (curr != NULL || !st.empty())
//     {
//         while (curr != NULL)
//         {
//             st.push(curr);
//             curr = curr->left;
//         }
//         curr = st.top();
//         st.pop();

//         vt.push_back(curr->key);
//         curr = curr->right;
//     }
//     bool flag = true;
//     for (int i = 1; i < vt.size(); i++)
//     {
//         if (vt[i] < vt[i - 1])
//         {
//             flag = false;
//             break;
//         }
//     }

//     if (flag == true)
//         cout << "given tree is BST ";
//     else
//     {
//         cout << "before sorting :" << endl;
//         for (auto x : vt)
//             cout << x << " ";
//         cout << endl;
//         int *res;
//         int i;
//         for (i = 1; i < vt.size(); i++)
//         {
//             if (vt[i] < vt[i - 1])
//             {
//                 res = &vt[i - 1];
//                 break;
//             }
//         }
//         int mn = vt[i];
//         int *MIN = &mn;
//         for (int j = i + 1; j < vt.size(); j++)
//         {
//             mn = min(mn, vt[j]);
//             MIN = &mn;
//         }
//         int temp = *res;
//         *res = *MIN ;
//         *MIN = temp ;

//         cout << "After Sorting :" << endl;
//         for (auto x : vt)
//             cout << x << " ";
//     }
// }

// int main()
// {

//     node *root = new node(20);
//     root->left = new node(60);
//     root->left->left = new node(4);
//     root->left->right = new node(10);
//     root->right = new node(80);
//     root->right->left = new node(8);
//     root->right->right = new node(100);

//     check(root);

//     return 0;
// }

// Pair with given sum in BST

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int key;
//     node *left;
//     node *right;
//     node(int item)
//     {
//         key = item;
//         left = NULL;
//         right = NULL;
//     }
// };

// void pairSum(node *root, int sum)
// {
//     stack<node *> st;
//     vector<int> vt;
//     node *curr = root;

//     while (curr != NULL || !st.empty())
//     {
//         while (curr != NULL)
//         {
//             st.push(curr);
//             curr = curr->left;
//         }

//         curr = st.top();
//         st.pop();
//         vt.push_back(curr->key);
//         curr = curr->right;
//     }

//     int starting = 0;
//     int end = vt.size() - 1;
//     while (starting < end)
//     {
//         if (vt[starting] + vt[end] == sum)
//         {
//             cout << "yes " << endl;
//             cout<<"There is a pair "<<"("<< vt[starting]<<","<<vt[end]<<")" ;
//             break;
//         }
//         else if (vt[starting] + vt[end] > sum)
//             end--;
//         else if (vt[starting] + vt[end] < sum)
//             starting++;
//     }
// }

// int main()
// {

//     node *root = new node(20);
//     root->left = new node(8);
//     root->left->left = new node(4);
//     root->left->right = new node(10);
//     root->right = new node(80);
//     root->right->left = new node(60);
//     root->right->right = new node(100);

//     pairSum(root,108);
// }

// Vertical Sum in Binary tree

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {

//     int key;
//     node *left;
//     node *right;
//     node(int item)
//     {
//         key = item;
//         left = NULL;
//         right = NULL;
//     }
// };

// void verticalSum(node *root, int hd, map<int, int> &mp)
// {
//     if (root == NULL)
//         return;
//     verticalSum(root->left, hd - 1, mp);
//     mp[hd] = mp[hd] + root->key;
//     verticalSum(root->right, hd + 1, mp);
// }

// void firstFun(node *root)
// {
//     map<int, int> mp;

//     verticalSum(root,0,mp);

//     for(auto x : mp)
//         cout<< x.second << " ";
// }

// int main()
// {

//     // node * root = new node(10);
//     // root->left = new node(15);
//     // root->left->left = new node(35);
//     // root->left->left->left = new node(40);

//     // root->left->right = new node(20);
//     // root->left->right->right = new node(75);
//     // root->left->right->right->right = new node(80);

//     // root->right = new node(25);
//     // output -> 40 35 15 30 100 80 


//     node *root = new node(10);
//     root->left = new node(20);
//     root->left->left = new node(30);

//     root->left->right = new node(40);
//     root->right = new node(50);

//     // output -> 30 20 50 50 

//     firstFun(root);

//     return 0 ;
// }


#include<iostream>
using namespace std ;

int main()
{
 cout<<"Jitesh Verma" ;
}