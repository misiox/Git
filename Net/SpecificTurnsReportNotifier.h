/*
 * SpecificTurnsReportNotifier.h
 *
 *  Created on: 30 gru 2017
 *      Author: malot
 */

#ifndef SPECIFICTURNSREPORTNOTIFIER_H_
#define SPECIFICTURNSREPORTNOTIFIER_H_

#include <set>
#include <ReportNotifier.h>

class SpecificTurnsReportNotifier : public ReportNotifier {
private:
	std::set<int> _turns;
public:
	SpecificTurnsReportNotifier(std::set<int> turns);
	bool shouldGenerateReport(int time);
};


#endif /* SPECIFICTURNSREPORTNOTIFIER_H_ */
