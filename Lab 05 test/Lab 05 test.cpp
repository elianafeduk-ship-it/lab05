
#include "CppUnitTest.h"
#include "../Lab 05/Functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab05test
{
    TEST_CLASS(Lab05test)
    {
    public:

        TEST_METHOD(TestF)
        {
            double result = F(1.0);

            Assert::AreEqual(1.88909, result, 0.0001);
        }
    };
}
