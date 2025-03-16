#include <iostream>

using namespace std;

int main(){

    int n; //la variable n define la cantidad de enteros que el usuario desea en el arreglo
    int array[1000];
    cin >> n ;
    
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    for(int i = n - 1; i >= 0; i--){
        cout << array[i] << " ";
    } 


    return 0;
}