#include <iostream>

using std::endl ;
using std::cout;


int* reverse_array(const int* array ,int size){

    int* result_array = new int[size] ;
    for(int i=0 ,j=size-1; i<size; i++,j--){
        *(result_array+j) = *(array+i) ;
    }

    return result_array ;
}

void print_array(const int* array, int size ){

    for(int i =0;i<size; i++){

        cout<< *(array+i) <<" " ;
    }
    cout<<endl ;
}


int main() {

    int list_c[] = {1,2,3,4,5,6} ;
    print_array(list_c,6) ;
    int *result_p = reverse_array(list_c,6) ;
    print_array(result_p,6) ;

    delete [] result_p  ;






    /*
    int* p  = new int(4) ;

    cout<<" enter a size: " ;
    int size ;
    std:: cin>> size ;
    int* list_a = new int[size] ;
    */


    system("pause") ;

    return 0;
}
