#include <iostream>
#include <string>

using namespace std;

int main() {
	// Complete the program
    string a, b, a_p, b_p ; 
    
    cin >> a ;
    cin >> b ;
    
    a_p = a ;
    a_p[0] = b[0] ;
    b_p = b ;
    b_p[0] = a[0] ;
    
    
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    cout << a_p << " " << b_p ;
    
    return 0;
}