#include <iostream>

using namespace std;

template<class T>
struct Node
{
	T date;
	Node<T> *next; // указатель на следующий узел
				// из того же типа элементов
	Node(int dd, Node<T> *nn = nullptr) : d(dd), n(nn) {}
};

template <class T>
int length(Node<T> *f)
{
	Node<T> *p = f; // указатель p пробегает все элементы
				 // списка, начина€ с того, на который
				 // указывает f
	int i = 0;
	while (p != nullptr)
	{
		++i; // подсчет числа элементов
		p = p->next; // переход к следующему элементу
	}
	return i;
}

//3. Ќаписать функцию, вставл€ющую элемент в заданную позицию списка(добавл€етс€ один целый параметр Ч
//	номер необходимой позиции; 0 Ч вставка в начало списка, 1 Ч после первого элемента, . . ., длина списка Ч вставка в
//	конец) : а) дл€ списка целых чисел; б) дл€ списка из любого типа элементов.

template <class T>
void vstavka(Node<T> *&f, T d, int pos)
{
	while (pos != 0)
	{
		pos--;
		f = f->next;
	}
	Node<T> *p;
	p->date = d;
	Node<T> *templ;
	templ = f->next;
	f->next = p;
	p->next = temp;
	

}




int main()
{

	system("pause");
	return 0;
}
