#include <iostream>
#include <string>
#include <sstream>

struct NODE
{
	std::string m_name;
	NODE* m_link;

};

NODE* createList();
void insertData(NODE* _ptrToList, std::string _name);
void printList(NODE* _ptrToList);
void cleanList(NODE* _ptrList);
bool searchList(NODE* _ptrList, std::string _text, NODE* _position);

int main()
{
	NODE *head = nullptr;
	head = createList();

	for (int i = 1; i < 10; i++)
	{
		std::stringstream test;
		test << "Number " << i;
		insertData(head, test.str());
	}
	printList(head);

	NODE tempnode;
	searchList(head, "Number 3", &tempnode);
	//cleanList(head);
	//delete head;
	//head = nullptr;
	return 0;
}

NODE* createList()
{
	NODE* tmp = new NODE;
	if (tmp == nullptr)
	{
		std::cout << "Cannot create list\n";
	}
	else
	{
		tmp->m_name = "Head of Linked List";
		tmp->m_link = nullptr;
	}
	return tmp;
}

void insertData(NODE * _ptrToList, std::string _name)
{
	NODE* current = _ptrToList;
	if (_ptrToList == nullptr)
	{
		std::cout << "Invalid List" << std::endl;
	}
	while (current->m_link != nullptr)
	{
		current = current->m_link;
	}
	current->m_link = new NODE;
	if (current->m_link == nullptr)
	{
		std::cout << "Failed to create new node";
	}
	current = current->m_link;
	current->m_link = nullptr;
	current->m_name = _name;
}
void printList(NODE * _ptrToList)
{
	NODE* current = _ptrToList;
	int i = 0;
	if (_ptrToList == nullptr)
	{
		std::cout << "Invalid List" << std::endl;
	}

	while (current->m_link != nullptr)
	{
		std::cout << "Element " << i << " > " << current->m_name << std::endl;
		current = current->m_link;
		i++;
	}

}

void cleanList(NODE * _ptrList)
{
	NODE* next = nullptr;
	NODE* current = _ptrList;
	do 
	{		
		next = current->m_link;
		std::cout << current->m_name << std::endl;
		delete current;
		current = next;
	}while (next != nullptr);
}

bool searchList(NODE * _ptrList, std::string _text, NODE * _position)
{
	NODE* current = _ptrList;
	bool found = false;
	int position = 0;
	while (!found && current->m_link != nullptr)
	{
		if (current->m_name == _text)
		{
			_position = current;
			found = true;
			std::cout << "\"" << _text << "\"" << " found at position " << position << " (node " << _position->m_name << " )\n";
		}
		else
		{
			current = current->m_link;
		}
		position++;
	}
	return found;
}