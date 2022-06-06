#include<iostream>
using namespace std;


int lastOcc(int *arr,int n,int key){
int s=0;
int e=n-1;
int ans=-1;

int mid=s+(e-s)/2;
while(s<=e){
if(arr[mid]==key){
    s=mid+1;
    ans=mid;
}

else if(arr[mid]>key){
    e=mid-1;
}

else{
    s=mid+1;
}
mid=s+(e-s)/2;
} 
return ans;
}



int firstOcc(int *arr,int n,int key){
int s=0;
int e=n-1;
int ans=-1;

int mid=s+(e-s)/2;
while(s<=e){
if(arr[mid]==key){
    e=mid-1;
    ans=mid;
}

else if(arr[mid]>key){
    e=mid-1;
}

else{
    s=mid+1;
}
mid=s+(e-s)/2;
} 
return ans;
}

int main(){
 int arr[11]={3,4,5,6,7,7,7,7,7,7,8};
 int n=11;
 int key;
 cout<<"ENTER KEY"<<endl;
 
 cin>>key;
cout<<"First index of "<<key<<" is "<<firstOcc(arr,n,key)<<endl;

cout<<"Last index of "<<key<<" is "<<lastOcc(arr,n,key)<<endl;


cout<<"Total no of occurence of key is "<<lastOcc(arr,n,key)-firstOcc(arr,n,key)+1;








}