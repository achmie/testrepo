#ifndef __INFINITY_H__
#define __INFINITY_H__

//! \brief Klasa reprezentująca ciągi dowolnej długości.
//!
//!
class Infinity
{
public:
	//! \brief Konstruktor domyślny
	//!
	//! Konstruktor z parametrem domyślnym \a n. Konstruktor tworzy 
	//! ciąg zer o zadanej długości.
	//! \param[in] n - długość tworzonego ciągu zer. 
	Infinity(int n = 0);

private:
	//! Długość zdefiniowanego ciągu.
	int mN;
	//! Tablica przechowująca elementy ciągu.
	double mT;
};

#endif
