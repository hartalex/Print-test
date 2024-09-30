#include <format>
#include <iostream>

using namespace std;

struct Rect {
  int x{0};
  int y{0};
};

template <>
struct std::formatter<Rect> : formatter<string_view> {
  auto format(const Rect& r, std::format_context& ctx) const {
    string temp;
    format_to(std::back_inserter(temp), "({},{})", r.x, r.y);
    return formatter<string_view>::format(temp, ctx);
  }
};

int main(int argc, char** argv) {
  Rect r{4, 2};
  cout << "Hello World" << endl;
  cout << std::format("rect {}", r) << endl;
  return 0;
}
