#include <iostream>
#include <string>

class Triangle // ����� �����������
{
protected:
	std::string figure_name;
	int side_a, side_b, side_c;
	int corner_A, corner_B, corner_C;
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
	std::string get_figure_name() { return figure_name; }
	int get_side_a() { return side_a; }
	int get_side_b() { return side_b; }
	int get_side_c() { return side_c; }
	int get_corner_A() { return corner_A; }
	int get_corner_B() { return corner_B; }
	int get_corner_C() { return corner_C; }
};
class RightTriangle : public Triangle // ����� ������������� �����������
{
	std::string figure_name;
	int corner_C;
public:
	RightTriangle() {
		figure_name = "������������� �����������";
		corner_C = 90;
	}
	std::string get_figure_name() { return figure_name; }
	int get_corner_C() { return corner_C; }
};

class IsoscelesTriangle : public Triangle // ����� �������������� �����������
{
	std::string figure_name;
	int side_a, side_c;
	int corner_A, corner_C;
public:
	IsoscelesTriangle() {
		figure_name = "�������������� �����������";
		side_a = side_c = 10;
		corner_A = corner_C = 50;
	}
	std::string get_figure_name() { return figure_name; }
	int get_side_a() { return side_a; }
	int get_side_c() { return side_c; }
	int get_corner_A() { return corner_A; }
	int get_corner_C() { return corner_C; }
};

class EquilateralTriangle : public Triangle // ����� �������������� �����������
{
	std::string figure_name;
	int side_a, side_b, side_c;
	int corner_A, corner_B, corner_C;

public:
	EquilateralTriangle() {
		figure_name = "�������������� �����������";
		side_a = side_b = side_c = 0;
		corner_A = corner_B = corner_C = 60;
	}
	std::string get_figure_name() { return figure_name; }
	int get_side_a() { return side_a; }
	int get_side_b() { return side_b; }
	int get_side_c() { return side_c; }
	int get_corner_A() { return corner_A; }
	int get_corner_B() { return corner_B; }
	int get_corner_C() { return corner_C; }
};

class Quadrangle // ����� ��������������
{
protected:
	std::string figure_name;
	int side_a, side_b, side_c, side_d;
	int corner_A, corner_B, corner_C, corner_D;

public:
	Quadrangle() {
		figure_name = "��������������";
		side_a = 10;
		side_b = 20;
		side_c = 30;
		side_d = 30;
		corner_A = 50;
		corner_B = 60;
		corner_C = 70;
		corner_D = 70;
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
};

class Rectangle // ����� �������������
{
protected:
	std::string figure_name;
	int side_a, side_b, side_c, side_d;
	int corner_A, corner_B, corner_C, corner_D;

public:
	Rectangle() {
		figure_name = "�������������";
		side_a = side_c;
		side_b = side_d;
		corner_A = corner_B = corner_C = corner_D = 90;
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
};

class Square : public Rectangle // ����� �������
{
	std::string figure_name;
	int side_a, side_b, side_c, side_d;
	int corner_A, corner_B, corner_C, corner_D;

public:
	Square() {
		figure_name = "�������";
		side_a = side_b = side_c = side_d;
		corner_A = corner_B = corner_C = corner_D = 90;
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
};

class Parallelogram : public Rectangle // ����� ��������������
{
	std::string figure_name;
	int side_a, side_b, side_c, side_d;
	int corner_A, corner_B, corner_C, corner_D;

public:
	Parallelogram()
	{
		figure_name = "��������������";
		side_a = side_c = 20;
		side_b = side_d = 30;
		corner_A = corner_C = 30;
		corner_B = corner_D = 40;
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
};

class Rhomb : public Parallelogram // ����� ����
{
	std::string figure_name;
	int side_a, side_b, side_c, side_d;
	int corner_A, corner_B, corner_C, corner_D;

public:
	Rhomb() {
		figure_name = "����";
		side_a = side_b = side_c = side_d;
		corner_A = corner_C;
		corner_B = corner_D;
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
};

int main() {
	setlocale(0, "");
	Triangle tri;
	RightTriangle rig_tri;
	IsoscelesTriangle isos_tri;
	EquilateralTriangle eq_tri;
	Quadrangle quad;
	Rectangle rect;
	Square square;
	Parallelogram paral;
	Rhomb rhomb;

	std::cout << tri.get_figure_name() << "\n�������: " << "a=" << tri.get_side_a() << " b=" << tri.get_side_b()
		<< " c=" << tri.get_side_c() << "\n" << "����: " << "�=" << tri.get_corner_A() << " B=" << tri.get_corner_B()
		<< " C=" << tri.get_corner_C() << "\n" << std::endl;

	std::cout << rig_tri.get_figure_name() << "\n�������: " << "a=" << tri.get_side_a() << " b=" << tri.get_side_b()
		<< " c=" << tri.get_side_c() << "\n" << "����: " << "�=" << tri.get_corner_A() << " B=" << tri.get_corner_B()
		<< " C=" << rig_tri.get_corner_C() << "\n" << std::endl;

	std::cout << isos_tri.get_figure_name() << "\n�������: " << "a=" << isos_tri.get_side_a() << " b=" << tri.get_side_b()
		<< " c=" << isos_tri.get_side_c() << "\n" << "����: " << "�=" << isos_tri.get_corner_A() << " B=" << tri.get_corner_B()
		<< " C=" << isos_tri.get_corner_C() << "\n" << std::endl;

	std::cout << eq_tri.get_figure_name() << "\n�������: " << "a=" << tri.get_side_a() << " b=" << tri.get_side_b()
		<< " c=" << tri.get_side_c() << "\n" << "����: " << "�=" << tri.get_corner_A() << " B=" << tri.get_corner_B()
		<< " C=" << tri.get_corner_C() << "\n" << std::endl;

	std::cout << quad.get_figure_name() << "\n�������: " << "a=" << tri.get_side_a() << " b=" << tri.get_side_b()
		<< " c=" << tri.get_side_c() << "\n" << "����: " << "�=" << tri.get_corner_A() << " B=" << tri.get_corner_B()
		<< " C=" << tri.get_corner_C() << "\n" << std::endl;

	std::cout << rect.get_figure_name() << "\n�������: " << "a=" << tri.get_side_a() << " b=" << tri.get_side_b()
		<< " c=" << tri.get_side_c() << "\n" << "����: " << "�=" << tri.get_corner_A() << " B=" << tri.get_corner_B()
		<< " C=" << tri.get_corner_C() << "\n" << std::endl;

	std::cout << square.get_figure_name() << "\n�������: " << "a=" << tri.get_side_a() << " b=" << tri.get_side_b()
		<< " c=" << tri.get_side_c() << "\n" << "����: " << "�=" << tri.get_corner_A() << " B=" << tri.get_corner_B()
		<< " C=" << tri.get_corner_C() << "\n" << std::endl;

	std::cout << paral.get_figure_name() << "\n�������: " << "a=" << tri.get_side_a() << " b=" << tri.get_side_b()
		<< " c=" << tri.get_side_c() << "\n" << "����: " << "�=" << tri.get_corner_A() << " B=" << tri.get_corner_B()
		<< " C=" << tri.get_corner_C() << "\n" << std::endl;

	std::cout << rhomb.get_figure_name() << "\n�������: " << "a=" << tri.get_side_a() << " b=" << tri.get_side_b()
		<< " c=" << tri.get_side_c() << "\n" << "����: " << "�=" << tri.get_corner_A() << " B=" << tri.get_corner_B()
		<< " C=" << tri.get_corner_C() << "\n" << std::endl;
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