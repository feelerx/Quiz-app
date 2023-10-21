#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int correct, i, j, choice, sign, sign2;
char signname; 
void wronganswers (void);
void correctanswers (void);
void randoom (void);

int main (void) {
    int correctcount=0, wrongcount=0;
    while (1) {
    printf("enter the type of arithmetic problem you want. 1 for addition, 2 for subtraction, 3 for multiplication and 4 for a mixture of all: ");
    scanf("%d", &sign);
    printf("enter your difficulty level from 1 to 9 : ");
    scanf("%d", &choice);
    if (sign<1 || sign>4) {
        printf("ENTER A VALID ARITHMETIC PROBLEM TYPE ");
    }
    else {
        if (choice<1 || choice>9){
            printf("ENTER A VALID LEVEL \n");
        } 
        else {
         //   correctcount=0, wrongcount =0;
            int answer, count=0;

            randoom();
            printf("enter your answer: ");
            scanf("%d", &answer);
            count++;
            if (answer==correct) {
                correctcount++;
            }
            else {
                while (count<10 && answer!=correct) {
                    wrongcount++;
                    wronganswers();
                    printf("How much is %d %c %d\n", i, signname, j);
                    printf("enter your answer: ");
                    scanf ("%d", &answer);
                    count++;
                }
            }

            while (count<10) {
                correctanswers();
                randoom();
                printf("enter your answer: ");
                scanf("%d", &answer);
                count++;
                correctcount++;
                if (answer==correct) {
                }
                else {
                    while (count<10 && answer!=correct) {
                        wrongcount++;
                        wronganswers();
                        printf("How much is %d %c %d\n", i, signname, j);
                        printf("enter your answer: ");
                        scanf ("%d", &answer);
                        count++;
                    }
               }

                }
        }
    }
        if (correctcount<8 ) {
            printf("\nPlease ask your teacher for extra help (: \n");
            printf("\n");
        }
        else {
            printf("\nCongratulations, You are ready to go to the next level! :) \n");
            printf("\n");
        }
        printf("NEXT STUDENT PLEASE\n");
        printf("\n");
        printf("\n");
    }
   return 0; 
}

void randoom (void) {
    i = pow(10, (choice-1)) + rand () % (int)(pow(10, (choice-1)) *9 );;
    j = pow(10, (choice-1)) + rand () % (int)(pow(10, (choice-1)) *9 );;
    switch (sign) {
        case 1:
            signname='+';
            printf("How much is %d %c %d\n", i, signname, j);
            correct = i + j;
            break;
        case 2:
            signname='-';
            printf("How much is %d %c %d\n", i, signname, j);
            correct = i-j;
            break;
        case 3:
            signname='*';
            printf("How much is %d %c %d\n", i, signname, j);
            correct = i * j;
            break;
        case 4: 
            sign2 = (1 + rand() % 3);
            switch (sign2) {
                case 1:
                    signname='+';
                    printf("How much is %d %c %d\n", i, signname, j);
                    correct = i + j;
                    break;
                case 2:
                    signname='-';
                    printf("How much is %d %c %d\n", i, signname, j);
                    correct = i-j;
                    break;
                case 3:
                    signname='*';
                    printf("How much is %d %c %d\n", i, signname, j);
                    correct = i * j;   
                    break;
            break; 
            }       
    }        
}

void wronganswers (void) {
    switch ( 1 + rand() % 4) {
        case 1: 
           printf("NO, PLEASE TRY AGAIN\n");
           break;
        case 2: 
           printf("WRONG. TRY ONCE MORE\n");
           break;
       case 3: 
           printf("DON'T GIVE UP\n");
           break;
       case 4: 
           printf("NO. KEEP TRYING\n");   
           break;         
                }             
}

void correctanswers (void) {
    switch (1 + rand() % 4) {
        case 1: 
            printf("VERY GOOD!\n");
            break;
        case 2: 
            printf("EXCELLENT!\n");
            break;
        case 3: 
            printf("NICE WORK!\n");
            break;
        case 4: 
            printf("KEEP UP THE GOOD WORK!\n"); 
            break;           
    }
}