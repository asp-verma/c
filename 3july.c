#include<stdio.h>



// if we have a large scal of code loopps and condiutions 
//  

//  traditional function : 


// void firstfunction(){
//     printf("this is our function ");
// }


//  with argument 

//  void fnuctionName(char name[]){
//     printf(" hello ,%s", name);
//  }


// with return value : 


// int getNumber(){

//     return 10 ;
// }


// with arguments / return value 

int sumNumber( int a , int b){

 return a+b ;

}

int main(){

//  firstfunction();
// fnuctionName("raghav");
//  int num=getNumber();

//  printf("%d" , num);


 int sum=sumNumber(23,3);
 printf("%d" , sum );

    return 0 ;
}