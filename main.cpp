#include "first_app.hpp"

// include std libraries
#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main() {
    // create instance of the app
    lve::FirstApp app{};

    try {
        app.run();
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}