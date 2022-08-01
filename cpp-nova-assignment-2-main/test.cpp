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
bool suite_TestStudent_init = false;
#include "test.h"

static TestStudent suite_TestStudent;

static CxxTest::List Tests_TestStudent = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestStudent( "test.h", 4, "TestStudent", suite_TestStudent, Tests_TestStudent );

static class TestDescription_suite_TestStudent_testCalcAverage : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestStudent_testCalcAverage() : CxxTest::RealTestDescription( Tests_TestStudent, suiteDescription_TestStudent, 7, "testCalcAverage" ) {}
 void runTest() { suite_TestStudent.testCalcAverage(); }
} testDescription_suite_TestStudent_testCalcAverage;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
