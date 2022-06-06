#include<iostream>
using namespace std;

void largest(int *arr,int n){


int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<e){
if(arr[mid]<arr[mid+1]){
    s=mid+1;
}
else{
    e=mid;
}
mid=s+(e-s)/2;


}

cout<<s;

}




int main(){

int arr[6]={4,60,7,4,3,1};
int n=6;
largest(arr,n);







/*USING LINEAR SEARCH
int arr[6]={4,60,7,4,3,1};
int ans=-1;
int n=6;
for(int i=0;i<n;i++){
if(arr[i]>ans)
ans=arr[i];
}
cout<<ans;*/
}