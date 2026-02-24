#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the doubly linked list
struct node {
    struct node *prev;//pointer to previous node
    int data;   //actual value stored
    struct node *next;//pointer to next node
};

struct node *head = NULL;
//defining fns
void iab(int); // Insert At Beginning
void iae(int); // Insert At End
void dab();     //Delete At Beginning
void dae();      //Delete At end
void tf();       //Traverse forward
void tb();       //Traverse Backward

int main() {
    int option, value;
    while(1) {
        printf("\t---choose an option---\n\t1.insert at begin\n\t2.insert at end\n\t3.delete at begin\n\t4.delete at end\n\t5.display forward\n\t6.display backward\n\t7.exit\n: ");
        scanf("%d", &option);
        
               switch(option) {
	case 1:
                	         printf("Enter value to insert : ");
                	         scanf("%d", &value);
                	         iab(value);
                	         break;
            case 2:
                	printf("Enter value to insert : ");
                	scanf("%d", &value);
                	iae(value);
                	break;
            case 3:
                	dab();
                	break;
            case 4:
                	dae();
                	break;
            case 5:
                	tf();
               	 break;
            case 6:
                	tb();
                	break;
            case 7:
                	return 0;
                	break;
            default:
                	printf("invalid choice \n");
        }
    }
}

//insert new node at begin
void iab(int v) {
    struct node *newn = (struct node*)malloc(sizeof(struct node));
    newn->data = v;
    newn->next = NULL;
    newn->prev = NULL;
    
    if(head == NULL) {//if head is null,new node bcoms head
        head = newn;
    } else {
        newn->next = head;//link new node's next to current head
        head->prev = newn;//new nodes prev to null
        head = newn;//make new node as head
    }
    printf("%d is inserted at begining \n", newn->data);
}

//insert at end
void iae(int v) {
    struct node *newn = (struct node*)malloc(sizeof(struct node));
    newn->data = v;
    newn->next = NULL;
    
    //if list is empty
    if(head == NULL) {
        head = newn;
        newn->prev = NULL;
    } else {//move to last node
        struct node *temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newn;//link last node to new node
        newn->prev = temp;//link new node back to old  last node
    }
    printf("%d is inserted at end \n", newn->data);
}

//delete at end
void dae() {
    struct node *temp = head;
    if(head == NULL) {//list is empty
        printf("can't delete element, linkedlist is empty\n");
    } else {
        if(temp->next == NULL) {//only one element
            head = NULL;
        } else {
            while(temp->next->next != NULL) {//move to second last node 
                temp = temp->next;
            }
            temp->next = NULL;//disconnect last node
        }
        printf("one element is deleted from end\n ");
    }
}

//delete from begin
void dab() {
    struct node *temp = head;
    if(head == NULL) {//no elements in list
        printf("can't delete element, linkedlist is empty\n");
    } else {
        if(head->next == NULL) {//only one element
            head = NULL;
        } else {
            head = temp->next;//move head to second node
            head->prev = NULL;//remove link to old head
            printf("one element is deleted from begin \n");
        }
    }
}

//display forward
void tf() {
    struct node *temp = head;
    if(head == NULL) {
        printf("can't display elements, linkedlist is empty \n");
    } else {
        printf("display elements forward : \n ");
        while(temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

//display backward
void tb() {
    struct node *temp = head;
    struct node *t;
    if(head == NULL) {
        printf("can't display elements, linkedlist is empty \n");
    } else {
        while(temp->next != NULL) {//move temp to very last node
            temp = temp->next;
        }
        t = temp;//then ,move backward using prev pointers
        printf("display elements backward\n");
        while(t != NULL) {
            printf("%d\n", t->data);
            t = t->prev;
        }
    }
}
