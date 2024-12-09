//
// Created by spaske on 12/9/24.
//
#include <app/GUIController.hpp>
#include <app/MainApp.hpp>
#include <app/MainController.hpp>

namespace app {
    void MainApp::setup() {
        auto main_controller = rg::controller::register_controller<MainController>();
        auto gui_controller  = rg::controller::register_controller<GUIController>();
        main_controller->after(rg::controller::get<rg::controller::EngineSentinelController>());
        main_controller->before(gui_controller);
    }
}

int main(int argc, char **argv) {
    return std::make_unique<app::MainApp>()->run(argc, argv);
}
