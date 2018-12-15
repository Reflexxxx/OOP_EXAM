#ifndef AVTO_H
#define AVTO_H

#include <String>
#include <Vector>
#include "defectdata.h"


class Avto   {

	private:
		String mark;
		String model;
		int yearofissue;
		int mileage;

		Vector <DefectData> defectsData;

		friend Defect;
	
	public:
		Avto();
		Avto(String mark, String model, int yearofissue, int mileage);
};

#endif // AVTO_H
