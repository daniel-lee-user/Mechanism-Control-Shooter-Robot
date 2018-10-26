/*
 * NetworkTables.cpp
 *
 *  Created on: Oct 25, 2018
 *      Author: Admin
 */

#include "NetworkTables.h"

NetworkTables::NetworkTables() {
	// TODO Auto-generated constructor stub

}

NetworkTables::~NetworkTables() {
	// TODO Auto-generated destructor stub
}

double NetworkTables::getDistanceCV() {
	return nt::NetworkTableInstance::GetDefault().GetEntry("Distance").GetDouble(-1);
}

double NetworkTables::getAngleCV() {
	return nt::NetworkTableInstance::GetDefault().GetEntry("Angle").GetDouble(-1);
}
