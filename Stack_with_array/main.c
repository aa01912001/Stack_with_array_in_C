/*
Date: 2020/01/19
Author: Ian
Object: To implement a stack with integral array in C.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100 //declare maximal stack size.
int stack[MAXSIZE];
int top = -1;

int isFull(int []);
int isEmpty(int []);
void push(int [], int);
int pop(int []);

int isFull(int s[]){ //determine whether stack is full.
    if(top == 99){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(int s[]){ //determine whether stack is empty.
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}

void push(int s[], int data){ //push an item into stack.
    if(isFull(s)){
        printf("Stack is full!!\n");
    }else{
        s[++top] = data;
        printf("Push %d into stack\n", data);
    }
}

int pop(int s[]){ //pop an item from stack.
    if(isEmpty(s)){
        printf("Stack is empty!!\n");
    }else{
        return s[top--];
    }
}

int main()
{
    int i;
    for(i=1; i<=100; i++){ //push 100 items into stack.
        push(stack, i);
    }
    printf("Top is now at %d\n", top);

    for(i=1; i<=100; i++){ //pop 100 items from stack.
        printf("Pop stack: %d\n", pop(stack));
    }
    printf("Top is now at %d\n", top);

    return 0;
}
