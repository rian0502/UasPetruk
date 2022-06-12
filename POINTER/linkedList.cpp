#include <iostream>
using namespace std;
struct Node{
	int nilai;
	Node *next;
};

Node *head,*tail, *n, *newnode, *del;

void createlinkedlist(int val){
	head = new Node();
	head->nilai = val;
	head->next=NULL;
	tail = head;
}

void addlast(int val){
	newnode = new Node();
	newnode->nilai=val;
	newnode->next=NULL;
	tail->next = newnode;
	tail = newnode;
}
void addfirst(int val){
	newnode = new Node();
	newnode->nilai=val;
	newnode->next=head;
	head = newnode;
}

void addMiddle(int val, int posisi){
    newnode = new Node();
    newnode->nilai = val;
    n = head;
    int index = 1;

    while (index < posisi-1){
        n = n->next;
        index++;
    }

    newnode->next = n->next;
    n->next = newnode;
    
}

void deleteFirst(){
    del = head;
    head = head->next;
    delete del;
}

void deleteLast(){
    del = tail;
    n = head;
    while (n->next != tail){
        n = n->next;
    }

    tail = n;
    tail->next = NULL;
    delete del;
}

void printlinkedlist(){
	n = head;
	while(n != NULL){
		cout<<"Nilai = "<<n->nilai<<endl;
		n = n->next;
	}
}

int main(int argc, char const *argv[]){


    return 0;
}
