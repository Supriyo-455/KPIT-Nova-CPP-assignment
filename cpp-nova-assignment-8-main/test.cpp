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

static class TestDescription_suite_calcTestSuite_testinsert : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_calcTestSuite_testinsert() : CxxTest::RealTestDescription( Tests_calcTestSuite, suiteDescription_calcTestSuite, 7, "testinsert" ) {}
 void runTest() { suite_calcTestSuite.testinsert(); }
} testDescription_suite_calcTestSuite_testinsert;

static class TestDescription_suite_calcTestSuite_testremove : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_calcTestSuite_testremove() : CxxTest::RealTestDescription( Tests_calcTestSuite, suiteDescription_calcTestSuite, 16, "testremove" ) {}
 void runTest() { suite_calcTestSuite.testremove(); }
} testDescription_suite_calcTestSuite_testremove;

static class TestDescription_suite_calcTestSuite_testisfull : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_calcTestSuite_testisfull() : CxxTest::RealTestDescription( Tests_calcTestSuite, suiteDescription_calcTestSuite, 26, "testisfull" ) {}
 void runTest() { suite_calcTestSuite.testisfull(); }
} testDescription_suite_calcTestSuite_testisfull;

static class TestDescription_suite_calcTestSuite_testisempty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_calcTestSuite_testisempty() : CxxTest::RealTestDescription( Tests_calcTestSuite, suiteDescription_calcTestSuite, 41, "testisempty" ) {}
 void runTest() { suite_calcTestSuite.testisempty(); }
} testDescription_suite_calcTestSuite_testisempty;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
