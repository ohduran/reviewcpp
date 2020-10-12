#include <cmath> // for std::abs

bool approximatelyEqual(double a, double b, double epsilon)
{
    // epsilon being a percentage of a or b
    return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * epsilon));
}

bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
    double diff = std::abs(a - b);
    if (diff <= absEpsilon)
    {
        return true;
    }
    return approximatelyEqual(a, b, relEpsilon);
}