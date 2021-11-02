#include<iostream>

using namespace std;

#define max 10

char st[max];
int top=-1;
bool isEmpty(){
   if(top == -1) return true;
   else return false;
}
bool isFull(){
   if(top == max-1) return true;
   else return false;
}
void push(char st[], char val){
   if(!isFull()){
      top++;
      st[top] = val;
   }
   else cout << "stack is full";
}
int pop(char st[]){
   if(!isEmpty()){
      char val = st[top];
      top--;
      return val;
   }
   else {cout << "stack is empty"; return 0;}
}
void display(char st[]){
   if(!isEmpty()){
      for(int i = 0;i<=top;i++){
         cout << st[i] << endl;
      }
   }
   else cout << "stack is empty";
}

main(){
    char a[] = {'h','e','l','l','o'};
    for (int i = 0; i < 5 ; i++){
        push(st,a[i]);
        cout << st[i] << "\t";
    }
    cout << endl << "reverse: " << endl;
    char reverse[5];
    for (int i = 0; i < 5; i++){
        reverse[i] = pop(st);
        cout <<reverse[i] << "\t";
    }
}