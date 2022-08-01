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
bool suite_calcTestSuite_init = false;
#include "testbitmap.h"

static calcTestSuite suite_calcTestSuite;

static CxxTest::List Tests_calcTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_calcTestSuite( "testbitmap.h", 4, "calcTestSuite", suite_calcTestSuite, Tests_calcTestSuite );

static class TestDescription_suite_calcTestSuite_testpush : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_calcTestSuite_testpush() : CxxTest::RealTestDescription( Tests_calcTestSuite, suiteDescription_calcTestSuite, 7, "testpush" ) {}
 void runTest() { suite_calcTestSuite.testpush(); }
} testDescription_suite_calcTestSuite_testpush;

static class TestDescription_suite_calcTestSuite_testpop : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_calcTestSuite_testpop() : CxxTest::RealTestDescription( Tests_calcTestSuite, suiteDescription_calcTestSuite, 16, "testpop" ) {}
 void runTest() { suite_calcTestSuite.testpop(); }
} testDescription_suite_calcTestSuite_testpop;

static class TestDescription_suite_calcTestSuite_testpeep : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_calcTestSuite_testpeep() : CxxTest::RealTestDescription( Tests_calcTestSuite, suiteDescription_calcTestSuite, 25, "testpeep" ) {}
 void runTest() { suite_calcTestSuite.testpeep(); }
} testDescription_suite_calcTestSuite_testpeep;

static class TestDescription_suite_calcTestSuite_testisfull : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_calcTestSuite_testisfull() : CxxTest::RealTestDescription( Tests_calcTestSuite, suiteDescription_calcTestSuite, 34, "testisfull" ) {}
 void runTest() { suite_calcTestSuite.testisfull(); }
} testDescription_suite_calcTestSuite_testisfull;

static class TestDescription_suite_calcTestSuite_testisempty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_calcTestSuite_testisempty() : CxxTest::RealTestDescription( Tests_calcTestSuite, suiteDescription_calcTestSuite, 49, "testisempty" ) {}
 void runTest() { suite_calcTestSuite.testisempty(); }
} testDescription_suite_calcTestSuite_testisempty;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
