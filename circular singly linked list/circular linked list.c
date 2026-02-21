#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head =NULL;  //header node is created;
void insert(){
struct Node *n, *t;
	n=(struct Node*)malloc(sizeof(struct Node));   //node created;
printf("enter the data: ");     //data inputed;
scanf("%d", &n->data);
	if(head==NULL){
		head=n;       //the address of first node is addressed at header node;
		n->next=head;   
	}else{
		t=head;
		while(t->next!=head){
			t=t->next;
		}
		t->next=n;
		n->next=head;
	}
}
void display(){
	struct Node *t;
	if(head==NULL){
		printf("List is Empty.");
	}else{
		t=head;
		printf("Your inserted datas are as follow:\n");
		do{
			printf("%d ", t->data);
			t=t->next;
	}while(t!=head);
	printf("\n---THANK YOU---\n");
	}
}
int main(){
	int ch;
	do{
		printf("\n1.Insert\n2.Display\n3.Exit\n");
		printf("Enter the choice: ");
		scanf("%d", &ch);
		switch(ch)	{
			case 1: insert();
				break;
			case 2: display();
				break;
			case 3: printf("This is out of your choice. To insert your data please choice 1 and for display choice 2.\n");
				break;
		}
	}while(1);
}
