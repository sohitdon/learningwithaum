#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the number of elements you want to put inside this arrray"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<=n-2;i++){
        for(int j =i+1; j<=n-1; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout <<"The sorted array is "<< endl;
    for(int i =0; i<n; i++){
        cout << arr[i] <<" "<<endl;
    }
}