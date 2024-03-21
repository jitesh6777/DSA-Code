
// Tree traversal -> Inorder , Preorder and Postorder

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node *left ;
//     node *right;
//     node( int item )
//     {
//         key = item ;
//         left = NULL;
//         right = NULL ;
//     }
// };

// void inorder( node *root)
// {
//     if(root != NULL)
//     {
//         inorder(root->left);
//         cout<< root->key<<" ";
//         inorder(root->right);
//     }
// }

// void preorder(node *root)
// {
//     if(root != NULL)
//     {
//         cout<< root->key <<" ";
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// void postorder( node *root)
// {
//     if( root != NULL)
//     {
//         postorder(root->left);
//         postorder(root->right);
//         cout<< root->key <<" ";
//     }
// }

// int main()
// {
//     node *root = new node(10);
//     root->left = new node(20);
//     root->left->left = new node(40);
//     root->left->right = new node(50);
//     root->left->right->left = new node(70);
//     root->left->right->right = new node(80);

//     root->right = new node(30);
//     root->right->right = new node(60);

//     cout<< "Inorder -> " ;
//     inorder(root);
//     cout<< endl ;

//     cout<< "Preorder -> " ;
//     preorder(root);
//     cout<< endl ;

//     cout<< "Postorder -> " ;
//     postorder(root);

//     return 0 ;

// }

// Height Of the Binary Tree

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node *left ;
//     node *right ;

//     node(int item)
//     {
//         key = item ;
//         left = right = NULL;
//     }
// };

// int HeightBT(node *root)
// {
//     if(root == NULL)
//         return 0 ;
//     else
//         return ( max(HeightBT(root->left),HeightBT(root->right)))+1 ;
// }
// int main()
// {
//     int val ;
//     // node *root = new node(10);
//     // root->left = new node(8);

//     // root->right = new node(30);
//     // root->right->left = new node(40);
//     // root->right->right = new node(50);
//     // root->right->right->left = new node(60);
//     // root->right->right->right = new node(70);

//     //------------------ new tree --------------------------

//      node *root = new node(30);
//      root->right = new node(60);
//      root->left = new node(40);
//      root->left->left = new node(70);
//      root->left->left->left = new node(80);

//     val = HeightBT(root);
//     cout<< val ;
//     return 0;

// }

// Print the node at distance K

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node *left ;
//     node *right;

//     node(int item)
//     {
//         key = item ;
//         left = right = NULL;
//     }
// };

// void DistK(node *root , int k)
// {
//     if(root== NULL)
//         return;
//     if(k==0)
//         cout<< root->key <<" ";
//     else{
//         DistK(root->left , k-1);
//         DistK(root->right , k-1);
//     }
// }
// int main()
// {
//     int k= 1 ;
//     node *root = new node(10);
//     root->left = new node(20);
//     root->left->left = new node(40);
//     root->left->right = new node(50);

//     root->right = new node(30);
//     root->right->right = new node(70);
//     root->right->right->right = new node(80);

//     DistK(root,k);

//     return 0 ;

// }

// Level Order Traversal

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node *left ;
//     node *right;

//     node(int item)
//     {
//         key = item ;
//         left = NULL;
//         right = NULL;
//     }
// };

// void LevelTrav(node *root)
// {
//     if (root == NULL)
//         return;

//     queue<node*> Q;
//      Q.push(root);

//      while(!Q.empty())
//      {
//         node *curr = Q.front();
//         Q.pop();
//         cout<< curr->key <<" ";
//         if(curr->left != NULL)
//             Q.push(curr->left);
//         if(curr->right != NULL)
//             Q.push(curr->right);
//      }
// }

// int main()
// {

//     node *root = new node(10);
//     root->left = new node(15);
//     root->left->left = new node(30);

//     root->right = new node(20);
//     root->right->left = new node(40);
//     root->right->left->left = new node(60);
//     root->right->left->right = new node(70);

//     root->right->right = new node(50);

