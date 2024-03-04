#include<iostream>
using namespace std;

solution {class
  public:
    void swapElements(int arr[], int n){
        
        int i=0;
        while(i<n-2)
        {
            int temp=arr[i];
            arr[i]=arr[i+2];
            arr[i+2]=temp;
            i++;
        }
        
    }
};