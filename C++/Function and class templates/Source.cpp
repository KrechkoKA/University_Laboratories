#include <iostream>
using namespace std;

template<typename T>
class List
{
public:
	List();
	~List();

	void pop_front();				    //удаление 1-го элем-а списка
	void pop_back();					//удаление последнего элемента списка
	void push_front(T data);		    //добавление элем-а в начало списка
	void push_back(T data);			    //добавление элем-а в конец списка
	void clear();					    //очистка списка
	int GetSize() { return Size; }
	
	void insert(T data, int index);     //вставка данных по индексу
	void removeAt(int index);			//удаление элем-а по индексу
	
	T& operator[](const int index);       //перегрузка оператора [] (индексирования)
	List<T>& operator= (List<T>& other);  //перегрузка оператора =	(присваивания)
	List<T>& operator+ (List<T>& other);  //перегрузка оператора +  (сложения)

private:
	template<typename T>
	class Node {             //класс элемента
	public:
		
		Node* pNext;        //указатель на следующий элемент
		T data;             //данные 
		
		Node(T data = T(), Node *pNext = nullptr) {   
			this->data = data;
			this->pNext = pNext;
		}
	};

	int Size;        //кол-во элементов в списке
	Node<T> *head;    //указатель на вершину списка
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
void List<T>::pop_front()		//удаление 1-го элем-а списка
{
	Node<T>* temp = head;
	head = head->pNext;       //вершине присваиваем значение след-го элем-а
	delete temp;              //удаление вершины
	Size--;
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr) {        //проверка на существование первого элемента
		head = new Node<T>(data);
	}
	else{
		Node<T>* current = this->head;  //созд-е врем-й перем-й, изначально указыв-й на первый элем-т
		while (current->pNext != nullptr){    //поиск последнего элемента
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
void List<T>::push_front(T data)			//добавление элем-а в начало списка
{
	head = new Node<T>(data, head);
	Size++;
}

template<typename T>
void List<T>::insert(T data, int index)
{
	if (index == 0) {			 //если индекс нулевой, добавляем данные в начало списка
		push_front(data);
	}
	else {
		Node<T>* previous = this->head;           //временный указатель
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
		for (int i = 0; i < index - 1; i++) {   //поиск предыдущ элем-та, индекс кот-го хотим удалить
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

