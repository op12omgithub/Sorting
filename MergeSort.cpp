#include<iostream>

using namespace std;
void merge(int *a,int beg,int mid,int end)
{
    int first,second;
    int x,y,k;
    first = mid-beg+1;
    second = end - mid;
    int arrFirst[first],arrSecond[second];
    for(int i=0;i<first;i++)
        arrFirst[i]=a[beg+i];
    for(int j=0;j<second;j++)
        arrSecond[j]=a[mid+j+1];
    x=0;
    y=0;
    k=beg;
    while(first>x && second>y){
        if(arrFirst[x] < arrSecond[y]){
            a[k]=arrFirst[x];
            k++;x++;
        }
        else
        {
            a[k]=arrSecond[y];
            k++;y++;
        }


    }
    if(x<first){
        a[k]=arrFirst[x];
        k++;x++;
    }

    if(y<second){
        a[k]=arrSecond[y];
        k++;y++;
    }

}
void mergeSort(int *a,int beg,int end)
{
    if(beg<end){
        int mid = (beg+end)/2;
        mergeSort(a,beg,mid);
        mergeSort(a,mid+1,end);
        merge(a,beg,mid,end);
    }

}

int main()
{
    int arr[]={40,3,10,20,5,2,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
