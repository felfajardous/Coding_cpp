#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str);

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

vector<int> parseInts(string str) {
    
    stringstream ss(str);
    vector<int> numbers_array;
    
    int num;
    char ch;
    
    while(ss){
        ss >> num >> ch ;
        numbers_array.push_back(num) ;
    }
    
    return numbers_array ;
}


/*
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int num ;
    char ch ;
    int aux = 0 ;

    string data ; //Input data must be string of numbers separated by colons 
    cin >> data ;

    //cout << data.size() << endl ; 
    //cout << data[0] << endl ;

    stringstream ss(data) ;
    vector<int> numbers_array ;

    

    //cout << ss.str().size() << endl ;
    

    while(ss){
        ss >> num >> ch ;
        numbers_array.push_back(num) ;
    }

    //cout << numbers_array.size() << endl;

    for(int j = 0 ; j < numbers_array.size() ; j++){
        cout << numbers_array[j] << endl;
    }


    return 0;
}
*/


/*
#include<iostream>

using namespace std;

int suma( int a, int b);


int main(){

    int a = 3;
    int b = 5;

    cout << suma(a, b);

    return 0;
}

int suma (int a ,  int b){

    int resultado = a + b ;
    return resultado ;
}
*/
