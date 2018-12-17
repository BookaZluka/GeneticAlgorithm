#include <iostream>
#include "header.h"

int main()
{
    srand(unsigned(time(NULL)));

    ga_vector pop_alpha, pop_beta;
    ga_vector *population, *buffer;

    init_population(pop_alpha, pop_beta);
    population = &pop_alpha;
    buffer = &pop_beta;

    for (int i=0; i<GA_MAXITER; i++) {
        calc_fitness(*population);		// вычисляем пригодность
        sort_by_fitness(*population);		// сортируем популяцию
        print_best(*population);		// выводим лучшую популяцию

        if ((*population)[0].fitness == 0) break;

        mate(*population, *buffer);		// спариваем популяции
        swap(population, buffer);		// очищаем буферы
    }

    return 0;
}
