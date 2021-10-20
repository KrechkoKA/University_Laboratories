#include <iostream>
using namespace std;

template<typename T>
class List
{
public:
	List();
	~List();

	void pop_front();				    //�������� 1-�� ����-� ������
	void pop_back();					//�������� ���������� �������� ������
	void push_front(T data);		    //���������� ����-� � ������ ������
	void push_back(T data);			    //���������� ����-� � ����� ������
	void clear();					    //������� ������
	int GetSize() { return Size; }
	
	void insert(T data, int index);     //������� ������ �� �������
	void removeAt(int index);			//�������� ����-� �� �������
	
	T& operator[](const int index);       //���������� ��������� [] (��������������)
	List<T>& operator= (List<T>& other);  //���������� ��������� =	(������������)
	List<T>& operator+ (List<T>& other);  //���������� ��������� +  (��������)

private:
	template<typename T>
	class Node {             //����� ��������
	public:
		
		Node* pNext;        //��������� �� ��������� �������
		T data;             //������ 
		
		Node(T data = T(), Node *pNext = nullptr) {   
			this->data = data;
			this->pNext = pNext;
		}
	};

	int Size;        //���-�� ��������� � ������
	Node<T> *head;    //��������� �� ������� ������
};

template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{
	//clear();
}

template<typename T>
void List<T>::pop_front()		//�������� 1-�� ����-� ������
{
	Node<T>* temp = head;
	head = head->pNext;       //������� ����������� �������� ����-�� ����-�
	delete temp;              //�������� �������
	Size--;
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr) {        //�������� �� ������������� ������� ��������
		head = new Node<T>(data);
	}
	else{
		Node<T>* current = this->head;  //����-� ����-� �����-�, ���������� ������-� �� ������ ����-�
		while (current->pNext != nullptr){    //����� ���������� ��������
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}

	Size++;
}

template<typename T>
void List<T>::clear()   
{
	while (Size){
		pop_front();
	}
}

template<typename T>
void List<T>::push_front(T data)			//���������� ����-� � ������ ������
{
	head = new Node<T>(data, head);
	Size++;
}

template<typename T>
void List<T>::insert(T data, int index)
{
	if (index == 0) {			 //���� ������ �������, ��������� ������ � ������ ������
		push_front(data);
	}
	else {
		Node<T>* previous = this->head;           //��������� ���������
		for (int i = 0; i < index - 1; i++) {
			previous = previous->pNext;
		}

		previous->pNext = new Node<T>(data, previous->pNext);
		Size++;
	}
}

template<typename T>
List<T>& List<T>::operator=(List<T>& other){

	if (this->head != nullptr)
		clear();
	
	Node<T>* previous = other.head;
	for (int i = 0; i < other.Size; i++) {
		push_back(previous->data);
		previous = previous->pNext;
	}
	
	return *this;
}

template<typename T>
List<T>& List<T>::operator+(List<T>& other)
{
	List<T> temp;
	Node<T>* previous = this->head;
	Node<T>* previous2 = other.head;
	for (int i = 0; i < max(other.Size, this->Size); i++) {
		if (previous == nullptr || previous2 == nullptr)
			break;
		temp.push_back(previous->data + previous2->data);

		previous = previous->pNext;
		previous2 = previous2->pNext;

	}

	cout << "prev= " << previous << endl;
	cout << "prev= " << previous2 << endl;

	while (previous2 != nullptr)
	{
		temp.push_back(previous2->data);
		previous2 = previous2->pNext;
	}

	while (previous != nullptr)
	{
		temp.push_back(previous->data);
		previous = previous->pNext;
	}

	cout << "prev= " << previous << endl;
	cout << "prev= " << previous2 << endl;
	for (int i = 0; i < temp.GetSize(); i++) {
		cout << temp[i] << endl;
	}
	return temp;
}


template<typename T>
void List<T>::removeAt(int index)
{
	if (index == 0) {
		pop_front();
	 }
	else {
		Node<T>* previous = this->head;
		for (int i = 0; i < index - 1; i++) {   //����� �������� ����-��, ������ ���-�� ����� �������
			previous = previous->pNext;
		}
		
		Node<T>* toDelete = previous->pNext;
		previous->pNext = toDelete->pNext;

		delete toDelete;
		Size--;
	}
}

template<typename T>
void List<T>::pop_back()
{
	removeAt(Size-1);
}

template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;
	while (current != nullptr){
		if (counter == index) {
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}






int main() {

	setlocale(LC_ALL, "ru");
	system("color f0");

	
	cout << "lst1" << endl;
	List<int> lst1;
	lst1.push_back(11);
	lst1.push_back(12);
	lst1.push_back(13);
	lst1.push_back(14);
	lst1.push_back(15);
	lst1.push_back(16);
	for (int i = 0; i < lst1.GetSize(); i++) {
		cout << lst1[i] << endl;
	}

	cout << "hello" << endl;
	List<int> hello;
	hello.push_back(5);
	hello.push_back(5);
	hello.push_back(5);
	hello.push_back(4);

	for (int i = 0; i < hello.GetSize(); i++) {
		cout << hello[i] << endl;
	}

	//hello = lst1;
	cout << "hello2" << endl;
	
	/*for (int i = 0; i < hello.GetSize(); i++) {
		cout << hello[i] << endl;
	}*/

	List<int> res;
	res = hello + lst1;
	for (int i = 0; i < res.GetSize(); i++) {
		cout << res[i] << endl;
	}
	
	return 0;
}






//template<typename T>
//List<T>& List<T>::operator+(List<T>& other)
//{
//	List<T> temp;
//	Node<T>* previous = this->head;
//	Node<T>* previous2 = other.head;
//	for (int i = 0; i < max(other.Size, this->Size); i++) {
//		if (previous == nullptr || previous2 == nullptr)
//			break;
//		temp.push_back(previous->data + previous2->data);
//
//		previous = previous->pNext;
//		previous2 = previous2->pNext;
//
//	}
//
//	cout << "prev= " << previous << endl;
//	cout << "prev= " << previous2 << endl;
//
//	while (previous2 != nullptr)
//	{
//		temp.push_back(previous2->data);
//		previous2 = previous2->pNext;
//	}
//
//	while (previous != nullptr)
//	{
//		temp.push_back(previous->data);
//		previous = previous->pNext;
//	}
//
//	cout << "prev= " << previous << endl;
//	cout << "prev= " << previous2 << endl;
//	for (int i = 0; i < temp.GetSize(); i++) {
//		cout << temp[i] << endl;
//	}
//	return temp;
//}

