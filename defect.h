#ifndef DEFECT_H
#define DEFECT_H

#include <vector>
#include "intricacy.h"
#include "defectdata.h"
#include "avto.h"

enum FactorOfLikelihood {LfixedL, LonTimeL, LonMileageL, LonPreviousDefectsL};
enum FactorOfIntricacy  {IfixedI, IonTimeI, IonMileageI, IonMarkI};


using namespace std;

class Defect
{
private:
    int type;

    double likelihood;
    Intricacy intricacy;

			FactorOfLikelihood factorOfLikelihood;
			FactorOfIntricacy factorOfIntricacy;

			double LFixedL(); double LTimeL(int yearofissue); double LMileageL(int mileage); double LPreviousDefectsL(vector<DefectData>);

								Intricacy IFixedI(); Intricacy ITimeI(int yearofissue); Intricacy IMileageI(int mileage); Intricacy IMarkI(String mark);
	
public:
    Defect();
    Defect(int type);

    void calcLikelihood(const Avto&);
    void calcIntricacy(const Avto&);


};

#endif // DEFECT_H
