#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char name[20];
      int roll_no;
    int phy;
     int chem;
    int math;
     int his;
     int geo;
    float avg_marks;
     int total_marks;
};
int main(){
  struct student s[4];
  FILE *ptr;
  ptr=fopen("sample1.txt","r");
  if(ptr==NULL){
    printf("not found");
  }
  for(int i=0;i<4;i++){
    char ch;
   ch=fgetc(ptr);
   int j=0;
   while(ch!=','){
    s[i].name[j]=ch;
    ch=fgetc(ptr);
    j++;
   }
 
  fscanf(ptr,"%d",&s[i].roll_no);
  fscanf(ptr,"%d",&s[i].phy);
  fscanf(ptr,"%d",&s[i].chem);
  fscanf(ptr,"%d",&s[i].math);
  fscanf(ptr,"%d",&s[i].his);
  fscanf(ptr,"%d",&s[i].geo);
  s[i].avg_marks=(float)(s[i].phy+s[i].chem+s[i].math+s[i].his+s[i].geo)/5;
  s[i].total_marks=(s[i].phy+s[i].chem+s[i].math+s[i].his+s[i].geo);
  }
  for(int i=3;i>=1;i--){
    for(int j=0;j<=i-1;j++){
          if(s[j].total_marks<s[j+1].total_marks){
              struct student temp= s[j];
              s[j]=s[j+1];
              s[j+1]= temp;
          }
    }
  }
for(int i=0;i<4;i++){
  printf("student info are:\n");
  printf("%s\n",s[i].name);
  printf("%d\n",s[i].roll_no);
  printf("%d\n",s[i].phy);
  printf("%d\n",s[i].chem);
  printf("%d\n",s[i].math);
  printf("%d\n",s[i].his);
  printf("%d\n",s[i].geo);
  printf("%.2f\n",s[i].avg_marks);
  printf("%d\n",s[i].total_marks);
}
  return 0;
}
