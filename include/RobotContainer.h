/**
 * @file RobotContainer.h
 * @author Michael Denissov
 * @author your name
 * @brief A file for defining all the commands and subsystems of a robot, as well as binding default commands
 * @version 0.1
 * @date 2021-01-12
 * 
 */

/**
 * Here you won't be doing too much, you'll basically be just what subsystems exists on your robot
 * Don't forget to inlcude your subsystem and command header files!
 */
class RobotContainer
{
    public:
        RobotContainer();
        ~RobotContainer();
    private:
        // Subsystems and commands go here

        // This method is where you will bind inputs to commands
        void ConfigureButtonBindings();
};

