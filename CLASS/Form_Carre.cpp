// Author    KMS - Martin Dubois, P. Eng.
// Copyright (C) 2022 KMS
// License   http ://www.apache.org/licenses/LICENSE-2.0
// Product   TWS - CPP
// File      CLASS/Form_Rectangle.cpp

// ===== C ==================================================================
#include <assert.h>

// ===== CLASS ==============================================================
#include "Form_Carre.h"

// Public
// //////////////////////////////////////////////////////////////////////////

Form_Carre::Form_Carre() :  mSide_mm(1.0)
{
}

// ===== Form ===============================================================

Form_Carre::~Form_Carre()
{
}

double Form_Carre::GetArea() const
{
    return mSide_mm * mSide_mm;
}

double Form_Carre::GetDiameter() const
{
    return 4 * mSide_mm;
}

unsigned int Form_Carre::GetInfoCount() const
{
    return 1;
}

const char* Form_Carre::GetInfoName(unsigned int aIndex) const
{
    const char* lResult = NULL;

    switch (aIndex)
    {
    case 0: lResult = "le cote"; break;

    default: assert(false);
    }

    return lResult;
}

void Form_Carre::SetInfo(unsigned int aIndex, double aValue_mm)
{
    switch (aIndex)
    {
    case 0: mSide_mm = aValue_mm; break;

    default: assert(false);
    }
}
