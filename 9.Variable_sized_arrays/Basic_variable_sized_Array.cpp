#include<iostream>

using namespace std;

int main(){
     int n;
     int *array;
     cout <<"Type size of the array: ";
     cin >> n;
     array = new int [n];

    cout << "Input the elements array: ";

     for(int i = 0 ; i < n ; i++){
        cin >> array[i];
     }

     for(int i = 0 ; i < n ; i++){
        cout << array[i] <<" "; 
     }


    return 0;
}