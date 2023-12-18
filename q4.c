#include<stdio.h>
struct date{
        int dd;
        int mm;
        int yyyy;
    };
int main(){
    struct date d1={14,12,2000};
    struct date d2={14,12,2000};
    if(d1.dd==d2.dd){
        if(d1.mm==d2.mm){
            if(d1.yyyy==d2.yyyy)
                  printf("Equal\n");
            else
                printf("Unequal\n");
        }
        else
            printf("Unequal\n");
    }
    else
     printf("Unequal\n");
     return 0;
}
