#include <stdio.h>



struct Date{
    int day, month, year;
};

struct Student{
 char name[20];
 struct Date dob;
};

int main(){
 
    // FILE MODES AND APPEND:- 

//     FILE *fp=fopen("log.txt" , "a");  // a is for append mode
//  if(fp==NULL){
//      printf("File error!\n");
//  }

//  fprintf(fp,"hello we are now working in c language ! \n");
//  fclose(fp);

// STRUCTURE 


struct Student s= {"Raghav" ,{20,10,2005}};

printf("name: %s  DOB : %d/%d/%d\n" , 
 s.name , s.dob.day , s.dob.month , s.dob.year
);


    return 0;
}