#include<stdio.h>
int *cal(int a1[],int a2[],int n){
    int static a3[3];
     for(int i=n-1;i>=0;i--){
       a3[i]=a1[i]+a2[i];
    }
    if(a3[2]>=60){
        a3[2]=a3[2]%60;
        a3[1]++;
       }
    if(a3[1]>=60){
        a3[1]=a3[1]%60;
        a3[0]++;
       }
   return a3;
}
int main(){
    int a1[3];
    int a2[3];
    printf("enter your first time in h/m/s format:\n");
    for(int i=0;i<3;i++){
        scanf("%d",&a1[i]);
    }
    printf("enter your second time in h/m/s format:\n");
    for(int i=0;i<3;i++){
        scanf("%d",&a2[i]);
    }
    int *ptr;
    ptr=cal(a1,a2,3);
    printf("your time after addition:\n");
     for(int i=0;i<3;i++){
        printf("%d",ptr[i]);
        if(i==0)
            printf("hr ");
        else if( i==1) 
            printf("min ");
        else  
            printf("sec ");
        
    }
 return 0;
}
