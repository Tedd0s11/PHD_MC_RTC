## How to Install and Launch

1. Clone the repo on your computer.
2. Modify you ``` usr/etc/mc_rtc.yaml ``` and change this :
```
# Enabled controllers
Enabled: [Phd_Controller]
```
3. In a terminal run this command :
```
source /opt/ros/noetic/setup.bash #Or setup.zsh
roslaunch mc_rtc_ticker display.launch
```
4. In anthoer terminal, build the program :
```
cd PHD_MC_RTC/build
cmake ../ -DCMAKE_BUILD_TYPE=RelWithDebInfo
make
sudo make install
```
5. Finally in a third terminal launch this and get prepared to watch the RViz windows :
```
source /opt/ros/noetic/setup.bash #Or setup.zsh
rosrun mc_rtc_ticker mc_rtc_ticker
```
