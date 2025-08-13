#include<iostream>
using namespace std;

int printArray(int arr[] ,  int size){

    cout<<" printing the array : "<< endl;

    for( int i=0 ; i<size ; i++){

        cout << arr[i] <<"  " ;
    }
    cout << " Printing array done";
}

int main(){

    int third[13]={2,3};
    printArray(third , 15);

}