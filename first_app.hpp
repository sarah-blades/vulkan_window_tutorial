#pragma once

#include "vulkan_window.hpp"

namespace lve {
class FirstApp{

    public:
        // constants for width and height
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;

        void run();

    private:
        // when FirstApp is created, a window will be created and opened
        // when FirstApp is destoyed, the window will be destroyed
        LveWindow lveWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
};
}