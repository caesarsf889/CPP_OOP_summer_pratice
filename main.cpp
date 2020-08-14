#include <iostream>

using std:: endl ;
using std::cout;


void print_array(int* const array, int size ){

    for(int i =0;i<size;i++){
        cout<< *(array+i) <<"  "  ;
    }
    cout<<endl ;
}


int* reverse_array(int* const array, int size){

    for(int i =0, j=size-1 ; i<j; i++,j--){
        int reg = *(array+i) ;
        *(array+i) = *(array+j) ;
        *(array+j) = reg ;
    }
    return array ;
}


int main() {

    int list_a[] = {1,2,3,4,5,6} ;

    print_array(list_a,6) ;

    int* result_array = reverse_array(list_a, 6) ;

    print_array(result_array,6) ;


    system("Pause") ;
    return 0;
}
