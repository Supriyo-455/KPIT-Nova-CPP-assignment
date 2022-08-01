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

static class TestDescription_suite_TestEmployeeClasses_testSortLaptops : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEmployeeClasses_testSortLaptops() : CxxTest::RealTestDescription( Tests_TestEmployeeClasses, suiteDescription_TestEmployeeClasses, 7, "testSortLaptops" ) {}
 void runTest() { suite_TestEmployeeClasses.testSortLaptops(); }
} testDescription_suite_TestEmployeeClasses_testSortLaptops;

static class TestDescription_suite_TestEmployeeClasses_testMinCostLaptop : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEmployeeClasses_testMinCostLaptop() : CxxTest::RealTestDescription( Tests_TestEmployeeClasses, suiteDescription_TestEmployeeClasses, 20, "testMinCostLaptop" ) {}
 void runTest() { suite_TestEmployeeClasses.testMinCostLaptop(); }
} testDescription_suite_TestEmployeeClasses_testMinCostLaptop;

static class TestDescription_suite_TestEmployeeClasses_testMaxCostLaptop : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEmployeeClasses_testMaxCostLaptop() : CxxTest::RealTestDescription( Tests_TestEmployeeClasses, suiteDescription_TestEmployeeClasses, 30, "testMaxCostLaptop" ) {}
 void runTest() { suite_TestEmployeeClasses.testMaxCostLaptop(); }
} testDescription_suite_TestEmployeeClasses_testMaxCostLaptop;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
