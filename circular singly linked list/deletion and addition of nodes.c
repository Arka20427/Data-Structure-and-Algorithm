#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head =NULL;  //header node is created;
void insertEnd(){
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
void insertFront(){
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
	n->next=head;
	t->next=n;
	head=n;
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
void deleteFront(){
	struct Node *t, *temp;
	if(head==NULL){
		printf("List is Empty.");
	}else{
		t=head;
		while(t->next!=head){
			t=t->next;
		}
	temp=head;
	t->next=head->next;
	head=head->next;
	free(temp);
	}
}
void deleteEnd(){
	struct Node *p, *q;
	if(head==NULL){
		printf("List is Empty.");
	}else{
		p=head;
		q=head->next;
		while(q->next!=head){
			p=q;
			q=q->next;
		}
		p->next=head;
		free(q);
	}
}

int main(){
	int ch;
	do{
		printf("\n1.Insert_END\n2.Insert_FRONT\n3.Delete_FRONT()\n4.Delete_END\n5.Display\n");
		printf("Enter the choice: ");
		scanf("%d", &ch);
		switch(ch)	{
			case 1: insertEnd();
				break;
			case 2: insertFront();
				break;
			case 3:deleteFront();
				break;
			case 4: deleteEnd();
				break;
			case 5: display();
				break;
			default: printf("This is out of your choice. To insert your data please choice 1 and for display choice 2.\n");
		}
	}while(1);
}

