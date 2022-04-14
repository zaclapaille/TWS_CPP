
// Author    KMS - Martin Dubois, P. Eng.
// Copyright (C) 2022 KMS
// License   http://www.apache.org/licenses/LICENSE-2.0
// Product   TWS - CPP
// File      NOON0/AutoPilote.cpp

#include "Component.h"

// ===== MOON0 ==============================================================
#include "AutoPilote.h"
#include "Motor.h"
#include <math.h>

// Public
// //////////////////////////////////////////////////////////////////////////

AutoPilote::AutoPilote() : mEnable(false), mMotor(NULL), mTank(NULL)
{
}

void AutoPilote::Disable() { mEnable = false; }
void AutoPilote::Enable () { mEnable = true ; }

bool AutoPilote::IsEnabled() const { return mEnable; }

void AutoPilote::SetMotor(Motor* aMotor) { assert(NULL != aMotor); mMotor = aMotor; }
void AutoPilote::SetTank (Tank * aTank ) { assert(NULL != aTank ); mTank  = aTank ; }

void AutoPilote::Simulate(double aAltitude_m, double aSpeed_m_s)
{
    assert(0.0 < aAltitude_m);

    if (mEnable)
    {
        
        double targetSpeed = sqrt(aAltitude_m) * -1;
        if (targetSpeed >= aSpeed_m_s) {
            (*mMotor)++;
        }
        if (targetSpeed <= aSpeed_m_s) {
            (*mMotor)--;
        }
    }
}
std::ostream& operator<<(std::ostream& aOut, const AutoPilote& aAutoPilote)
{

    std::string Mode = aAutoPilote.IsEnabled() ? "Auto  " : "Manual";
    aOut << Mode;
    

    return aOut;
}

