/*
 * NetworkTables.h
 *
 *  Created on: Oct 25, 2018
 *      Author: Admin
 */

#ifndef UTILITIES_NETWORKTABLES_H_
#include "NetworkTables/NetworkTableInstance.h"
#define UTILITIES_NETWORKTABLES_H_

class NetworkTables {
public:
	NetworkTables();
	virtual ~NetworkTables();
	static double getDistanceCV();
	static double getAngleCV();
};

#endif /* UTILITIES_NETWORKTABLES_H_ */
