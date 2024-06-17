#include <iostream>
#include <vector>
#include <cmath>
std::vector<int> obtener_lista_primos(int numero) {
	std::vector<int> lista_de_primos;
	for (int i = 2; i < numero; i++)
	{
		lista_de_primos.push_back(i);
	}
	int primo_actual = 2;
	int indice = 0;
	while (primo_actual <= std::sqrt(numero))
	{
		primo_actual = lista_de_primos[indice];
		for (unsigned int i = indice+1; i < lista_de_primos.size(); i++)
		{
			if (lista_de_primos[i] % primo_actual == 0) {
				lista_de_primos.erase(lista_de_primos.begin()+i);
				i--;
			}
		}
		indice++;
		
	}
	return lista_de_primos;
}
int main()
{
	std::vector<int> lista_de_primos = obtener_lista_primos(57);
	for (unsigned int i = 0; i < lista_de_primos.size(); i++)
	{
		std::cout << lista_de_primos[i] << ",";
	}
	std::cout  << std::endl;
}
