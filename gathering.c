#include<stdio.h>
void sum(int x, int y){
    printf("sum of %d and %d is %d\n",x,y,x+y);
}

void sub(int x, int y){
    printf("substrecktion of %d and %d is %d\n",x,y,x-y);
}

void mul(int x, int y){
    printf("multipltipliction of %d and %d is %d\n",x,y,x*y);
}

void div(int x, int y){
    printf("devition of %d and %d is %d\n",x,y,x/y);
}

void mod(int x, int y){
    printf("modeulo of %d and %d is %d\n",x,y,x%y);
}
void main(){
    int a,b,choice;
    
        printf("enter the value of a number :-  ");
        scanf("%d",&a);
        
        printf("enter the value of a number :- ");
        scanf("%d",&b);
        
        do{
            printf("press 1 for +\n");
            printf("press 2 for -\n");
            printf("press 3 for *\n");
            printf("press 4 for /\n");
            printf("press 5 for %\n");
            printf("press 0 for exit\n");
            printf("enter yoyur choice . . .");
            scanf("%d",&choice);
            
                switch(choice){
                    
                    case 1:
                        sum(a,b);
                    break;
                    
                    case 2:
                        sub(a,b);
                    break;
                    
                    case 3:
                        mul(a,b);
                    break;
                    
                    case 4:
                        div(a,b);
                    break;
                    
                    case 5:
                        mod(a,b);
                    break;
                        
                    case 0:
                        printf("you are exited . . .");
                    break;
                    
                    default:
                    	printf("\n----------------------------------------------------\n");
                        printf("\n\nPLESE ENTER THE VALID NUMBER . . . \n\n");
                    break;
                }
        }while(choice!=0);
}


