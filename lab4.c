#include<stdio.h>
#include<stdlib.h>
//#include<process.h>
void push();
void pop();
void display();
int stack[10],top=-1,i,data;
 
void main(){
   int ch;
    do{
        printf("Enter 1 for push\nEnter 2 for pop\nEnter 3 to display stack content\nEnter 4 for exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            	push();
                break;
            case 2:
            	pop();
                break;
            case 3:
	        	display();
	            break;
            case 4:exit(1);
                    break;
            default:printf("Wrong choice\n");
                    break;
        }
    }while(ch!=4);
    getch();
}

void push(){
	if(top==10){
        printf("Overflow\n");
        exit(1);
    }
    else{
        top+=1;
        printf("enter element\n");
        scanf("%d",&data);
        stack[top]=data;    
    }
}
void pop(){
	if(top==-1){
        printf("Underflow\n");
        exit(1);
    }
    else{
    	printf("%d is deleted from stack.\n",stack[top]);
        top=top-1;     
    }
}
void display(){
	printf("This is the content of stack..\n");
    for(i=0;i<=top;i++){
    	printf("%d,",stack[i]);			
	}
    printf("\nThe size of stack is %d\n",i);
}
