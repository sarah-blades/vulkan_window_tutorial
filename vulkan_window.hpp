#pragma once

#define GLFW_INCLUDE_WINDOW // Want GLFW to also include the Vulkan headers with it

#include <GLFW/glfw3.h> // GLFW is a platform agnostic windowing tool (to open a window)
#include <string>

namespace lve {

class LveWindow {

    public:
        // constructor that takes the values needed to initialise the member variables
        LveWindow(int w, int h, std::string name);

        // destructor to clean up window
        ~LveWindow();

        // deleting copy constructor and copy operator so the window can't be accidentally copied, resulting in 2 pointesr to the window
        LveWindow(const LveWindow &) = delete;
        LveWindow &operator=(const LveWindow &) = delete;

        // inline function definition
        bool shouldClose() { return glfwWindowShouldClose(window); }

    private:
        // member variables to store window's width, height and name
        const int width;
        const int height;
        std::string windowName;

        void initWindow(); // helper function to initialise the window

        GLFWwindow *window; // pointer to a glfw window
};

}