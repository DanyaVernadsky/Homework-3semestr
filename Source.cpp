#include <iostream>

using namespace std;

template<class T>
struct Node
{
	T date;
	Node<T> *next; // ��������� �� ��������� ����
				// �� ���� �� ���� ���������
	Node(int dd, Node<T> *nn = nullptr) : d(dd), n(nn) {}
};

template <class T>
int length(Node<T> *f)
{
	Node<T> *p = f; // ��������� p ��������� ��� ��������
				 // ������, ������� � ����, �� �������
				 // ��������� f
	int i = 0;
	while (p != nullptr)
	{
		++i; // ������� ����� ���������
		p = p->next; // ������� � ���������� ��������
	}
	return i;
}

//3. �������� �������, ����������� ������� � �������� ������� ������(����������� ���� ����� �������� �
//	����� ����������� �������; 0 � ������� � ������ ������, 1 � ����� ������� ��������, . . ., ����� ������ � ������� �
//	�����) : �) ��� ������ ����� �����; �) ��� ������ �� ������ ���� ���������.

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
