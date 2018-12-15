#include "defectdata.h"
#include "defect.h"

DefectData::DefectData()
{

}

DefectData::DefectData(Defect *defect, Date occuredTime, Date fixedTime):
    defect(defect),
    occuredTime(occuredTime),
    fixedTime(fixedTime)
{

}
