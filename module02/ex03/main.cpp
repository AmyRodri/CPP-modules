/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 01:42:19 by kamys             #+#    #+#             */
/*   Updated: 2026/02/23 02:05:27 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

void testPoint(std::string name, Point const a, Point const b, Point const c, Point const p)
{
	std::cout << "Teste: " << name << std::endl;

	std::cout << "Ponto (" 
			  << p.getX().toFloat() << ", " 
			  << p.getY().toFloat() << ") -> ";

	if (bsp(a, b, c, p))
		std::cout << "DENTRO do triangulo";
	else
		std::cout << "FORA do triangulo";

	std::cout << "\n--------------------------\n";
}

int main(void)
{
	// 🔺 triangulo base
	Point a(0, 0);
	Point b(10, 0);
	Point c(5, 10);

	std::cout << "Triangulo:\n";
	std::cout << "A(0,0), B(10,0), C(5,10)\n";
	std::cout << "==========================\n\n";

	// ✅ ponto dentro
	Point inside(5, 5);

	// ❌ ponto fora
	Point outside(10, 10);

	// ⚠️ ponto na aresta
	Point edge(5, 0);

	// ⚠️ ponto exatamente no vertice
	Point vertex(0, 0);

	// ❌ bem longe
	Point far(100, 100);

	Point	t(5, 9.9999999f);

	testPoint("MyTeste", a, b, c, t);
	testPoint("Dentro", a, b, c, inside);
	testPoint("Fora", a, b, c, outside);
	testPoint("Na aresta (deve dar FALSE)", a, b, c, edge);
	testPoint("No vertice (deve dar FALSE)", a, b, c, vertex);
	testPoint("Muito longe", a, b, c, far);

	return 0;
}
