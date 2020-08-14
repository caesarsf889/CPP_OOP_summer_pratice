#include <iostream>
#include <algorithm>

using std::cout ;
using std::endl ;

void print_array(int* const array, int size){

    for(int i =0; i<size;i++){
        cout<<*(array+i) <<" " ;
    }
    cout<<endl ;
}



int main() {

    int list_a[] ={10,2,3,4,69,5} ;
    cout<<*(list_a+5) <<endl ;

    print_array(list_a,6) ;

    int* min = std::min_element(list_a,list_a+6) ;
    cout<< list_a << "   "<<min  <<endl ;

    int* max = std::max_element(list_a,list_a+6) ;
    cout<< list_a << "   "<<max  <<endl ;

    cout<<" the min value is : " << *min << "  at index: "<< (min-list_a) <<endl ;
    cout<< "the max value is : " << *max << "  at index : " <<(max-list_a) <<endl ;

    std::random_shuffle(list_a,list_a+6) ;

    print_array(list_a,6) ;

    std::sort(list_a,list_a+6) ;
    print_array(list_a,6) ;


    int key = 4 ;
    int* p  = std::find(list_a,list_a+6,key) ;
    if(p != list_a +6)
        cout<< "the value: " <<*p <<" is found at position :" <<(p-list_a) <<endl ;
    else
        cout<<"the index not found " << p  <<endl ;



    system("pause") ;
    return 0;
}











