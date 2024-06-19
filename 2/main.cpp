#include"List.h"
#include <catch2/catch_test_macros.hpp>
TEST_CASE("ESDTest", "[List]") {
    List List;
    SECTION("Empty") {
        INFO("Тест для Empty");
        REQUIRE(List.Empty() == 1);
    }
    SECTION("Size") {
        INFO("Тест для Size");
        List.PushFront(5);
        REQUIRE(List.Size() == 1);
    }
    SECTION("Clear") {
        INFO("Тест для Clear");
        List.Clear();
        REQUIRE(List.Size() == 0);
    }
}