#include <iostream>
#include <vector>

using std::endl ;
using std::cout ;
using std::vector ;


int sum_vector(const vector<vector<int> >& matrix){

    int total = 0 ;
    for(unsigned row =0; row<matrix.size() ; row++){

        for(unsigned column=0; column< matrix[row].size() ; column++){

            total+= matrix[row][column] ;
        }

    }



    return  total  ; 
}


int main() {

    vector<int> my_matrix ; //for column
    my_matrix.assign(3,0) ;

    vector<vector<int>> array_2d ;
    array_2d.assign(4,my_matrix) ;

    for(int row =0 ;  row <array_2d.size() ; row++){
        for(int column =0 ; column<my_matrix.size() ; column++ ){

            array_2d[row][column] = 9  ;

        }



    }


    //for(int i =0;i <4 ;i++)
    //    my_matrix[i] = vector<int> (3) ; //each row has three column

    /*
    my_matrix[0][0] = 1 ; my_matrix[0][1] = 2 ; my_matrix[0][2] = 3 ;
    my_matrix[1][0] = 4 ; my_matrix[1][1] = 5 ; my_matrix[1][2] = 6 ;
    my_matrix[2][0] = 7 ; my_matrix[2][1] = 8 ; my_matrix[2][2] = 9 ;
    my_matrix[3][0] = 10 ; my_matrix[3][1] = 11 ; my_matrix[3][2] = 12 ;
    */

    cout<<"sum of element: " <<sum_vector(array_2d) <<endl ;


    return 0;
}
