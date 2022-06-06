#include<iostream>
using namespace std;
int main(){
    //SAME MEMORY BUT DIFFERNT NAME ,THIS IS CALLED REFERNCE VARIABLE
    int i=5;
    //CREATING A REFERNCE VARIABLE
    int &j=i;

    cout<<"value of i "<<++i<<endl;//6
    cout<<"value of j "<<j<<endl;//6
    //HERE i AND j ARE ON SAME MEMORY LOCATION


    //LEARN THIS TOPIC FROM NOTES SO YOU CAN GET THE BETTER UNDERSTANDING
     int n;
     cout<<"enter the size of an array"<<endl;
     cin>>n;
    //LETS TRY TO CREATE AN ARRAY ON RUNTIME
     int *arr=new int[n];//this will create in heap.
     //point to remember:- in heap we have to manully free the memory 
     //HERE WE CREATE VARIABLE SIZE ARRAY
     for(int i=0;i<n;i++){
         cout<<"give input of element of array"<<endl;
         cin>>arr[i];
     }
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
cout<<"-------------DYNAMIC MEMORY IN 2D----------";

int m;
cout<<"write the size of 2d array you want to creat"<<endl;
cin>>m;

int** arr = new int*[m];

for(int i=0;i<m;i++){
    arr[i]=new int [m];
// creation done
}

//taking input
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}


//giving output
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j];
    }
}
























}