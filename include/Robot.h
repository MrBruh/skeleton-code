/**
 * @file Robot.h
 * @author Michael Denissov
 * @brief A file that handles the running of the robot
 * @version 0.1
 * @date 2021-01-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../include/RobotContainer.h"

class Robot
{
    public:
        //TODO: Figure out what to do here
        Robot();
        ~Robot();

        //Commands that run no matter what
        void RobotInit();
        void RobotPeriodic();
        //Commands that run when disabled
        void DisabledInit();
        void DisabledPeriodic();
        //Commands that run when in Teleop mode
        void TeleopInit();
        void TeleopPeriodic();
    private:
        RobotContainer m_container;
};
