/****************************************************
 * Author      : Navneet Kumar
 * Created On  : 22-Aug-2025
 * Description :  Implementation of Selection Sort
 ****************************************************/

#include <bits/stdc++.h>   
using namespace std;
  void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }  
    cout<<endl;
  }
  void SelectionSort(int arr[],int n){
       
      for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1; j<n; j++){
        if(arr[j]<arr[min_idx]){
             min_idx=j;   
        } 
        } 
        swap( arr[i],arr[min_idx]);
           
        
      }
      }
  

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {5,4,8,2,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);  
    cout<<"Original Array :";
   printArray(arr,n);

  SelectionSort(arr,n);

   cout<<"Sorted Array :";
   printArray(arr,n);

    return 0;
}