//     LevelTrav(root);

//     return 0 ;

// }

// Level Order traversal Line By Line

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
//         left = right = NULL;
//     }
// };

// void LineByLine(node *root)
// {
//     if (root == NULL)
//         return;
//     queue<node *> Q;

//     Q.push(root);
//     Q.push(NULL);

//     while (Q.size()> 1)
//     {
//         node *curr = Q.front();
//         Q.pop();

//         if (curr == NULL)
//         {
//             Q.push(NULL);
//             cout << "\n";
//             continue;
//         }

//         cout << curr->key << " ";

//         if (curr->left != NULL)
//             Q.push(curr->left);
//         if (curr->right != NULL)
//             Q.push(curr->right);
//     }
// }
// int main()
// {

//     node *root = new node(10);
//     root->left = new node(15);
//     root->left->left = new node(30);

//     root->right = new node(20);
//     root->right->left = new node(40);
//     root->right->left->left = new node(60);
//     root->right->left->right = new node(70);

//     root->right->right = new node(50);

//     LineByLine(root);

//     return 0 ;
// }

// Size of the tree --> Iteration Method using level order traversal

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node *left ;
//     node *right;

//     node(int item)
//     {
//         key = item ;
//         left = NULL;
//         right = NULL;
//     }
// };

// void SizeOfTree(node *root)
// {
//     if (root == NULL)
//         return;
//     int count = 0 ;
//     queue<node*> Q;
//      Q.push(root);

//      while(!Q.empty())
//      {
//         node *curr = Q.front();
//         Q.pop();
//         count++ ;
//         if(curr->left != NULL)
//             Q.push(curr->left);
//         if(curr->right != NULL)
//             Q.push(curr->right);
//      }

//      cout<< count ;
// }

// int main()
// {

//     node *root = new node(10);
//     root->left = new node(15);
//     root->left->left = new node(30);

//     root->right = new node(20);
//     root->right->left = new node(40);
//     root->right->left->left = new node(60);
//     root->right->left->right = new node(70);

//     root->right->right = new node(50);

//     SizeOfTree(root);

//     return 0 ;

// }

// Size of the tree --> recurssive method

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

//  int SIZE(node *root)
//  {
//     if(root == NULL)
//         return 0 ;
//     else
//         return(SIZE(root->left)+SIZE(root->right)+1) ;
//  }

// int main()
// {
//     int val ;

//     node *root = new node(10);

//     root->left = new node(20);
//     root->left->left = new node(40);
//     root->left->right = new node(50);

//     root->right = new node(30);
//     root->right->right = new node(70);
//     root->right->left = new node(60);
//     root->right->left->left = new node(90);

//     val = SIZE(root);

//     cout<< val ;

//     return 0 ;

//

// Maximum element in Binary Tree -> Recurssive Method

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node *left;
//     node *right ;

//     node(int item)
//     {
//         key = item;
//         left = NULL;
//         right = NULL ;
//     }
// };

// int maxi(node *root)
// {
//     if(root = NULL)
//         return INT_MIN;
//     else
//         return( max(root->key , max(maxi(root->left),maxi(root->right)))) ;
// }
// int main()
// {
//     int val ;

//     node *root = new node(10);

//     root->left = new node(20);
//     root->left->left = new node(40);
//     root->left->right = new node(50);

//     root->right = new node(30);
//     root->right->right = new node(70);
//     root->right->left = new node(60);
//     root->right->left->left = new node(90);

//     val = maxi(root);

//     cout<< val ;

//     return 0 ;

// }

// Maximum element in Binary Tree -> Iterative Method

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node *left;
//     node *right ;

//     node(int item)
//     {
//         key = item;
//         left = NULL;
//         right = NULL ;
//     }
// };

// void maxi(node *root)
// {
//     if(root==NULL)
//         return;
//     queue<node*> q;
//     q.push(root);
//     node *mx = 0 ; // Incomplete
//     while(!q.empty())
//     {
//         node* curr = q.front();
//         q.pop();

