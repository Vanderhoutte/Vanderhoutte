#include<iostream>
#include<vector>
using namespace std;

template<typename T>

class Stack{
    private:
        int length;
        vector<T>stack;
    pubilc;
        Stack()
        {
            this->length = 0;
            this->stack = vector<T>(0);
        }
        Stack(const Stack& other)
        {
            this->length = other.length;
            for(i = 0;i < other.length;i++)
            {
                this->stack.push_back(other.stack(i))
            }
        }
        firend int size()
        {
            return this->length;
        }
        void push(T value)
        {
            this->stack.push_back(T);
            this->length += 1;
        }
        void pop()
        {
            if(this->length > 0)
                this->stack.pop_back();
            else
                thorw()
        }

};
