#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>

struct person {
  char name[20];
  int age;
};

struct Node {  
    struct person data;  
    struct Node* next;  
};  

struct queue {
  struct Node* front;  
  struct Node* rear;  
};
struct queue q;

void add_node(struct person p){
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));  
  strcpy(new_node->data.name, p.name);
  new_node->data.age = p.age;
  new_node->next = NULL;  
  if (q.front == NULL && q.rear == NULL) {  
      q.front = q.rear = new_node; 
      return;
  }  
  q.rear->next = new_node;
  q.rear = new_node;
}

int extract_node(struct person *p){
  if (q.front == NULL) {  
    printf("Queue is empty \n");  
    return -1;  
  }  
  strcpy(p->name,q.front->data.name);
  p->age = q.front->data.age;
  struct Node *temp = q.front;
  if (q.front == q.rear) {  
    q.front = q.rear = NULL;  
  } 
  else {  
    q.front = q.front->next;  
  }
  free(temp); 
  return 0;
}

int main(){
  
  struct person p;
  char name[20];
  int age;
  
  q.front = q.rear = NULL;
  for(int i=0; i<3; i++){
    scanf("%s %i",p.name,&p.age);
    add_node(p);
  }
  printf("extract \n");
  while(extract_node(&p) == 0){
    printf("%s %i \n",p.name,p.age);  
  }
  return 0;
}
