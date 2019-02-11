# include <iostream>

int main() {
  int n;
  int i;
  int j;
  int c;
  std::string str;
  std::string stars;

  std::cout << "Please provide a value for `n`: " << std::endl;
  std::cin >> n;
  std::cout << std::endl;

  for (i = 0; i < n; i++)
  {
    stars = "";
    c = i * 2 + 1;

    for (j = 0; j < c; j++)
    {
      stars = stars + "*";
    }

    stars = stars + "\n";

    str.insert(str.length(), stars);
  }

  std::cout << str << std::endl;

  return 0;
}
