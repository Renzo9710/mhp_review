# Moving Horizon Planning for Human-Robot Interaction
This repository provides an optimization-based robot trajectory planner (and control support for the UR10) considering obstacles and humans in the environment.

We utilize a Moving Horizon Planning approach (similar to MPC) to optimize the robot trajectory based on cost functions regarding the environment.
The environment definition of this repository supports various types of obstacles:
   - static obstacles
   - dynamic obstacles
   - humans

Furthermore, the motion of dynamic obstacles and humans can be predicted and is considered in trajectory optimization. 
An uncertainty estimation approach is provided for an extrapolation approach to human motions to increase human safety.

The planner is provided as ROS packages for ROS Melodic and Noetic (Ubuntu 18 and Ubuntu 20).
Furthermore, a docker installation is provided for simple out-of-the-box usage of the planner (it may also run on systems other than Ubuntu).

Further information about the installation, usage, and other parts can be found in this repository in our [wiki](https://github.com/Renzo9710/mhp_review/wiki).

## Note for the reviewers
Since the submission format is double-blind, the submission and the code are anonymized as far as possible.

Note that all copyright notices, acknowledgments, and more are replaced for a final version.
Furthermore, the complete repository will move to an official GitHub account maintained and controlled by our research institute.

## Citation
If you use this repository for your research, please cite our paper: Anonym


## Acknowledgements
The authors gratefully acknowledge the financial support of the German Research Foundation (DFG, Project number: Anonymized)

