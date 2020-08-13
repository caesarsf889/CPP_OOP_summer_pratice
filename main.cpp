#include <iostream>

using std:: endl ;
using std::cout ;



void change_a(int* &pointer_a , int* &pointer_b){

    int* reg = pointer_a ;
    pointer_a  = pointer_b ;
    pointer_b = reg ;
}

void change_b(int* pointer_a, int* pointer_b){

    int reg  = *(pointer_a)  ;
    *(pointer_a) = *(pointer_b) ;
    *(pointer_b) = reg  ;


}




void print_array(const int* array , int size){

    for(int i =0;i<size; i++){
        cout<< *(array+i) <<"  " ;
    }
    cout<< endl ;


}








int main() {

    int list[6] = {1,2,5,8,34,4} ;
    print_array(list, 6) ;


    system("pause") ;

    return 0;
}
