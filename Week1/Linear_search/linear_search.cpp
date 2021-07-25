#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int m,key;
    cout<<"No. of test cases = "<<n<<endl;
    for(int i=0;i<n;i++){
        int temp=0;
        cin>>m;
        int arr[m];
        for(int j=0;j<m;j++)
        cin>>arr[j];
        cin>>key;
        for(k=0;k<m;k++){
            if(arr[k]==key){
                temp=1;
                break;
            }
        }
        if(temp==1){
            cout<<"Present "<< k<<endl;
        }
        else{
            cout<<"Not present "<<k<<endl;
        }
    }

}