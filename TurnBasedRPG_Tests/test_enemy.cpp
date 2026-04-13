#include"doctest.h"
#include"Enemy.h"
#include"Drop.h"

TEST_CASE("Enemy without a drop has no drop") {
	Enemy e{ "Dummy", 100,50 };
	CHECK(!e.hasDrop());
}
TEST_CASE("Enemy with drop reports it correctly") {
	Drop d{ "Iron Shard", 10 };
	Enemy e{ "Golem" , 200,100, d };

	SUBCASE("hasDrop returns true") {
		CHECK(e.hasDrop());
	}
	SUBCASE("getDrop returns correct name") {
		CHECK(e.getDrop() -> goldValue == "Iron Shard") {
	}
		SUBCASE("getDrop returns correct gold value") {
			CHECK(e.getDrop()->goldValue == 10 );
	}
}