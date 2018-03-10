#ifndef __PEPPER_BENCHMARK_H__
#define __PEPPER_BENCHMARK_H__

#include <pepper/benchmark/stopwatch.hpp>

template <typename T>
pepper::benchmark::Stopwatch<T> measure(T &out)
{
  return pepper::benchmark::Stopwatch<T>(out);
}

#endif // __PEPPER_BENCHMARK_H__
