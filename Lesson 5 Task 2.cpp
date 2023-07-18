#include <iostream>

class Figure // класс Фигура
{
protected:
	std::string figure_name;

public:
	Figure() { figure_name = "Фигура"; }

	std::string get_figure_name() { return figure_name; }

	virtual void print_myself() { std::cout << get_figure_name() << std::endl; }
};

class Triangle : public Figure // класс Треугольник
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
		figure_name = "Треугольник";
		side_a = 10;
		side_b = 20;
		side_c = 30;
		corner_A = 50;
		corner_B = 60;
		corner_C = 70;
	}

	Triangle(int a, int b, int c, int A, int B, int C) {
		figure_name = "Треугольник";
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
		std::cout << get_figure_name() << "\nСтороны: " << "a=" << get_side_a() << " b=" << get_side_b()
			<< " c=" << get_side_c() << "\n" << "Углы: " << "А=" << get_corner_A() << " B=" << get_corner_B()
			<< " C=" << get_corner_C() << "\n" << std::endl;
	}
};

class RightTriangle : public Triangle // класс Прямоугольный треугольник
{
public:
	RightTriangle(int a, int b, int c, int A, int B) {
		figure_name = "Прямоугольный треугольник";
		this->side_a = a;
		this->side_b = b;
		this->side_c = c;
		this->corner_A = A;
		this->corner_B = B;
		this->corner_C = 90;
	}
};

class IsoscelesTriangle : public Triangle // класс Равнобедренный треугольник
{
public:
	IsoscelesTriangle(int b, int c, int B, int C) {
		figure_name = "Равнобедренный треугольник";
		this->side_a = this->side_c = c;
		this->side_b = b;
		this->corner_A = this->corner_C = C;
		this->corner_B = B;
	}
};

class EquilateralTriangle : public Triangle // класс Равносторонний треугольник
{
public:
	EquilateralTriangle(int c) {
		figure_name = "Равносторонний треугольник";
		this->side_a = this->side_b = this->side_c = c;
		this->corner_A = this->corner_B = this->corner_C = 60;
	}
};

class Quadrangle : public Figure // класс Четырёхугольник
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
		figure_name = "Четырёхугольник";
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
		figure_name = "Четырёхугольник";
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
		std::cout << get_figure_name() << "\nСтороны: " << "a=" << get_side_a() << " b=" << get_side_b()
			<< " c=" << get_side_c() << " d=" << get_side_d() << "\n"
			<< "Углы: " << "А=" << get_corner_A() << " B=" << get_corner_B()
			<< " C=" << get_corner_C() << " D=" << get_corner_D() << "\n" << std::endl;
	}
};

class Rectangle : public Quadrangle // класс Прямоугольник
{
public:
	Rectangle(int c, int d) {
		figure_name = "Прямоугольник";
		this->side_a = this->side_c = c;
		this->side_b = this->side_d = d;
		this->corner_A = this->corner_B = this->corner_C = this->corner_D = 90;
	}
};

class Square : public Quadrangle // класс Квадрат
{
public:
	Square(int d) {
		figure_name = "Квадрат";
		this->side_a = this->side_b = this->side_c = this->side_d = d;
		this->corner_A = this->corner_B = this->corner_C = this->corner_D = 90;
	}
};

class Parallelogram : public Quadrangle // класс Параллелограмм
{
public:
	Parallelogram(int c, int d, int C, int D) {
		figure_name = "Параллелограмм";
		this->side_a = this->side_c = c;
		this->side_b = this->side_d = d;
		this->corner_A = this->corner_C = C;
		this->corner_B = this->corner_D = D;
	}
};

class Rhomb : public Quadrangle // класс Ромб
{
public:
	Rhomb(int d, int C, int D) {
		figure_name = "Ромб";
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
Задача 2. Фигуры.Стороны и углы
В этом задании вы усложните иерархию классов для усложнённой предметной области.

У вас появляется информация о длине сторон и углах ваших фигур, а также несколько более конкретных фигур.Теперь в треугольнике вы должны хранить информацию о длине всех его трёх сторон(a, b, c) и значениях его трёх углов(A, B, C).В четырёхугольнике вы храните информацию о длине его четырёх сторон(a, b, c, d) и значениях его четырёх углов(A, B, C, D).

Также у вас появляются более конкретные фигуры :

прямоугольный треугольник(угол C всегда равен 90);
равнобедренный треугольник(стороны a и c равны, углы A и C равны);
равносторонний треугольник(все стороны равны, все углы равны 60);
прямоугольник(стороны a, c и b, d попарно равны, все углы равны 90);
квадрат(все стороны равны, все углы равны 90);
параллелограмм(стороны a, c и b, d попарно равны, углы A, C и B, D попарно равны);
ромб(все стороны равны, углы A, C и B, D попарно равны).
Вы должны иметь возможность узнать у каждой фигуры длины её сторон и значения её углов, но извне вы не должны быть способны изменить длины сторон и углы.

Не должно быть возможности создать фигуры, не удовлетворяющие перечисленным условиям.Например, нельзя создать квадрат с разными углами.Геометрические соотношения проверять не нужно.Например, сумма углов в треугольнике может быть не равна 180.

Задача: спроектировать и реализовать классы, описывающие предметную область.Продемонстрируйте их работу : создайте по одному экземпляру каждой фигуры и выведите на экран информацию о длинах её сторон и величине её углов.Значения используйте произвольные.

Инициализацию длин сторон и величин углов нужно выполнить с помощью вызова базовых конструкторов.

Для вывода информации о фигуре создайте функцию print_info, которая будет принимать в качестве аргумента указатель на базовый класс фигуры.

Пример работы программы
Консоль
Треугольник :
Стороны: a = 10 b = 20 c = 30
Углы : A = 50 B = 60 C = 70

Прямоугольный треугольник :
Стороны: a = 10 b = 20 c = 30
Углы : A = 50 B = 60 C = 90

Равнобедренный треугольник :
Стороны: a = 10 b = 20 c = 10
Углы : A = 50 B = 60 C = 50

Равносторонний треугольник :
Стороны: a = 30 b = 30 c = 30
Углы : A = 60 B = 60 C = 60

Четырёхугольник :
Стороны : a = 10 b = 20 c = 30 d = 40
Углы : A = 50 B = 60 C = 70 D = 80

Прямоугольник :
Стороны : a = 10 b = 20 c = 10 d = 20
Углы : A = 90 B = 90 C = 90 D = 90

Квадрат :
Стороны : a = 20 b = 20 c = 20 d = 20
Углы : A = 90 B = 90 C = 90 D = 90

Параллелограмм :
Стороны : a = 20 b = 30 c = 20 d = 30
Углы : A = 30 B = 40 C = 30 D = 40

Ромб :
Стороны : a = 30 b = 30 c = 30 d = 30
Углы : A = 30 B = 40 C = 30 D = 40
*/