#include <stdio.h> 
int find_ele(int arr[] ,int  arr_size ,int x)
{
    int i;
    for(i=0;i<=arr_size;i++)
    {
        if(arr[i]==x)
            return i;

    }   
    return -1;
}
int main() 
{
    int arr[]={1,2,3,4,5};
    int x=2;
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    int position = find_ele(arr , arr_size , x);

    if(position==-1)
    printf("element not found");
    else 
    printf("Element Found at %d",position+1);

    return 0;
}

// #include <stdio.h> 

// int find_ele(int arr[], int arr_size, int x) {
//     int i;
//     for(i=0; i<=arr_size; i++) {
//         if(arr[i]==x)
//             return i;
//     }   
//     return -1;
// }

// int main() {
//     int arr[]={1,2,3,4,5};
//     int x=20;
//     int arr_size=sizeof(arr)/sizeof(arr[0]);

//     int position = find_ele(arr, arr_size, x);

//     if(position==-1)
//     printf("element not found");
//     else 
//     printf("Element Found at %d",position+1);

//     return 0;
// }