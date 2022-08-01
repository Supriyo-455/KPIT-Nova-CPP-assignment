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
bool suite_TestAccount_init = false;
#include "test.h"

static TestAccount suite_TestAccount;

static CxxTest::List Tests_TestAccount = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAccount( "test.h", 4, "TestAccount", suite_TestAccount, Tests_TestAccount );

static class TestDescription_suite_TestAccount_testDeposite : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestAccount_testDeposite() : CxxTest::RealTestDescription( Tests_TestAccount, suiteDescription_TestAccount, 7, "testDeposite" ) {}
 void runTest() { suite_TestAccount.testDeposite(); }
} testDescription_suite_TestAccount_testDeposite;

static class TestDescription_suite_TestAccount_testGetHighestBalance : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestAccount_testGetHighestBalance() : CxxTest::RealTestDescription( Tests_TestAccount, suiteDescription_TestAccount, 15, "testGetHighestBalance" ) {}
 void runTest() { suite_TestAccount.testGetHighestBalance(); }
} testDescription_suite_TestAccount_testGetHighestBalance;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
