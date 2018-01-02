/*
 * IntervalReportNotifier.h
 *
 *  Created on: 30 gru 2017
 *      Author: malot
 */

#ifndef INTERVALREPORTNOTIFIER_H_
#define INTERVALREPORTNOTIFIER_H_

#include "ReportNotifier.h"

class IntervalReportNotifier : public ReportNotifier {
private:
	int _interval;
public:
	IntervalReportNotifier(int interval);
	bool shouldGenerateReport(int time);
};


#endif /* INTERVALREPORTNOTIFIER_H_ */
