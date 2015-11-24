#include <despot/core/globals.h>

using namespace std;

namespace despot {
namespace Globals {

Config config;
ExecTracker tracker;
const double INF = 1e8;
const double TINY = 1e-8;
const double POS_INFTY = numeric_limits<double>::max();
const double NEG_INFTY = -POS_INFTY;

} // namespace Globals
} // namespace despot
