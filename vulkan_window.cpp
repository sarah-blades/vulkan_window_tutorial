#include "vulkan_window.hpp"

namespace lve {

    // implement the constructor
    // member initialiser list to initialise the member variables
    LveWindow::LveWindow(int h, int w, std::string name) : width{w}, height{h}, windowName{name} {
        initWindow();
    }

    // destrcutor - destroy resources acquired at initialisation
    LveWindow::~LveWindow() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    // implement initWindow
    void LveWindow::initWindow() {
        glfwInit(); // initialise glfw library
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); // tell glfw not to create an opengl context (disable with 'no api')
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); // hint to disable window being resized after creation

        // initialise the window pointer
        // need to pass a c style string for the name
        // fourth parameter is for making a full screen window (using nullptr for now)
        // final paramter is related to opengl context
        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }

}