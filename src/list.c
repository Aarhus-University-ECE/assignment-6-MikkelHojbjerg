#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

int size(node *l){

	assert(l != NULL);

	//p peger på l
	node *p = l;
	int counter = 0;

	//Mens p.next ikke indeholder NULL
	while(p->next != NULL){
		//Counter tæller op for hvergang der er et nyt element
		counter++;
		//p peher på et nyt element
		p = p->next;
	}


    return counter;
}

void printout(node *l) {
  /*Excercise 3d) Implement your changes..
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
    node *p = l->next;
    while (p!=NULL){
	//printer nuværende data
	printf("%d, ",p->data);
	p = p->next;
    }
    printf("\n");
}

int largest(node *l){
    /*Excercise 3e) Add your code below.
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/

	assert(l > 0);

	int temp = 0;

	node *p = l->next;

	//mens p ikke indeholder NULL
	while(p!=NULL){
		//Hvis nuværende data er større end temp, vil temp være lig med dataen
		if(p->data > temp){
			temp = p->data;
		}
		p = p->next;
	}

    return temp;
}

