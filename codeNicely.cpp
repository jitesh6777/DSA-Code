

// #include <bits/stdc++.h>
// using namespace std;

// void Jitesh()
// {
// }

// int main()
// {
//     for (int i=1;i<=100;i++)
//     {
//         int j=0;
//         if((i % 3 ==0  && i %5 ==0 ) == 1)
//         {
//             cout<<("CocaCola") << endl;
//             j=1;
//         }
//         else if(i % 3 == 0 && j == 0)
//             cout<<"Coca" <<endl ;
//         else if( i%5  == 0 && j==0)
//             cout<<"Cola" << endl;
//         else
//             cout<< i << endl  ;
//     }

//     Jitesh();

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int arr[5] = {93,12,32,65,34};

//     int lar = arr[0];
//     for(int i=1;i<5;i++)
//     {
//         if( arr[i] >= lar)
//         {
//             lar = arr[i];
//         }
//     }

//     cout<< lar << " " ;

//     int snd = 0;

//     for(int j=0 ; j<5 ;j++)
//     {

//         if( lar == arr[j])
//         {
//             continue;
//         }
//         else if( snd < arr[j] && lar != arr[j] )
//             snd = arr[j];

//     }

//     cout<< snd <<" " ;


// }




 #include<bits/stdc++.h>
using namespace std ;
void PRINT(char str[])
 {
    cout<< str ;
 }
void reverse(char str[] ,int start , int end)
{
    while(end>=start)
    {
        swap(str[end],str[start]);
        end-- ;
        start ++ ;
    }
}

void ReverseWo(char str[] , int n)
{
    int start = 0 ;
    int end ;
    for( end=0;end<n;end++)
    {
        if(str[end] == ' ')
        {
            reverse(str,start,end-1);
            start = end+1 ;
        }
    }
    reverse(str,start,end-1);
    reverse(str,0,n-1);
    PRINT(str);
}

bool iSPal(string &str)
{
    int right = str.length() - 1;
    int left = 0;
    while (right > left)
    {
        if (str[left] != str[right])
            return false;

        right--;
        left++;
    }
    return true;
}



int main()
{
    int n , m ;
    char str[] = "A man, a plan, a canal: Panama";
    n = strlen(str);

    for(int i=0;i<n;i++){
        if( str[i] == ',' || str[i] ==' ' || str[i] == ':')
            continue;
        else(str[i]>='A' && str[i]<='Z')
            str[i] = (str[i] - 32) ;
    }

    ReverseWo(str,n);
    return 0 ;
}





