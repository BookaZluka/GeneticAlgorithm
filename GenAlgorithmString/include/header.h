#ifndef GA2_HEADER_H
#define GA2_HEADER_H
#include <vector>
#include <string>

#define GA_POPSIZE		2048		// размер популяции
#define GA_MAXITER		16384		// максимальное число итераций
#define GA_ELITRATE		0.10f		// элитарность
#define GA_MUTATIONRATE	0.25f		// мутации
#define GA_MUTATION		RAND_MAX * GA_MUTATIONRATE
#define GA_TARGET		std::string("GenAlg example")

struct ga_struct
{
    std::string str;					// строка
    unsigned int fitness;			// пригодность
};

typedef std::vector<ga_struct> ga_vector;			// для краткости

void init_population(ga_vector &population,ga_vector &buffer );

void calc_fitness(ga_vector &population);

bool fitness_sort(ga_struct x, ga_struct y);

void sort_by_fitness(ga_vector &population);

void elitism(ga_vector &population, ga_vector &buffer, int esize );

void mutate(ga_struct &member);

void mate(ga_vector &population, ga_vector &buffer);

void print_best(ga_vector &gav);

void swap(ga_vector *&population, ga_vector *&buffer);
#endif //GA2_HEADER_H
