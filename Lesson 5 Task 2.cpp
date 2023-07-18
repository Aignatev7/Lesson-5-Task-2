#include <iostream>

class Figure // ����� ������
{
protected:
	std::string figure_name;

public:
	Figure() { figure_name = "������"; }

	std::string get_figure_name() { return figure_name; }

	virtual void print_myself() { std::cout << get_figure_name() << std::endl; }
};

class Triangle : public Figure // ����� �����������
{
protected:
	int side_a = 0;
	int side_b = 0;
	int side_c = 0;
	int corner_A = 0;
	int corner_B = 0;
	int corner_C = 0;

public:
	Triangle() {
		figure_name = "�����������";
		side_a = 10;
		side_b = 20;
		side_c = 30;
		corner_A = 50;
		corner_B = 60;
		corner_C = 70;
	}

	Triangle(int a, int b, int c, int A, int B, int C) {
		figure_name = "�����������";
		this->side_a = a;
		this->side_b = b;
		this->side_c = c;
		this->corner_A = A;
		this->corner_B = B;
		this->corner_C = C;
	}

	int get_side_a() { return side_a; }
	int get_side_b() { return side_b; }
	int get_side_c() { return side_c; }
	int get_corner_A() { return corner_A; }
	int get_corner_B() { return corner_B; }
	int get_corner_C() { return corner_C; }

	virtual void print_myself() {
		std::cout << get_figure_name() << "\n�������: " << "a=" << get_side_a() << " b=" << get_side_b()
			<< " c=" << get_side_c() << "\n" << "����: " << "�=" << get_corner_A() << " B=" << get_corner_B()
			<< " C=" << get_corner_C() << "\n" << std::endl;
	}
};

class RightTriangle : public Triangle // ����� ������������� �����������
{
public:
	RightTriangle(int a, int b, int c, int A, int B) {
		figure_name = "������������� �����������";
		this->side_a = a;
		this->side_b = b;
		this->side_c = c;
		this->corner_A = A;
		this->corner_B = B;
		this->corner_C = 90;
	}
};

class IsoscelesTriangle : public Triangle // ����� �������������� �����������
{
public:
	IsoscelesTriangle(int b, int c, int B, int C) {
		figure_name = "�������������� �����������";
		this->side_a = this->side_c = c;
		this->side_b = b;
		this->corner_A = this->corner_C = C;
		this->corner_B = B;
	}
};

class EquilateralTriangle : public Triangle // ����� �������������� �����������
{
public:
	EquilateralTriangle(int c) {
		figure_name = "�������������� �����������";
		this->side_a = this->side_b = this->side_c = c;
		this->corner_A = this->corner_B = this->corner_C = 60;
	}
};

class Quadrangle : public Figure // ����� ��������������
{
protected:
	int side_a = 0;
	int side_b = 0;
	int side_c = 0;
	int side_d = 0;
	int corner_A = 0;
	int corner_B = 0;
	int corner_C = 0;
	int corner_D = 0;

public:
	Quadrangle() {
		figure_name = "��������������";
		side_a = 10;
		side_b = 20;
		side_c = 30;
		side_d = 40;
		corner_A = 50;
		corner_B = 60;
		corner_C = 70;
		corner_D = 80;
	}

	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		figure_name = "��������������";
		this->side_a = a;
		this->side_b = b;
		this->side_c = c;
		this->side_d = d;
		this->corner_A = A;
		this->corner_B = B;
		this->corner_C = C;
		this->corner_D = D;
	}

	int get_side_a() { return side_a; }
	int get_side_b() { return side_b; }
	int get_side_c() { return side_c; }
	int get_side_d() { return side_d; }
	int get_corner_A() { return corner_A; }
	int get_corner_B() { return corner_B; }
	int get_corner_C() { return corner_C; }
	int get_corner_D() { return corner_D; }

	virtual void print_myself() {
		std::cout << get_figure_name() << "\n�������: " << "a=" << get_side_a() << " b=" << get_side_b()
			<< " c=" << get_side_c() << " d=" << get_side_d() << "\n"
			<< "����: " << "�=" << get_corner_A() << " B=" << get_corner_B()
			<< " C=" << get_corner_C() << " D=" << get_corner_D() << "\n" << std::endl;
	}
};

class Rectangle : public Quadrangle // ����� �������������
{
public:
	Rectangle(int c, int d) {
		figure_name = "�������������";
		this->side_a = this->side_c = c;
		this->side_b = this->side_d = d;
		this->corner_A = this->corner_B = this->corner_C = this->corner_D = 90;
	}
};

class Square : public Quadrangle // ����� �������
{
public:
	Square(int d) {
		figure_name = "�������";
		this->side_a = this->side_b = this->side_c = this->side_d = d;
		this->corner_A = this->corner_B = this->corner_C = this->corner_D = 90;
	}
};

