// Author    KMS - Martin Dubois, P. Eng.
// Copyright (C) 2022 KMS
// License   http ://www.apache.org/licenses/LICENSE-2.0
// Product   TWS - CPP
// File      CLASS/Form_Rectangle.h

#pragma once

// ===== CLASS ==============================================================
#include "Form.h"

class Form_Cercle : public Form
{

public:

    Form_Cercle();

    // ===== Form ===========================================================

    virtual ~Form_Cercle();

    virtual double GetArea() const;
    virtual double GetDiameter() const;

    virtual unsigned int GetInfoCount() const;
    virtual const char* GetInfoName(unsigned int aIndex) const;

    virtual void SetInfo(unsigned int aIndex, double aValue_mm);

private:

    double mRadius_mm;

};
