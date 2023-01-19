#ifndef PRG1_LABO_OPTIONEL_TEMPS_IMPL_H
#define PRG1_LABO_OPTIONEL_TEMPS_IMPL_H

#include <iomanip>
#include <sstream>

#include "temps.h"

template<typename T>
Temps<T>::Temps(T h, T m, T s): heure(h), minute(m), seconde(s) {}


template<typename T>
Temps<T>::Temps(const Temps<T> &t) {
   heure = t.heure;
   minute = t.minute;
   seconde = t.seconde;
}

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
   return os << (std::string) t;
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
Temps<T>::operator std::string() const {
   std::stringstream sstream;

   sstream << std::setfill('0') << std::setw(2) << heure << ":" << std::setw(2) << minute << ":" << std::setw(2) << seconde;

   return sstream.str();
}

#endif //PRG1_LABO_OPTIONEL_TEMPS_IMPL_H