class Parallelogram : public Quadrangle // ����� ��������������
{
public:
	Parallelogram(int c, int d, int C, int D) {
		figure_name = "��������������";
		this->side_a = this->side_c = c;
		this->side_b = this->side_d = d;
		this->corner_A = this->corner_C = C;
		this->corner_B = this->corner_D = D;
	}
};

class Rhomb : public Quadrangle // ����� ����
{
public:
	Rhomb(int d, int C, int D) {
		figure_name = "����";
		this->side_a = this->side_b = this->side_c = this->side_d = d;
		this->corner_A = this->corner_C = C;
		this->corner_B = this->corner_D = D;
	}
};

void print_info(Figure* f) { f->print_myself(); }

int main() {
	setlocale(LC_ALL, "Russian");

	Triangle tri(20, 30, 40, 55, 65, 75);
	print_info(&tri);

	RightTriangle rig_tri(22, 32, 42, 52, 62);
	print_info(&rig_tri);

	IsoscelesTriangle isos_tri(32, 44, 52, 62);
	print_info(&isos_tri);

	EquilateralTriangle eq_tri(62);
	print_info(&eq_tri);

	Quadrangle quad(12, 45, 89, 23, 65, 21, 20, 57);
	print_info(&quad);

	Rectangle rect(79, 45);
	print_info(&rect);

	Square square(45);
	print_info(&square);

	Parallelogram paral(45, 15, 84, 31);
	print_info(&paral);

	Rhomb rhomb(15, 84, 31);
	print_info(&rhomb);
}


/*
������ 2. ������.������� � ����
� ���� ������� �� ��������� �������� ������� ��� ���������� ���������� �������.

� ��� ���������� ���������� � ����� ������ � ����� ����� �����, � ����� ��������� ����� ���������� �����.������ � ������������ �� ������ ������� ���������� � ����� ���� ��� ��� ������(a, b, c) � ��������� ��� ��� �����(A, B, C).� ��������������� �� ������� ���������� � ����� ��� ������ ������(a, b, c, d) � ��������� ��� ������ �����(A, B, C, D).

����� � ��� ���������� ����� ���������� ������ :

������������� �����������(���� C ������ ����� 90);
�������������� �����������(������� a � c �����, ���� A � C �����);
�������������� �����������(��� ������� �����, ��� ���� ����� 60);
�������������(������� a, c � b, d ������� �����, ��� ���� ����� 90);
�������(��� ������� �����, ��� ���� ����� 90);
��������������(������� a, c � b, d ������� �����, ���� A, C � B, D ������� �����);
����(��� ������� �����, ���� A, C � B, D ������� �����).
�� ������ ����� ����������� ������ � ������ ������ ����� � ������ � �������� � �����, �� ����� �� �� ������ ���� �������� �������� ����� ������ � ����.

�� ������ ���� ����������� ������� ������, �� ��������������� ������������� ��������.��������, ������ ������� ������� � ������� ������.�������������� ����������� ��������� �� �����.��������, ����� ����� � ������������ ����� ���� �� ����� 180.

������: �������������� � ����������� ������, ����������� ���������� �������.����������������� �� ������ : �������� �� ������ ���������� ������ ������ � �������� �� ����� ���������� � ������ � ������ � �������� � �����.�������� ����������� ������������.

������������� ���� ������ � ������� ����� ����� ��������� � ������� ������ ������� �������������.

��� ������ ���������� � ������ �������� ������� print_info, ������� ����� ��������� � �������� ��������� ��������� �� ������� ����� ������.

������ ������ ���������
�������
����������� :
�������: a = 10 b = 20 c = 30
���� : A = 50 B = 60 C = 70

������������� ����������� :
�������: a = 10 b = 20 c = 30
���� : A = 50 B = 60 C = 90

�������������� ����������� :
�������: a = 10 b = 20 c = 10
���� : A = 50 B = 60 C = 50

�������������� ����������� :
�������: a = 30 b = 30 c = 30
���� : A = 60 B = 60 C = 60

�������������� :
������� : a = 10 b = 20 c = 30 d = 40
���� : A = 50 B = 60 C = 70 D = 80

������������� :
������� : a = 10 b = 20 c = 10 d = 20
���� : A = 90 B = 90 C = 90 D = 90

������� :
������� : a = 20 b = 20 c = 20 d = 20
���� : A = 90 B = 90 C = 90 D = 90

�������������� :
������� : a = 20 b = 30 c = 20 d = 30
���� : A = 30 B = 40 C = 30 D = 40

���� :
������� : a = 30 b = 30 c = 30 d = 30
���� : A = 30 B = 40 C = 30 D = 40
*/