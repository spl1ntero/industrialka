#ifndef RATIONAL_H
#define RATIONAL_H

class rational {
public:
    rational(int a1 = 0, int b1 = 1);
    void set(int a1, int b1);
    void show() const;
private:
    int a;
    int b;
};

#endif