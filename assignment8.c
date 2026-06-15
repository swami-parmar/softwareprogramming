#include <stdio.h>
int main (){
    char*days[]={
        "sunday",
        "monday",
        "tuesday",
        "wednesday",
        "thursday",
        "friday",
        "saturday",
    };
    for(int i=0;i<7;i++){
    printf("%s\n",days[i]);
    }
    return 0;
}