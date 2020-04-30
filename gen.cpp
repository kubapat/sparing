#include <iostream>
#include "random/include/effolkronium/random.hpp"
#define ll long long

  using Random = effolkronium::random_static;

  ll losuj(ll a, ll b) {
	return Random::get(a,b);
  }

  int main(int argc, char **argv) {
	ll N = atoi(argv[1]), upper1=atoi(argv[2]), upper2=atoi(argv[3]);
	std::cout << N << "\n";

	for(int i = 0 ; i < N; i++) {
		ll znak = losuj(0, upper1), x = losuj(0, upper2);
		std::cout << x << " " << (znak%2 ? 'L' : 'P') << "\n";

	}

        return 0;
  }
