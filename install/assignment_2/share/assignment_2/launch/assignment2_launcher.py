from launch import LaunchDescription
from launch.actions import TimerAction, ExecuteProcess
 
def generate_launch_description():
    return LaunchDescription([
        ExecuteProcess(
            cmd=['gnome-terminal', '--', 'ros2', 'launch', 'assignment_2', 'assignment_2.launch.py'],
            output='screen'
        ),
        TimerAction(
            period=3.0,  # 3-second gap
            actions=[
                ExecuteProcess(
                    cmd=['gnome-terminal', '--', 'ros2', 'launch', 'nav2_bringup', 'navigation_launch.py'],
                    output='screen'
                )
            ]
        ),
        TimerAction(
            period=3.0,  # 3-second gap
            actions=[
                ExecuteProcess(
                    cmd=['gnome-terminal', '--', 'ros2', 'launch', 'slam_toolbox', 'online_sync_launch.py'],
                    output='screen'
                )
            ]
        ),
        TimerAction(
            period=3.0,  # 3-second gap
            actions=[
                ExecuteProcess(
                    cmd=['gnome-terminal', '--', 'ros2', 'launch', 'plansys2_patrol_navigation_example', 'patrol_example_fakesim_launch.py'],
                    output='screen'
                )
            ]
        ),
    ])