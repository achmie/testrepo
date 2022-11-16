#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

//! \defgroup numFunctions Funkcje numeryczne

//! \defgroup statFunctions Funkcje statystyczne


//! \addtogroup numFunctions
//! \{

//! \brief Funkcja wytznaczająca piewrwiastek trzeciego stopnia.
double fun3(double x);

//! \brief Funkcja wyznaczająca trzecią potęgę.
//!
//! Jeżeli \f$ x \f$ jest argumentem funkcji, to w mwyniku jej działania 
//! otrzymujemy wartość \f$ x^3 \f$.
double pow3(double x);

//! \}


//! \addtogroup statFunctions
//! \{

//! \brief Funkcja wyznaczająca średnią arytmetyczną.
//!
//! Jeżeli \f$ x_0, x_1, \dots, x_{n-1} \f$ jest próbą, to funkcja wyznacza 
//! średnią arytmetyczną z tej próby za pomocą wzoru:
//! \f[ \bar{x} = \frac{x_0+x_1+\cdots+x_{n-1}}{n}. \f]
double avg(double *x, int n);

//! \brief Funkcja wyznaczająca wariancję.
//! \f[
//!    |I_2|=\left| \int_{0}^T \psi(t) 
//!             \left\{ 
//!                u(a,t)-
//!                \int_{\gamma(t)}^a 
//!                \frac{d\theta}{k(\theta,t)}
//!                \int_{a}^\theta c(\xi)u_t(\xi,t)\,d\xi
//!             \right\} dt
//!          \right|
//!  \f]
double var(double *x, int n);

//! \}

#endif
