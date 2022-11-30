#include<iostream>

using namespace std;

void selectionSort(int *a, int n)
{
    int min=0;
    int loc=0;
    for(int i=0;i<n-1;i++){
        min=a[i];
        for(int j=i+1;j<n;j++){
            if(min>a[j]){
                min=a[j];
                loc=j;
                swap(a[loc],a[i]);
            }

        }

    }
}
int main()
{
    int arr[] = {20,3,10,4,15,2,30,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
