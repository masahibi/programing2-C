#ifndef C_C___DOUBLEARRAY_H
#define C_C___DOUBLEARRAY_H


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

    DoubleArray& operator=(const DoubleArray& orig);

    ~DoubleArray();
};


#endif //C_C___DOUBLEARRAY_H
