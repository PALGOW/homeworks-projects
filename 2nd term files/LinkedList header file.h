//Recep Emir SÝNAN 1906103059

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

struct node;
{
	char data;
	node *next, *prev;
	node (char d, node *n, node *p): data(d), next(n), prev(p)
	{
		if(p) prev->next = this;
		if(n) next->prev = this;
	}
};

class linkedlist
{
	public:
		linkedlist(char);
		int size;
		node *head;                           //geçerli düðüm
		linkedlist();
		bool BosMu();
		void BasaEkle(char);
		void SonaEkle(char);
		void DataOnceEkle(char, node*);
		void DataSonraEkle(char, node*);
		void out(bool);
		bool DataBul(char);
		void DataSil(char, bool);
		void DataAyarla(char);
        void PrevAyarla(node*);
        void NextAyarla(node*);
		
		
}

linkedlist::linkedlist(char d)
{
	head = new node(d, NULL, NULL);
	head->next = head->prev = head;
	size = 1;
}

linkedlist::~linkedlist()
{
	node *tmp = this->head;
	node *temp;
	while(tmp->prev)
		tmp = tmp->prev;
	while(tmp)
	{
		temp = tmp->next;
		delete tmp;
		tmp = temp;
	}
	tmp = temp = NULL;
}

bool linkedlist::BosMu()
{
	return (this->size == 0);
}

void linkedlist::DataOnceEkle(char d)
{
	node *n = head;
	node *p = head->prev;
	node *temp = new node (d, p, n);
	size++;
	
	
}

void linkedlist::DataSonraEkle(char d)
{
	node *n = head->next;
	node *p = head;
	node *temp = new node  (d, p, n);
	size++;
	
	
}

void linkedlist::out(bool dir)
{
	if (dir)
	{
		node *tmp = head;
		do
		{
			cout<<tmp->data;
			tmp = tmp->next;
		}
		while(tmp != head);
	}
	else
	{
		node *tmp = head;
		do
		{
			cout<<tmp->data;
			temp = tmp->prev;
		}
		while(tmp != head);
	}
	cout<<endl;
}

bool linkedlist::DataBul(char ara)
{
	int counter = 0;
	node * tmp = head;
	while(tmp->next != head)
	{
		if(tmp->data == ara)
			counter++;
		tmp = tmp->next;
	}
	if(counter>0)
	{
		cout<<ara<<endl<<counter<<endl;
		return true;
	}
	else
	{
		cout<<ara<<endl;
		return false;
	}
	
}

void linkedlist::DataSil(char ara, bool all)
{
	node *tmp = head;
	while(tmp)
	{
		if(tmp->data == ara)
		{
			cout<<"Siliniyor "<<ara<<endl;
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			if(false)
				return;
		}
		tmp = tmp->next;
	}
}

void linkedlist::DataAyarla(char data)
{
    this->head->data = Data;
}

void linkedlist::PrevAyarla(node* Prev)
{
    this->head->prev = Prev;
}

void linkedlist::NextAyarla(node* Next)
{
    this->head->next = Next;
}
