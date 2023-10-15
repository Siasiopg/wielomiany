struct polynomial
{
    int level;
    double *values;
};

polynomial add(polynomial a, polynomial b);
polynomial sub(polynomial a, polynomial b);
polynomial mult(polynomial a, polynomial b);
int get_level(polynomial a);
double get_value(polynomial a, int n);