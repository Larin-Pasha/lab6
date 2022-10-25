#include "pch.h"
#include <utility>
#include <limits.h>
#include "Fazzynumber.h"
#include <iostream>
using namespace std;

Fazzynumber Fazzynumber::Init(double X, double xi, double xr)
{
    Fazzynumber tmp;
    tmp.A = X;
    tmp.ai = xi;
    tmp.ar = xr;
    return tmp;
}

Fazzynumber Fazzynumber::Read()
{
    Fazzynumber tmp;
    cin >> tmp.A;
    cin >> tmp.ai;
    cin >> tmp.ar;
    return tmp;
}

void Fazzynumber::Display(Fazzynumber Z)
{
    cout << Z.ai << "," << Z.A << "," << Z.ar << endl;
}

void Fazzynumber::Display_error1(Fazzynumber Z, Fazzynumber D)
{
    if (D.A > 0 || D.A - D.ai > 0)
    {
        cout << Z.ai << "," << Z.A << "," << Z.ar << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
}

void Fazzynumber::Display_error2(Fazzynumber Z, Fazzynumber D)
{
    if (D.A > 0 || (D.A - D.ai) > 0)
    {
        cout << Z.ai << "," << Z.A << "," << Z.ar << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
}

Fazzynumber Fazzynumber::toString(Fazzynumber Z)
{
    char str = (char)Z.A + (char)Z.ai + (char)Z.ar;
    return Fazzynumber();
}

Fazzynumber Fazzynumber::Sum(Fazzynumber Z, Fazzynumber D)
{
    Fazzynumber tmp;
    tmp.ai = Z.A + D.A - Z.ai - D.ar;
    tmp.A = Z.A + D.A;
    tmp.ar = Z.A + D.A + Z.ar + D.ar;
    return tmp;
}

Fazzynumber Fazzynumber::subtract(Fazzynumber Z, Fazzynumber D)
{
    Fazzynumber tmp;
    tmp.ai = Z.A - D.A - Z.ai - D.ar;
    tmp.A = Z.A - D.A;
    tmp.ar = Z.A - D.A + Z.ar + D.ar;
    return tmp;
}

Fazzynumber Fazzynumber::multiplication(Fazzynumber Z, Fazzynumber D)
{
    Fazzynumber tmp;
    tmp.ai = Z.A * D.A - D.A * Z.ai - Z.A * D.ai + Z.ai * D.ai;
    tmp.A = Z.A * D.A;
    tmp.ar = Z.A * D.A + D.A * Z.ai + Z.A * D.ai + Z.ai * D.ai;
    return tmp;
}

Fazzynumber Fazzynumber::inverse(Fazzynumber Z)
{
    Fazzynumber tmp;
    if (Z.A > 0 || Z.A - Z.ai > 0)
    {
        tmp.ai = 1 / (Z.A + Z.ar);
        tmp.A = 1 / Z.A;
        tmp.ar = 1 / (Z.A - Z.ai);
    }
    return tmp;
}

Fazzynumber Fazzynumber::division(Fazzynumber Z, Fazzynumber D)
{
    Fazzynumber tmp;
    if (D.A > 0 || (D.A - D.ai) > 0)
    {
        tmp.ai = (Z.A - Z.ai) / (D.A + D.ar);
        tmp.A = Z.A / D.A;
        tmp.ar = (Z.A + Z.ar) / (D.A - D.ar);
    }
    return tmp;
}

