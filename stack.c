#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Error: Stack overflow!\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Error: Stack underflow!\n");
        return -1;
    }
    return stack[top--];
}
int peek() {
	if(top == -1){
	    printf("Stack is empty\n");
	    return -1;
	}
	else{
	    return stack[top];
	}
}

void isFull(){
	if(top == MAX -1){
	   printf("stack is full\n");
	}
}

void isEmpty(){
	if(top < 0){
	   printf("Stack is empty\n");
	}
}

int main() {
	isEmpty();
	push(5);
	push(4);
	int peekedElement = peek();
	printf("top is: %d\n",peekedElement);
	int popEl = pop();
	printf("popped element is: %d\n",popEl);
	printf("after popping top is: %d\n", peek());              
    return 0;
}