//         mx = max(mx,curr); // Incomplete

//          if(curr->left !=NULL)
//             q.push(curr->left);
//         if(curr->right !=NULL)
//             q.push(curr->right);
//     }

//     cout<< mx->key ;

// }

// int main()
// {
//     int val ;

//     node *root = new node(10);

//     root->left = new node(30);
//     root->left->left = new node(80);
//     root->left->left->right = new node(70);

//     root->right = new node(40);
//     root->right->left = new node(60);
//     root->right->right = new node(20);
//     // root->right->right->left = new node(90);

//     maxi(root);

//     return 0 ;

// }

// Print Left View of a Binary tree

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node *left;
//     node *right;

//     node(int item)
//     {
//         key = item;
//         left = NULL;
//         right = NULL;
//     }
// };

// void LeftView(node *root)
// {
//     if(root == NULL)
//         return;
//     queue<node*> q ;

//     q.push(root);

//     while(!q.empty())
//     {
//         int count = q.size();

//         for(int i=0;i<count;i++)
//         {
//             node *curr = q.front();
//             q.pop();

//             if(i%2 == 0)
//                 cout<< curr->key <<" ";

//             if(curr->left != NULL)
//                 q.push(curr->left);
//             if(curr->right != NULL)
//                 q.push(curr->right);
//         }
//     }
// }

// int main()
// {
//     node *root = new node(10);
//     root->left = new node(20);
//     root->left->left = new node(40);
//     root->left->right = new node(50);

//     root->right = new node(30);
//     root->right->left = new node(60);

//     LeftView(root);

//     return 0 ;

// }

// Children Sum Property

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

// bool ChildSum(node *root)
// {
//     if (root == NULL)
//         return true;

//     if (root->left == NULL && root->right == NULL)
//         return true;
//     int sum = 0;
//     if (root->left != NULL)
//         sum += root->left->key;
//     if (root->left != NULL)
//         sum += root->right->key;

//     return(root->key == sum &&
//            ChildSum(root->left) &&
//            ChildSum(root->right));
// }

// int main()
// {
//     bool val ;
//     node *root = new node(20);
//     root->left = new node(8);
//     root->left->left = new node(3);
//     root->left->right = new node(5);

//     root->right = new node(12);

//     val = ChildSum(root);
//     cout<< val ;

//     return 0;
// }

// Maximum Width of Binary tree

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

// int MaxWidth(node *root)
// {
//     if (root == NULL)
//         return 0;

//     queue<node *> Q;
//     Q.push(root);

//     int mx = 0;

//     while (!Q.empty())
//     {
//         int count = Q.size();

//         mx = max(mx,count);

//         for (int i = 0; i < count; i++)
//         {
//             node *curr = Q.front();
//             Q.pop();

//             if (curr->left != NULL)
//                 Q.push(curr->left);
//             if (curr->right != NULL)
//                 Q.push(curr->right);
//         }
//     }

//     return mx ;
// }

// int main()
// {
//     node *root = new node(10);

//     root->left = new node(20);
//     root->left->left = new node(40);
//     root->left->right = new node(40);
//     root->left->left->left = new node(80);

//     root->right = new node(30);
//     root->right->left = new node(50);
//     root->right->right = new node(60);

//     int val = MaxWidth(root);
//     cout<< val ;
// }

// Tree Traversal in Spiral Form

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

// void Spiral(node *root)
// {
//     if (root == NULL)
//         return;

//     queue<node *> q;
//     q.push(root);
//     stack<int> st;
//     bool reverse = false;

//     while (!q.empty())
//     {
//         int count = q.size();
//         for (int i = 0; i < count; i++)
//         {
//             node *curr = q.front();
//             q.pop();
//             if (reverse)
//             {
//                 st.push(curr->key);

//             }
//             else
//                 cout << curr->key << " ";

