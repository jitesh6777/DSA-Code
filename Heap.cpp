
// Heap Implementation by our Own ... not using STL

// #include<bits/stdc++.h>
// using namespace std ;

// class minHeap
// {
//     public :

//     int size;
//     int capacity;
//     int *arr;

//     minHeap(int c)
//     {
//         arr = new int[c];
//         size = 0;
//         capacity = c ;
//     }

//     int left(int i)
//     {
//         return (2*1+1);
//     }
//     int right(int i)
//     {
//         return(2*1+2);
//     }
//     int parent(int i)
//     {
//         return (i-1)/2 ;
//     }

//     void Insert(int x)
//     {

//     }
// };

// Binary Heap Insertion

#include <bits/stdc++.h>
using namespace std;

class minHeap
{
public:
    int size;
    int capacity;
    int *arr;

    minHeap(int c)
    {
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    int left(int i)
    {
        return (2 * 1 + 1);
    }
    int right(int i)
    {
        return (2 * 1 + 2);
    }
    int parent(int i)
    {
        return ((i - 1) / 2);
    }

    void Print()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }

    void Insert(int x)
    {
        if (size == capacity)
            return;
        size++;
        arr[size - 1] = x;
        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[i], arr[parent(i)]);

            i = parent(i);
        }
    }

    void minHeapify(int i )
    {
        int lt = left(i);
        int rt = right(i);
        int small = i ;

        if( lt < size && arr[lt]< arr[i])
            small = lt;
        if( rt < size && arr[rt] < arr[small])
            small = rt ;
        
        if(small != i)
        {
            swap(arr[i],arr[small]);
            minHeapify(small);
        }
    }

    int MinExtract()
    {
        if(size <= 0)
            return INT_MAX ;
        if(size == 1)
        {
            size--; 
            return arr[0];
        }

        int ext = arr[0];
        swap(arr[0],arr[size-1]);
        size--;

        
        minHeapify(0);

        return ext ;

    }
};
int main()
{
    minHeap Ins(10);

    // Insertion

    // Ins.Insert(400);
    // Ins.Insert(20);
    // Ins.Insert(15);
    // Ins.Insert(40);
    // Ins.Insert(50);
    // Ins.Insert(100);
    // Ins.Insert(25);
    // Ins.Insert(45);

    // cout<<"before insertion :"<< endl ;
    // Ins.Print();

    // cout<<endl;
    // Ins.Insert(12);
    // cout<<"After Insertion :"<< endl ;
    // Ins.Print();

    // Heapifying And ExtratMin

    Ins.Insert(20);
    Ins.Insert(25);
    Ins.Insert(30);
    Ins.Insert(35);
    Ins.Insert(40);
    Ins.Insert(80);
    Ins.Insert(32);
    Ins.Insert(100);
    Ins.Insert(70);
    Ins.Insert(60);

    cout<<" before : ";
    Ins.Print();
    cout<< endl;

    // int res = Ins.MinExtract();
    Ins.MinExtract() ;

    cout<<" after :";
    Ins.Print();


    return 0;
}