#include<iostream>

using namespace std;

void insertionSort(int *a,int n)
{
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        j=i;
        while(a[j]>a[j+1]&&j>=0){
            swap(a[j],a[j+1]);
            j--;
        }

    }
}

int main()
{
    int arr[] = {20,3,10,4,15,2,30,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

