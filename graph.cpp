
// graph adjacency list represention  --> O(v+e)

// #include<iostream>
// #include<vector>
// using namespace std ;

// void Edge(vector<int>arr[] , int u , int v)
// {
//     arr[u].push_back(v);
//     arr[v].push_back(u);
// }

// void Print(vector<int>arr[], int v)
// {
//     for(int i=0;i<v;i++)
//     {
//         cout<< i <<") ";
//         for(int x : arr[i])
//             cout<< x<<" ";
        
//         cout<<"\n";
//     }
// }

// int main()
// {
//     int v=4;
//     vector<int> arr[v];

//     Edge(arr,0,1);
//     Edge(arr,0,2);
//     Edge(arr,1,2);
//     Edge(arr,1,3);

//     Print(arr,v);

//     return 0;
// }

// BFS --> O(v+e)
// Space com -> O(v);

// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std ;

// void edge(vector<int>arr[], int u , int v)
// {
//     arr[u].push_back(v);
//     arr[v].push_back(u);
// }

// void Print(vector<int>arr[], int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<< i<<") ";
//         for(int x : arr[i])
//             cout<< x<<" ";
//         cout<< endl;
//     }
// }

// void BFS(vector<int>arr[],int n, int s)
// {
//     bool visited[n];

//     for(int i=0;i<n;i++)
//     {
//         visited[i]=false;
//     }

//     queue<int>q ;
//     q.push(s);
//     visited[s]=true;

//     while(q.empty() == false)
//     {
//         int u= q.front();
//         q.pop();

//         cout<< u <<" ";
//         for( int x : arr[u])
//         {
//             if( visited[x] == false)
//             {
//                 visited[x]=true;
//                 q.push(x);
//             }
//         }
//     }


// }

// int main()
// {

//     int n = 4;
//     vector<int>arr[n];

//     edge(arr,0,1);
//     edge(arr,0,2);
//     edge(arr,1,3);
//     edge(arr,2,3);

//     Print(arr , n );

//     BFS(arr,n,1);

//     return 0 ;
    
// }


// DFS  -> O(v+e)
// space -> O(n) 


// #include<iostream>
// #include<vector>
// #include<iostream>

// using namespace std ;

// void edge( vector<int> arr[] , int u , int v)
// {
//     arr[u].push_back(v);
//     arr[v].push_back(u);
// }

// void Print(vector<int>arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<< i << ") ";
//         for(auto x : arr[i])
//             cout<< x <<" ";
//         cout<< endl ;
//     }
// }

// void DFSres(vector<int>arr[], int s , bool visited[])
// {
//     visited[s]=true;
//     cout<< s <<" ";
//     for(auto x : arr[s])
//     {
//         if(visited[x]== false)
//             DFSres(arr,x,visited);
//     }
// }

// void DFS(vector<int>arr[] , int n , int s)
// {
//     bool visited[n];
//     for(int i=0;i<n;i++)
//         visited[i]= false;
//     DFSres(arr,s,visited);

// }
// int main()
// {
//     int n = 7;
//     vector<int>arr[n];
//     edge(arr,0,1);
//     edge(arr,1,2);
//     edge(arr,2,3);
//     edge(arr,0,4);
//     edge(arr,4,5);
//     edge(arr,4,6);

//     Print(arr,n);

//     DFS(arr,6,0);

//     return 0 ;
// }


// shortes path in unweighted graph v-11

// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<queue>
// #include<climits>

// using namespace std ;

// void Path(vector<int>arr[], int v , int u )
// {
//     arr[v].push_back(u);
//     arr[u].push_back(v);
// }

// void Print(vector<int>arr[] , int n )
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<< i<<" )";
//         for(int x : arr[i])
//             cout<< x<<" ";
//         cout<< endl ;
//     }
// }

// void UWG(vector<int>arr[],int s,int n)
// {
//     int res[n];
//     bool visited[n] ;

//     queue<int> q;

//     for(int i=0;i<n;i++)
//     {
//         res[i] = INT_MAX;
//         visited[i] = false;
//     }
     
//      res[s]=0;
//      visited[s]=true;

//     q.push(s);

//     while(!q.empty())
//     {
//         int v = q.front();
//         q.pop();

//         for( int x : arr[v])
//         {
//             if(visited[x] == false)
//             {
//                 q.push(x);
//                 visited[x]=true;
//                 res[x] = res[v] + 1;
//             }
//         }
//     }

//     for(int i=0;i<n;i++)
//         cout<< res[i]<<" ";


// }

// int main()
// {
//     int n = 6;

//     vector<int> arr[n];
    
//     Path(arr,0,1);
//     Path(arr,0,2);
//     Path(arr,0,4);
//     Path(arr,1,3);
//     Path(arr,2,4);
//     Path(arr,2,3);
//     Path(arr,3,5);
//     Path(arr,4,5);

//     Print(arr,n);

//     UWG(arr,0,6);

//     return 0 ;


// }


// Detection of Loop in undirected graph  --> https://www.youtube.com/watch?v=BPlrALf1LDU



// detection of loops in directed graph --> https://www.youtube.com/watch?v=9twcmtQj4DU 