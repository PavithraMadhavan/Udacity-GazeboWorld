#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginGreeting : public WorldPlugin
  {
    public: WorldPluginGreeting() : WorldPlugin()
            {
              printf("Welcome to Pavithra's World!'\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginGreeting)
}
