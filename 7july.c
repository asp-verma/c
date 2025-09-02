#include <stdio.h>
#include <string.h>


int main(){
//   string / character arrays  :   
 

// char name[]="rohan";

// printf( name);


// 1  strlen()

// char name[]="helloworld";

// int len=strlen(name);

// printf("%d" ,len);


// 2 strcpy()

// char name[]="rohan";
// char newName[20];
// strcpy(newName , name );
// printf("%s" , newName);


// 3. strcat()
char str1[20]="hello";
char str2[]="world";


strcat(str1,str2);
printf("%s", str1);



    return 0;
}