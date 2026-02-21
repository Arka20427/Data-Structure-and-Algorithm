#include<stdio.h>
struct Node{
	int data;
	struct Node *next;
};

struct Node *head=NULL;
void insert_end(){
	struct Node *n, *t;
	
	//new node created;
	n=(struct Node*)malloc(sizeof(struct Node));  
	
	//data storing at data in the new node 'n';
	printf("Enter The Data: ");
	scanf("%d" &n->data);    
	
	// Initially set 'next' portion of node 'n' as NULL;
	n->next=NULL;   
	
	if(head == NULL){     //check whether head is null or not;
		head = n;      //if head is null then assign the address of node n;
	}else{
		t=head;
		while(t!=NULL){
			t=t->next;    //go to the Next node of the portion of 'next' part;
		}
		t->next=n;       //n is now assigned in t->next portion;
	}
}

void insert_front(){
	struct Node *n;
	
	//new node Created;
	n=(struct Node*)malloc(sizeof(struct Node));
	
	printf("Enter the data: ");
	scanf("%d" &n->data);
	
	if(head==NULL){
		head = n;
	}else{
		n->next=head;
		head =n;
	}
}

void display(){
	struct Node *t;
	if(head==NULL){
		printf("List is Empty.");//now head is not null still check whether it become reset or not;
	}else{
		t=head;
		while(t!=NULL){       //confirming head call sign 't' is NULL;
			printf("%d" t->data);   
			t=t->next;    //assign the value of 't' in next slot; 
		}
	}
}

void main(){
	int ch;
	do{
		printf("\n1.Insert \n2.Display \n3.Exit");
		printf("Enter the Choice: ");
		scanf("%d", &ch);
		
		switch(ch){
			case 1: inseret_end();
				break;
			case 2: display();
				break;
			case 3: insert_front();
				break;
		}
	}while(1);
}
