#ifndef DEFECTDATA_H
#define DEFECTDATA_H

#include <Date>

class Defect;

class DefectData
{
public:
    DefectData();
    DefectData(Defect* defect, Date occuredTime, Date fixedTime);

private:
    Defect* defect;

    Date occuredTime;
    Date fixedTime;
};

#endif // DEFECTDATA_H
