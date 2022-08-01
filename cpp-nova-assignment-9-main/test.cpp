/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_TestEmployeeClasses_init = false;
#include "testbitmap.h"

static TestEmployeeClasses suite_TestEmployeeClasses;

static CxxTest::List Tests_TestEmployeeClasses = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestEmployeeClasses( "testbitmap.h", 4, "TestEmployeeClasses", suite_TestEmployeeClasses, Tests_TestEmployeeClasses );

static class TestDescription_suite_TestEmployeeClasses_testWageEmployeeCalcNetSalary : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEmployeeClasses_testWageEmployeeCalcNetSalary() : CxxTest::RealTestDescription( Tests_TestEmployeeClasses, suiteDescription_TestEmployeeClasses, 7, "testWageEmployeeCalcNetSalary" ) {}
 void runTest() { suite_TestEmployeeClasses.testWageEmployeeCalcNetSalary(); }
} testDescription_suite_TestEmployeeClasses_testWageEmployeeCalcNetSalary;

static class TestDescription_suite_TestEmployeeClasses_testIsWageEmployeeTaxable : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEmployeeClasses_testIsWageEmployeeTaxable() : CxxTest::RealTestDescription( Tests_TestEmployeeClasses, suiteDescription_TestEmployeeClasses, 13, "testIsWageEmployeeTaxable" ) {}
 void runTest() { suite_TestEmployeeClasses.testIsWageEmployeeTaxable(); }
} testDescription_suite_TestEmployeeClasses_testIsWageEmployeeTaxable;

static class TestDescription_suite_TestEmployeeClasses_testSalesPersonCalcNetSalary : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEmployeeClasses_testSalesPersonCalcNetSalary() : CxxTest::RealTestDescription( Tests_TestEmployeeClasses, suiteDescription_TestEmployeeClasses, 19, "testSalesPersonCalcNetSalary" ) {}
 void runTest() { suite_TestEmployeeClasses.testSalesPersonCalcNetSalary(); }
} testDescription_suite_TestEmployeeClasses_testSalesPersonCalcNetSalary;

static class TestDescription_suite_TestEmployeeClasses_testIsSalesPersonTaxable : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEmployeeClasses_testIsSalesPersonTaxable() : CxxTest::RealTestDescription( Tests_TestEmployeeClasses, suiteDescription_TestEmployeeClasses, 25, "testIsSalesPersonTaxable" ) {}
 void runTest() { suite_TestEmployeeClasses.testIsSalesPersonTaxable(); }
} testDescription_suite_TestEmployeeClasses_testIsSalesPersonTaxable;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
