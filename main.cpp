#include <iostream>

using std:: cout ;
using std:: cin ;
using std:: endl  ;


class TV{

public:
    int channel  ;
    int volume_l ;
    bool on ;

    TV(){
        channel = 1  ;
        volume_l = 5 ;
        on = false ;
    }

    void turn_on(){
        on = true ;
    }

    void turn_off(){
        on = false ;
    }

    void set_channel(int new_channel){
        if(on && new_channel >= 1 && new_channel <= 120)
            channel = new_channel ;
    }

    void set_volume_l(int new_volume_l){
        if(on && new_volume_l >= 1 && new_volume_l <= 7 )
            volume_l = new_volume_l ;
    }

    void channel_up(){
        channel++ ;
    }

    void channel_down(){
        channel-- ;
    }

    void volume_up(){
        volume_l++ ;
    }

    void volume_down(){
        volume_l--  ;
    }


};





int main() {

    TV sam_sung ;
    TV dell ;
    TV msi ;
    // no argument object



    sam_sung.turn_on() ;
    sam_sung.set_channel(30) ;
    sam_sung.set_volume_l(6) ;

    cout<< sam_sung.volume_l <<endl ;

    system("pause")  ;


    return 0;
}





