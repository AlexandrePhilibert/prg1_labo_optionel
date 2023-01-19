#ifndef PRG1_LABO_OPTIONEL_TEMPS_IMPL_H
#define PRG1_LABO_OPTIONEL_TEMPS_IMPL_H

#include "temps.h"

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

#endif //PRG1_LABO_OPTIONEL_TEMPS_IMPL_H
