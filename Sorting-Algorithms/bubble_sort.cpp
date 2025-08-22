/****************************************************
 * Author      : Navneet Kumar
 * Created On  : 22-Aug-2025
 * Description : Implementation of bubble Sort
 ****************************************************/

#include <bits/stdc++.h>   // includes all standard headers
using namespace std;

    // ---------- Helper Functions ----------
     // e.g., print array, input handling, utility functions
      void printArray(int arr[] , int n) {
        for(int i=0; i<n ;i++){
            cout<<arr[i]<<" ";
       
      }  cout<<"\n";   
    }                                               

 // ---------- Core Algorithm Function ----------
// e.g., bubbleSort(), mergeSort(), binarySearch(), etc.
       void bubbleSort( int arr[] , int n){
        
        for(int i=0; i<n-1; i++){
       bool swapped =false;
       for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
            swapped = true;
        }
       }
       if(!swapped) break; // optimization
        }
       }
 // ---------- Main Function ----------
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   // Input section
  
      int arr[5] ={5,2,8,1,3};
        int n=5;
      cout<<"Original Array:";                                  

        printArray(arr ,n);

         // Call algorithm function

        bubbleSort(arr,n);                             

        // Output section
           cout<<"Sorted Array:";
           printArray(arr,n);                                  

    return 0;
}
