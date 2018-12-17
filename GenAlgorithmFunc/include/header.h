#ifndef GA7_HEADER_H
#define GA7_HEADER_H
double func(double x);

double mutation(double x0, double x1);  // мутация: генерация случайной величины

double inversion(double x, double eps);  // инверсия: поиск в окрестностях точки

void crossover(double *x, double eps, double x0, double x1);  // кроссовер: среднее арифметическое

void sort(double *x, double *y);  // сортировка

double genetic(double x0, double x1, double eps);  // поиск решения с использованием ГА

#endif //GA7_HEADER_H
