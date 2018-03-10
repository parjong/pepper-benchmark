#include <pepper/benchmark.h>

#include <iostream>

int main(int argc, char **argv)
{
  std::chrono::milliseconds elapsed;

  uint32_t count = (1 << 30);

  measure(elapsed) << [count]()
  {
    for (uint32_t i = 0; i < count; ++i)
    {
      // DO NOTHING
    }
  };

  std::cout << count << " iterations take " << elapsed.count() << "ms" << std::endl;
}
