#include<iostream>
using namespace std;
 bool linearSearch(int arr[],int n,int key){

for(int i=0;i<n;i++){
if(arr[i]==key){
 return 1;
}
}
 return 0;
 }

int main(){
int arr[7]={34,6,4,8,5,9,8};
int n=7;
int key;
cout<<"enter key"<<endl;
cin>>key;
int ans=linearSearch(arr,n,key);


if(ans){
    cout<<"key is present"<<endl;
}
else
cout<<"key is not present";


}