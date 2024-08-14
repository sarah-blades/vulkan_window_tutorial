#include "first_app.hpp"

namespace lve {

void FirstApp::run() {
    
    while (!lveWindow.shouldClose()) {
        glfwPollEvents(); // continue to poll window events while the window is open - e.g. key strokes, or clicking x to dismiss window
    }
    
}
}