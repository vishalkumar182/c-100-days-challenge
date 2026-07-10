/*#include<stdio.h>
int main(){
    // if marks of a student in 2 subject is greater than 50 then print pass else fail
    int m1,m2;
    printf("Enter the  marks in both subject ");
    scanf("%d %d",&m1,&m2);
    if(m1>50){
        if (m2>50)
        {
            printf("pass");

        }
        else{
            printf("fail");
        }
       
    }
     else
        {
            printf("fail 2");
        }
}*/
//note avoid using nested if better use logical operator
#include<stdio.h>
int main(){
    int m1,m2;
    printf("Enter marks in both sublect :\n");
    scanf("%d %d",&m1 , &m2);
    if(m1>50 && m2>50 ){
        printf("pass\n");
    }
    else{
        printf("fail");
    }

}