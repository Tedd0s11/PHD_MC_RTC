#include "Phd_Controller.h"

Phd_Controller::Phd_Controller(mc_rbdyn::RobotModulePtr rm, double dt, const mc_rtc::Configuration & config)
: mc_control::fsm::Controller(rm, dt, config)
{

  mc_rtc::log::success("Phd_Controller init done ");
}

bool Phd_Controller::run()
{
  return mc_control::fsm::Controller::run();
}

void Phd_Controller::reset(const mc_control::ControllerResetData & reset_data)
{
  mc_control::fsm::Controller::reset(reset_data);
}