//             if (curr->left != NULL)
//                 q.push(curr->left);
//             if (root->right != NULL)
//                 q.push(curr->right);

//         }
//         while (!st.empty())
//         {
//             cout << st.top() << " ";
//             st.pop();
//         }

//         reverse = !reverse;
//     }
// }

// int main()
// {

//     node *root = new node(10);

//     root->left = new node(20);
//     root->left->left = new node(40);
//     root->left->right = new node(50);
//     root->left->right->left = new node(60);
//     root->left->right->right = new node(70);

//     root->right = new node(30);
//     root->right->left = new node(80);
//     // root->right->right = new node(60);

//     Spiral(root);

//     return 0 ;
// }

// Count Node In Commplete Binary Tree

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

// int countBT(node *root)
// {
//     int lh, rh = 0;

//     if(root==NULL)
//         return 0 ;

//     node *curr ;
//     curr = root;
//     while (curr != NULL)
//     {
//         lh++;
//         curr = curr->left;
//     }

//     curr = root;

//     while (curr != NULL)
//     {
//         rh++;
//         curr = curr->right;
//     }
//     if(lh == rh)
//             return pow(2,lh)-1 ;
//     else
//     {
//         return (1+countBT(root->left)+countBT(root->right));
//     }
// }

// int main()
// {

//     node *root = new node(10);
//     root->left = new node(20);
//     root->left->left = new node(40);
//     root->left->right = new node(50);
//     root->left->left->left= new node(80);
//     root->left->left->right= new node(90);

//     root->right = new node(30);
//     root->right->left = new node(60);
//     root->right->right = new node(70);

//     int val = countBT(root);
//     cout<< val ;

//     return 0 ;
// }

// Serialization of a Binary tree

// #include <bits/stdc++.h>
// using namespace std;

// const int empty = -1;

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

// void Serialization(node *root, vector<int> &arr)
// {
//     if (root == NULL)
//     {
//         arr.push_back(empty);
//         return;
//     }
//     arr.push_back(root->key);
//     Serialization(root->left, arr);
//     Serialization(root->right, arr);
// }

// int main()
// {
//     node *root = new node(10);
//     root->left = new node(20);
//     root->right = new node(30);

//     root->left->left = new node(40);
//     root->left->right = new node(50);

//     vector<int> arr;

//     Serialization(root, arr);

//     for (auto x : arr)
//         cout << x << " ";

//     return 0;
// }

// Serialization of a Binary tree











// Iterative Inorder Traversal

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

// void IterativeInorder(node *root)
// {
//     stack<node *> st;

//     node *curr = root;

//     while (curr != NULL || !st.empty())
//     {
//         while(curr !=NULL)
//         {
//             st.push(curr);
//             curr = curr->left;
//         }

//         curr = st.top();
//         st.pop();
//         cout<< curr->key <<" ";
//         curr = curr->right ;
//     }
// }

// int main()
// {

//     node *root = new node(10);
//     root->left = new node(20);
//     root->right = new node(30);
//     root->left->left = new node(40);
//     root->left->right = new node(50);

//     root->right = new node(30);
//     root->right->left = new node(60);
//     root->right->right = new node(70);

//     IterativeInorder(root);

//     return 0 ;
// }

// interative Preorder traversal

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

// void IterativePreorder(node *root)
// {
//     stack<node *> st;
//     node *curr = root;
//     st.push(curr);
//     while (!st.empty())
//     {
//         curr = st.top();
//         st.pop();
//         cout << curr->key << " ";

//         if (curr->left != NULL)
//             st.push(curr->right);
//         if (curr->right != NULL)
//             st.push(curr->left);
//     }
// }

// int main()
// {

//     node *root = new node(10);
//     root->left = new node(20);
//     root->right = new node(30);
//     root->left->left = new node(40);
//     root->left->right = new node(50);

//     root->right = new node(30);
//     root->right->left = new node(60);
//     root->right->right = new node(70);

//     IterativePreorder(root);

//     return 0;
// }