/*
================= Singly Linked List String ====================
Author: Mr.Brinth

Date  :27 Aug 2020

Objective: Program to get command line argument string and store
	in a linked list and print it in reverse order 
================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Linked List Node
struct LinkedList{
	//placeholder for each charachter of a string
	char data;
	struct LinkedList *next;
};

//creating a userdefined datatype
typedef struct LinkedList *node;

//Creating head node
node head=NULL;

//List length
int LL_len=0;

//Function Prototypes
void addNode(char data);
void printLinkedList(void);

//Main function
int main(int argc,char* argv[]){
	//Check if there one argument
	if(argc == 2){
		if(strlen(argv[1])>50){
			printf("\nPlease enter name within 50 charachters");
			return 0;
		}
		//char input[50] = argv[0];
		printf("\nYou Entered: %s",argv[1]);
		int len = strlen(argv[1]);
		//Add each charachter of entered string in reverse order to
		// Linked List
		for(int i=0;i<len;i++)addNode(argv[1][i]);
		printLinkedList();
		printf("\n==================================\n");
	}
	else printf("\n Check the number of arguments in command line and try again\n");

	return 0;
}

void addNode(char data){
	//Create a new node
	node t = (node)malloc(sizeof(struct LinkedList));
	//Increment the Linked List length
	t->data = data;
	LL_len++;
	//Check if the list is empty and add data to head accordingly
	if(head==NULL){
		head=t;
		head->next=NULL;
		return;
	}
	//If there is already nodes point new node to head
	t->next = head;
	//change the head node to new node
	head = t;
}

void printLinkedList(){
	//Check if the list is empty
	if(head==NULL){
		printf("\n Linked list is empty");
	}
	else{
	node t = head;
	//print data from head to tail-1 nodes
	printf("\nOutput     : ");
	while(t->next != NULL){
		printf("%c",t->data);
		t = t->next;
	}
	printf("%c",t->data);
	}
}
