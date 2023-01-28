#ifndef FILM_H
#define FILM_H
#include <iostream>

struct Ido {
	int ora; 
	int perc;
	int mp;

	/// <summary>
	/// Paraméter nélküli konstruktor
	/// </summary>
	Ido():ora(0),perc(0),mp(0) {};
	/// <summary>
	/// Adott idõt beállító konstruktor
	/// </summary>
	/// <param name="ora"></param>
	/// <param name="perc"></param>
	/// <param name="mp"></param>
	Ido(int ora, int perc, int mp):ora(ora),perc(perc),mp(mp){}

};
std::ostream& operator<<(std::ostream& os, const Ido& t) {
	return os << t.ora << ":" << t.perc << ":" << t.mp;
}

class Film
{
protected:
	const char* cim; /// A film címe
	int kiadev; /// A film kiadási éve
	Ido lejido; /// A film lejátszási ideje
public:
	Film(const char* cim, int kiadev,const Ido& lejido = Ido()):cim(cim),kiadev(kiadev),lejido(lejido){}

	virtual std::ostream& print(std::ostream& os) const {
		return os << cim << " Kiadas eve: " << kiadev << " Lejatszasi ido: " << lejido;
	};
};

#endif FILM_H


