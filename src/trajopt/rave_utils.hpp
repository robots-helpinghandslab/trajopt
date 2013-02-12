#pragma once
#include <openrave/openrave.h>
#include "trajopt/macros.h"

namespace trajopt {


namespace OR = OpenRAVE;

OpenRAVE::KinBody::LinkPtr GetLinkMaybeAttached(OpenRAVE::RobotBasePtr robot, const std::string& name);
OpenRAVE::RobotBase::ManipulatorPtr GetManipulatorByName(OpenRAVE::RobotBase& robot, const std::string& name);
OpenRAVE::RobotBasePtr GetRobotByName(OpenRAVE::EnvironmentBase& env, const std::string& name);
OpenRAVE::RobotBasePtr TRAJOPT_API GetRobot(OpenRAVE::EnvironmentBase& env);
int GetRobotLinkIndex(const OR::RobotBase& robot, const OR::KinBody::Link& link);
bool DoesAffect(const OR::RobotBase& robot, const std::vector<int>& dof_inds, int link_ind);
void PlotAxes(OR::EnvironmentBase& env, const OR::Transform& T, float size, std::vector<OR::GraphHandlePtr>& handles);

OR::UserDataPtr GetUserData(const OR::EnvironmentBase& env, const std::string& key);
void SetUserData(OR::EnvironmentBase& env, const std::string& key, OR::UserDataPtr val);

}

