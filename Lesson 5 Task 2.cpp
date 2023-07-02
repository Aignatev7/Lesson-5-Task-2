#include <iostream>

class Figure // ����� ������
{
protected:
	std::string figure_name;
	int side_a, side_b, side_c, side_d;
	int corner_A, corner_B, corner_C, corner_D;
public:
	Figure() {
		figure_name = "������";
		side_a = 0;
		side_b = 0;
		side_c = 0;
		side_d = 0;
		corner_A = 0;
		corner_B = 0;
		corner_C = 0;
		corner_D = 0;
	}
	std::string get_figure_name() { return figure_name; }
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
			<< " c=" << get_side_c() << " d=" << get_side_d() << "\n" << "����: " << "�=" << get_corner_A()
			<< " B=" << get_corner_B() << " C=" << get_corner_C() << " D=" << get_corner_D() << "\n" << std::endl;
	}
};

class Triangle : public Figure// ����� �����������
{
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
	void print_myself() override {
		std::cout << get_figure_name() << "\n�������: " << "a=" << get_side_a() << " b=" << get_side_b()
			<< " c=" << get_side_c() << "\n" << "����: " << "�=" << get_corner_A()
			<< " B=" << get_corner_B() << " C=" << get_corner_C() << "\n" << std::endl;
	}
};

class RightTriangle : public Triangle // ����� ������������� �����������
{
public:
	RightTriangle() {
		figure_name = "������������� �����������";
		corner_C = 90;
	}
};

class IsoscelesTriangle : public Triangle // ����� �������������� �����������
{
public:
	IsoscelesTriangle() {
		figure_name = "�������������� �����������";
		side_a = side_c = 10;
		corner_A = corner_C = 50;
	}
};

class EquilateralTriangle : public Triangle // ����� �������������� �����������
{
public:
	EquilateralTriangle() {
		figure_name = "�������������� �����������";
		side_a = side_b = side_c = 30;
		corner_A = corner_B = corner_C = 60;
	}
};

class Quadrangle : public Figure// ����� ��������������
{
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
};

class Rectangle : public Quadrangle// ����� �������������
{
public:
	Rectangle() {
		figure_name = "�������������";
		side_a = side_c = 10;
		side_b = side_d = 20;
		corner_A = corner_B = corner_C = corner_D = 90;
	}
};

class Square : public Rectangle // ����� �������
{
public:
	Square() {
		figure_name = "�������";
		side_a = side_b = side_c = side_d = 20;
		corner_A = corner_B = corner_C = corner_D = 90;
	}
};

class Parallelogram : public Rectangle // ����� ��������������
{
public:
	Parallelogram()
	{
		figure_name = "��������������";
		side_a = side_c = 20;
		side_b = side_d = 30;
		corner_A = corner_C = 30;
		corner_B = corner_D = 40;
	}
};

class Rhomb : public Parallelogram // ����� ����
{
public:
	Rhomb() {
		figure_name = "����";
		side_a = side_b = side_c = side_d = 30;
		corner_A = corner_C = 30;
		corner_B = corner_D = 40;
	}
};

void print_info(Figure* f)
{
	f->print_myself();
}

int main() {
	setlocale(0, "");
	Triangle tri;
	print_info(&tri);
	RightTriangle rig_tri;
	print_info(&rig_tri);
	IsoscelesTriangle isos_tri;
	print_info(&isos_tri);
	EquilateralTriangle eq_tri;
	print_info(&eq_tri);
	Quadrangle quad;
	print_info(&quad);
	Rectangle rect;
	print_info(&rect);
	Square square;
	print_info(&square);
	Parallelogram paral;
	print_info(&paral);
	Rhomb rhomb;
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