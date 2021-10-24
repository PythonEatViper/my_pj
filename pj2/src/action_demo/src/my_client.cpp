#include <iostream>

#include <ros/ros.h>
#include <actionlib/client/simple_action_client.h>
#include "action_demo/numberAction.h"

using namespace std;


typedef actionlib::SimpleActionClient<action_demo::numberAction> Client;

// execute when the goal is done
void doneCb(const actionlib::SimpleClientGoalState& state,
        const action_demo::numberResultConstPtr& result)
{
    //ROS_INFO("Goal is done");
}

// execute when the goal is active
void activeCb()
{
    ROS_INFO("Number sent.");
}

// execute when receiving the feedback from server
void feedbackCb(const action_demo::numberFeedbackConstPtr& feedback)
{
    //ROS_INFO("server current print number: %d", feedback->server_current_number);
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "number_client");

    // create a client
    Client client("number", true);

    // wait for server
    ROS_INFO("Waiting for action server to start.");
    client.waitForServer();
    ROS_INFO("Action server started.");

    // create goal
    int keyboard_input;
    action_demo::numberGoal goal;
    cout << "Please input number from 0-100: \n";
    while(true){
        cin >> keyboard_input;  
        if (  (keyboard_input>=0)
            &&(keyboard_input<=100))
        {
            goal.cient_request_number = keyboard_input;
        }
        else
        {
            ROS_INFO("Invalid number! Try another one");
            continue;
        }

        // send goal to server. set callback
        client.sendGoal(goal,  &doneCb, &activeCb, &feedbackCb);
        client.waitForResult();

        ros::Duration(1).sleep();
    }

    return 0;
}