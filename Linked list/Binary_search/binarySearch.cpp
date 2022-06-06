#include<iostream>
using namespace std;

void print(int *arr,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
} 

bool binarySearch(int *arr,int n,int target){

int s=0;
int e=n-1;

while(s<=e){
int mid=s+(e-s)/2;
print(arr,s,e);




if(arr[mid]==target){
    return true;
}

 else if(arr[mid]>target){
    e=mid-1;
}
else{
    s=mid+1;
}

mid=s+(e-s)/2;

}



return false;



}







int main(){
  int arr[5]={3,5,7,9,256};
  int n=5;
  cout<<"Enter target  the you want to search"<<endl;
  int target;
  cin>>target;
 
 if(binarySearch(arr,n,target)){
     cout<<"target is found"<<endl;
 }
 else{
     cout<<"Target is not found"<<endl;
 }


return 0;
}












/*#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
for(int i=s;i<=e;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

}



bool binarySearch(int arr[],int s,int e,int target){

//print(arr,s,e);


//base case



if(s>e){
    return false;
}

int mid=s+(e-s)/2;
if(arr[mid]==target)
return true;

if(target<arr[mid]){
   return binarySearch( arr,s,mid-1,target);
}
else{
    return binarySearch( arr,mid+1,e,target);
}

mid=s+(e-s)/2;

}




int main(){
int arr[10]={3,4,5,8,9,65,87,99,3857,36530};
int n=10;
int target;
cout<<"ENTER THE VALUE OF THE TARGET"<<endl;
cin>>target;
int s=0;
int e=n-1;

cout<<"FOUND OR NOT  "<<binarySearch(arr,s,e,target)<<endl;
}*/