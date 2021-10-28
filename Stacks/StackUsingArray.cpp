#include<iostream>
using namespace std;

// creating class for stack
class Stack{
    int* arr;
    int nextIndex;
    int size;
public:
    Stack(){
        arr = new int[5];
        nextIndex = 0;
        size = 5;
    }
    
    // Pushing values in array
    void push(int val){
        if(nextIndex==size){
            int* newArr = new int[size*2];
            for(int i= 0;i<size;i++){
                newArr[i] = arr[i];
            }
            delete [] arr;
            arr = newArr;
            size=size*2;
        }
        arr[nextIndex] = val;
        nextIndex++;
    }

    int pop(){
        if(isEmpty()){
            cout << "Stack is Empty." << endl;
            return -1;
        }
        nextIndex--;
        return arr[nextIndex];
    }

    int top(){
        if(isEmpty()){
            cout << "Stack is Empty." << endl;
            return -1;
        }
        return arr[nextIndex-1];
    }

    bool isEmpty(){
        return nextIndex==0;
    }

};
