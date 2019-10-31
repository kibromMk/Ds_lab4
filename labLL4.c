#include<stdio.h>
#include<stdlib.h>



struct node {
	int data;
	struct node *next;
};

struct node *new,*temp,*top;
void push();
void pop();
void display();

int main(){
	
	int choose;
	do{
		
		printf("\nEnter 1 for push\nEnter 2 for pop\nEnter 3 to see the stack (elements of linked list)\nEnter 4 for exit\n");
		scanf("%d",&choose);
		switch(choose){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				break;
			default:printf("Wrong choice\n ");	
				break;	
		}
		
	}while(choose!=4);
	getch();
}
void push(){
	
		new=(struct node *) malloc (sizeof(struct node));
		int element;
		printf("enter an element of linked list.\n");
		scanf("%d",&element);
		if(top==NULL){
			new->data=element;
			new->next=NULL;
			top=new;
		}
		else{
			new->data=element;
			new->next=top;
			top=new;
		}
		
		//display the stack
		if(top==NULL){
			printf("Empty stack\n");
		}
		else{
			printf("this is the stack of linked list implimentation.\n");
			temp=top;
			while(temp!=NULL){
				printf("%d->",temp->data);
				temp=temp->next;
			}
		}
	}
	
void pop(){
	if(top==NULL){
		printf("Overflow\n");
	}
	else{
		temp=top;
		top=top->next;
		temp->next=NULL;
		printf("\n%d is deleted.\n",temp->data);
		free(temp);
		
	}
	
	//display the stack
	if(top==NULL){
		printf("Empty stack\n");
	}
	else{
		printf("this is the stack of linked list implimentation.\n");
		temp=top;
		while(temp!=NULL){
			printf("%d->",temp->data);
			temp=temp->next;
		}
	}	
}

void display(){
		
		//display the stack
		int count=0;
		if(top==NULL){
			printf("Empty stack\n");
		}
		else{
			printf("this is the stack of linked list implimentation.\n");
			temp=top;
			while(temp!=NULL){
				printf("%d->",temp->data);
				temp=temp->next;
				count++;
			}
			printf("\nThe size of stack is %d",count);
		}
	}
