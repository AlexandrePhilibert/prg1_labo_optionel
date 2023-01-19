#ifndef PRG1_LABO_OPTIONEL_TEMPS_IMPL_H
#define PRG1_LABO_OPTIONEL_TEMPS_IMPL_H

#include <iomanip>

#include "temps.h"

template<typename T>
Temps<T>::Temps(T h, T m, T s): heure(h), minute(m), seconde(s) {}

template<typename T>
T Temps<T>::getHeure() const {
   return heure;
}

template<typename T>
T Temps<T>::getMinute() const {
   return minute;
};

template<typename T>
T Temps<T>::getSeconde() const {
   return seconde;
};

template<typename T>
void Temps<T>::setHeures(T h) {
   heure = h;
};

template<typename T>
void Temps<T>::setMinute(T m) {
   minute = m;
};

template<typename T>
void Temps<T>::setSecondes(T s) {
   seconde = s;
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Temps<T>& t) {
   return os << std::setfill('0') << std::setw(2) << t.heure << ":" << std::setw(2) << t.minute << ":" << std::setw(2) << t.seconde;
}

template<typename T>
Temps<T> Temps<T>::operator+(const Temps<T> &t) {
   return Temps(heure + t.heure, minute + t.minute, seconde + t.seconde);
}

template<typename T>
Temps<T>& Temps<T>::operator+=(const Temps<T> &t) {
   return *this = *this + t;
}

template<typename T>
Temps<T> Temps<T>::operator-(const Temps<T> &t) {
   return Temps(heure - t.heure, minute - t.minute, seconde - t.seconde);
}

template<typename T>
Temps<T>& Temps<T>::operator-=(const Temps<T> &t) {
   return *this = *this - t;
}

template<typename T>
Temps<T> &Temps<T>::operator=(const Temps<T> &other) {
    heure = other.heure;
    minute = other.minute;
    seconde = other.seconde;
    return *this;
}

template<typename T>
bool Temps<T>::operator==(const Temps<T> &t) {
    return heure == t.heure
           && minute == t.minute
           && seconde == t.seconde;
}

template<typename T>
bool Temps<T>::operator!=(const Temps<T> &t) {
    return !(*this == t);
}


template<typename T>
Temps<T>::operator long double() const {
    return heure + (minute / 60.0l) + (seconde / 3600.0l);
}

template<typename T>
Temps<T>::operator float() const {
    return float((long double) *this);
}

template<typename T>
Temps<T>::operator double() const {
    return double((long double) *this);
}

template<typename T>
Temps<T>::operator long long() const {
    return heure * 3600ll + minute * 60ll + seconde;
}


#endif //PRG1_LABO_OPTIONEL_TEMPS_IMPL_H
