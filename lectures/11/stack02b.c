#include <stdio.h>
#include <stdlib.h>

#define MAX 3

struct node {
	char name[20];
	int age;
};

struct stack {
	struct node *n;
	int top;
};

int isEmpty(struct stack *s){
	int empty = 1;
	if (s->top >= 0){
		empty = 0;
	}
	return empty;
}

int isFull(struct stack *s){
	int full = 0;
	if (s->top == MAX-1){
		full = 1;
	}
	return full;
}

void push(struct stack *s,struct node x){
	if (!isFull(s)){
		s->n[s->top + 1] = x;
		s->top++;
	}
	else{
		printf("Stack full!\n");
	}
}

struct node pop(struct stack *s){
	struct node x;
	if (!isEmpty(s)){
		x = s->n[s->top];
		s->top--;
	}
	else{
		printf("Empty stack!\n");
	}
	return x;
}

struct stack* createStack(){
    struct stack* stack = (struct stack*)malloc(sizeof(struct stack));
    stack->top = -1;
    stack->n = (struct node*)malloc(MAX * sizeof(struct node));
    return stack;
}
int main(){
	struct stack *s = createStack();
	struct node n;
	
	while(!isFull(s)){
		printf("Δώσε όνομα και ηλικία:");
		scanf("%s %i",n.name,&n.age);
		push(s,n);
	}
	while(!isEmpty(s)){
		printf("s->top = %i \n",s->top);
		n = pop(s);
		printf("Name: %s, Age: %i \n",n.name,n.age);
	}
	return 0;
}

/* gcc stack02b.c -o stack02b */
