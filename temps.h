#ifndef PRG1_LABO_OPTIONEL_TEMPS_H
#define PRG1_LABO_OPTIONEL_TEMPS_H

#include <string>
#include <iostream>

template<typename T>
class Temps;

template<typename T>
std::ostream &operator<<(std::ostream &os, const Temps<T> &t);

template<typename T>
class Temps {
    friend std::ostream &operator<<<T>(std::ostream &os, const Temps<T> &t);

public:
    Temps(T h, T m, T s);

    Temps(const Temps<T> &t);

    Temps(const T &s);

    T getHeure() const;

    T getMinute() const;

    T getSeconde() const;

    void setHeures(T h);

    void setMinute(T m);

    void setSecondes(T s);

    Temps<T> &operator=(const Temps<T> &other);

    bool operator==(const Temps<T> &t);

    bool operator!=(const Temps<T> &t);

    Temps<T> operator+(const Temps<T> &t);

    Temps<T> &operator+=(const Temps<T> &t);

    Temps<T> operator-(const Temps<T> &t);

    Temps<T> &operator-=(const Temps<T> &t);

    explicit operator float() const;

    explicit operator double() const;

    explicit operator long double() const;

    explicit operator long long() const;

    explicit operator std::string() const;

private:
    T heure;
    T minute;
    T seconde;
};

#include "temps_impl.h"

#endif //PRG1_LABO_OPTIONEL_TEMPS_H
