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
bool suite_SampleTestSuite_init = false;
#include "test.h"

static SampleTestSuite suite_SampleTestSuite;

static CxxTest::List Tests_SampleTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SampleTestSuite( "test.h", 4, "SampleTestSuite", suite_SampleTestSuite, Tests_SampleTestSuite );

static class TestDescription_suite_SampleTestSuite_testOne : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SampleTestSuite_testOne() : CxxTest::RealTestDescription( Tests_SampleTestSuite, suiteDescription_SampleTestSuite, 9, "testOne" ) {}
 void runTest() { suite_SampleTestSuite.testOne(); }
} testDescription_suite_SampleTestSuite_testOne;

static class TestDescription_suite_SampleTestSuite_testTwo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SampleTestSuite_testTwo() : CxxTest::RealTestDescription( Tests_SampleTestSuite, suiteDescription_SampleTestSuite, 21, "testTwo" ) {}
 void runTest() { suite_SampleTestSuite.testTwo(); }
} testDescription_suite_SampleTestSuite_testTwo;

static class TestDescription_suite_SampleTestSuite_testThree : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SampleTestSuite_testThree() : CxxTest::RealTestDescription( Tests_SampleTestSuite, suiteDescription_SampleTestSuite, 31, "testThree" ) {}
 void runTest() { suite_SampleTestSuite.testThree(); }
} testDescription_suite_SampleTestSuite_testThree;

static class TestDescription_suite_SampleTestSuite_testFour : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SampleTestSuite_testFour() : CxxTest::RealTestDescription( Tests_SampleTestSuite, suiteDescription_SampleTestSuite, 40, "testFour" ) {}
 void runTest() { suite_SampleTestSuite.testFour(); }
} testDescription_suite_SampleTestSuite_testFour;

static class TestDescription_suite_SampleTestSuite_testFive : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SampleTestSuite_testFive() : CxxTest::RealTestDescription( Tests_SampleTestSuite, suiteDescription_SampleTestSuite, 48, "testFive" ) {}
 void runTest() { suite_SampleTestSuite.testFive(); }
} testDescription_suite_SampleTestSuite_testFive;

static class TestDescription_suite_SampleTestSuite_testSix : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SampleTestSuite_testSix() : CxxTest::RealTestDescription( Tests_SampleTestSuite, suiteDescription_SampleTestSuite, 56, "testSix" ) {}
 void runTest() { suite_SampleTestSuite.testSix(); }
} testDescription_suite_SampleTestSuite_testSix;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
