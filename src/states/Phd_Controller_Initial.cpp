#include "Phd_Controller_Initial.h"

#include "../Phd_Controller.h"

void Phd_Controller_Initial::configure(const mc_rtc::Configuration & config)
{
}

void Phd_Controller_Initial::start(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<Phd_Controller &>(ctl_);
}

bool Phd_Controller_Initial::run(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<Phd_Controller &>(ctl_);
  output("OK");
  return true;
}

void Phd_Controller_Initial::teardown(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<Phd_Controller &>(ctl_);
}

EXPORT_SINGLE_STATE("Phd_Controller_Initial", Phd_Controller_Initial)
