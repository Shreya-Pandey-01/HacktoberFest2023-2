#include <iostream>
using namespace std;
void sort(int n,int a[])
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int binarysearch(int a[],int n,int key)
{
    int low=0;
    int high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            high=mid-1;
        else
            low=mid+1;    
    }
    return -1;
}
int main(void)
{
    int n;
    cout<<"Enter the no. of elements:";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements one by one:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"Enter the element to be searched:";
    cin>>key;
    sort(n,a);
    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
    cout<<endl;
    int index=binarysearch(a,n,key);
    if(index==-1)
        cout<<key<<" cannot be found in the list";
    else
        cout<<key<<" is found at "<<index;;
    return 0;
}
