#include "defect.h"

DEFECT::DEFECT()
{

}

DEFECT::DEFECT(int type):
    type(type)
{

}


void DEFECT::calcIntricacy(const Avto &avto) {
	
	
		if {
			(factorOfIntricacy == IfixedI) intricacy = IFixedI();
		}
	
		if { (factorOfIntricacy == IonTimeI) intricacy = ITimeI(avto.yearofissue);
		}
	
		if { (factorOfIntricacy == IonMileageI) intricacy = IMileageI(avto.mileage);
		}
	
		if { (factorOfIntricacy == IonMarkI) intricacy = IMarkI(avto.mark);  
		}
		
	}

void DEFECT::calcLikelihood(const Avto &avto) {
	
	
		if { (factorOfLikelihood == LfixedL) likelihood = LFixedL();
		}
	
		if { (factorOfLikelihood == LonTimeL) likelihood = LTimeL(avto.yearofissue);
		}
		
		if { (factorOfLikelihood == LonMileageL) likelihood = LMileageL(avto.mileage);
		}
	
		if {(factorOfLikelihood == LonPreviousDefectsL) likelihood = LPreviousdefectsL(avto.defectsData);
		}
	
}

Intricacy DEFECT::IFixedI()
{
    return Intricacy(10, 42);
}

Intricacy DEFECT::ITimeI(int yearofissue)
{
    return Intricacy(5,11);
}

Intricacy DEFECT::IMileageI(int mileage)
{
    return Intricacy(40,150);
}

Intricacy DEFECT::IMarkI(String mark)
{
    return Intricacy(2, 13);
}

double DEFECT::LFixed()
{
    return 0.5;
}

double DEFECT::LTime(int yearofissue)
{
    return 0.8;
}

double DEFECT::LMileage(int mileage)
{
    return 0.2;
}

double DEFECT::LPrevDEFECTs(QVector<DEFECTData>)
{
    return 0.1;
}









