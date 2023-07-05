

#include <iostream>
using namespace std;

int main() {
    unsigned int T ;
    unsigned int a , b ;
    cin >> T ;
    
    for(int i = 0 ; i < T ; i++){
        cin >> a >> b ;
        
        
        for(int j = 0 ;j < a ; j++){
            for(int k = 0 ;k < b ; k++){
                if((k + j ) % 2 == 0 ){
                    cout << "*";
                }else{
                    cout << ".";
                }
            }
            cout << endl ;
        }
        cout << endl ;
    }
	return 0;
}