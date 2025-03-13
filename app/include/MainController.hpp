#ifndef MAINCONTROLLER_HPP
#define MAINCONTROLLER_HPP
#include <engine/core/Controller.hpp>

namespace app {

class MainController : public engine::core::Controller {
    void initialize() override;

    bool loop() override;

    void draw_house();

    void begin_draw() override;

    void update_camera();

    void update() override;

    void draw() override;

    void end_draw() override;
};

}

#endif
