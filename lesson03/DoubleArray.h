#ifndef DOUBLEARRAY_H_
#define DOUBLEARRAY_H_


class DoubleArray {
private:
    int size;
    double *data;
    int pos;

public:
    DoubleArray(int sz);

    DoubleArray();

    DoubleArray(const DoubleArray &orig);

    void add(double d);

    void print();

    void remove(int idx);

    void remove();

    void insert(int idx, double d);

    ~DoubleArray();
};

#endif /*DOUBLEARRAY_H*/
