#include<iostream>
using namespace std;

int c=0;
int binarySearch(int *arr,int li,int rt,int key){
    int mid;
    for(;li<=rt;)
    {
        c++;
        mid=li+(rt-li)/2;
        if(arr[mid]==key){
            return c;
        }
        else if(arr[mid]<key)
        li=mid+1;
        else
        rt=mid-1;
    }
    return -1;
}
int main()
{
    int t,n,key;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>n;
        int arr[n];
        for(int k=0;k<n;k++)
        cin>>arr[k];
        cin>>key;
        c=0;
        int res= binarySearch(arr,0,n-1,key);
        if(res==-1)
        cout<<"Not present "<<c<<endl;
        else
        cout<<"Present "<<c<<endl;
    }
}