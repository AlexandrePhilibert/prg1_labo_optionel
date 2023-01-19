#ifndef PRG1_LABO_OPTIONEL_TEMPS_H
#define PRG1_LABO_OPTIONEL_TEMPS_H

template<typename T>
class Temps {
public:
   Temps(T h, T m, T s);

   T getHeure() const;
   T getMinute() const;
   T getSeconde() const;
private:
   T heure;
   T minute;
   T seconde;
};

#endif //PRG1_LABO_OPTIONEL_TEMPS_H
