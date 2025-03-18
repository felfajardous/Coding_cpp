#include<iostream>

using namespace std;

int main(){
    int n_q[2]; // Array n_q[] stores values of n and q (n:= amount of arrays to create ; q:= amount of queries)
    cout << "amount of arrays to be created and amount of queries: ";
    cin >> n_q[0] >> n_q[1];

    // int **array_n = new int*[n_q[0]] creates an array of pointers.
    //It is going to be used to call and store the variable sized arrays that will contains the interest data.
    int **array_n = new int*[n_q[0]]; 
    //new int*[n_q[0]] here is defined the length of the array of arrays
    //so that means it defines how many arrays it's going to be created
    //
    int **query = new int*[n_q[1]]; //int **query = new int*[n_q[1]]

    for(int i = 0 ; i < n_q[0] ; i++){
        int k;
        cout << "Type the array size"<< i+1 <<" : ";
        cin >> k;
        cout <<"input the array elements "<< i+1 << " " <<endl;
        array_n[i] = new int [k];
        for(int j = 0 ; j < k ; j++){
            cin >> array_n[i][j];
        }
    }

    /*This commented part of the code prints all the dynamic matrix
    for(int i = 0 ; i < n_q[0] ; i++){
        for(int j = 0 ; j < *array_n[i] ; j++ ){
            cout << array_n[i][j];
        }
        cout<< endl ;
    }
    */


    for(int i = 0 ; i < n_q[1] ; i++){
        query[i] = new int [2];
        cout <<"Input query Index " << i+1 <<" : ";
        cin >> query[i][0] >> query[i][1];
        cout << query[i][0] <<  query[i][1] << endl;
    }

    for(int i = 0 ; i < n_q[1] ; i++){
        cout << array_n[query[i][0]][query[i][1]] << " ";
    }
    return 0;
}