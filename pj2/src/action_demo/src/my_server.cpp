#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include "action_demo/numberAction.h"

typedef actionlib::SimpleActionServer<action_demo::numberAction> Server;
int print_count = 0;


// execute when receive a goal from client
void execute(const action_demo::numberGoalConstPtr& goal, Server* as)
{
    ros::Rate rate(2);
    action_demo::numberFeedback feedback;

    ROS_INFO("keyboard input number received: %d", goal->cient_request_number);

    // publish feedback
    print_count = goal->cient_request_number;
    //while(true) {
    //    count += 1;
    //    ROS_INFO("number counting: %d", count);
    //    feedback.server_current_number = count;
    //    as->publishFeedback(feedback);
    //    rate.sleep();
    //}

    // done. return result
    //ROS_INFO("Server finish working.", goal->not_used);
    action_demo::numberResult result;
    result.not_used = 1;
    as->setSucceeded(result);
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "number_server");
    ros::NodeHandle nh;

    // create a server
    Server server(nh, "number", boost::bind(&execute, _1, &server), false);

    // start the server
    server.start();

    ros::Time last_time = ros::Time::now();
    ros::Time cur_time;
    while (true)
    {
        cur_time = ros::Time::now();
        if ((cur_time - last_time) >= ros::Duration(2.0)){ // 2 sec
            last_time = cur_time;
            print_count += 1;
            if (print_count>100){print_count = 0;}
            ROS_INFO("number counting: %d", print_count);

        }
        ros::spinOnce();
    }


    return 0;
}