#ifndef __UNITS_FEETPERSECONDPERSECOND_UT_H__
#define __UNITS_FEETPERSECONDPERSECOND_UT_H__

#include <cppunit/extensions/HelperMacros.h>


namespace units
{
    class Feetpersecondpersecond_ut : public CppUnit::TestFixture
    {

        CPPUNIT_TEST_SUITE(Feetpersecondpersecond_ut);

        CPPUNIT_TEST(test);

        CPPUNIT_TEST_SUITE_END();

        public:
        void setUp();
        void tearDown();

        protected:
        void test();

    };

    CPPUNIT_TEST_SUITE_REGISTRATION(Feetpersecondpersecond_ut);

} // namespace

#endif // __UNITS_FEETPERSECONDPERSECOND_UT_H__