#include <iostream>
#include <iomanip>
using std:: cout ;
using std:: endl ;
using std:: cin ;




class Singer{


public:

    Singer(){
        year = 1  ;
    }

    Singer(int new_year){
        year = new_year ;
    }

    int get_year(){
        return year ;
    }

    void set_year(int new_year){
        year = new_year ;
    }

private:

    int year ;


};

void  print_sm_artist(Singer artist[] , const int member) ;
double cal_sm(Singer artist[], const int member) ;

int main() {
    const int member = 10  ;
    Singer sm[member] ;

    for(int i =0; i<member;i++){
        sm[i].set_year(i+18) ;
    }

    print_sm_artist(sm, member ) ;

    cout<< endl <<  cal_sm(sm,member) <<endl ;  ;


    system("pause") ;
    return 0;
}


void print_sm_artist(Singer artist[], const int member){

    cout<<std:: setw(35) << std:: left <<"radius" << std:: setw(8) << "area" << endl ;

    for(int i=0; i<member;i++){
        cout<<artist[i].get_year() <<endl ;
    }

}


double cal_sm(Singer artist[], const int member){

    double total  = 0 ;
    for(int i=0;i<member;i++){

        total += artist[i].get_year() ;

    }

    return total  ;
}



