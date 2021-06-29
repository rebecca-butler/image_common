#include <image_transport/simple_publisher_plugin.hpp>
#include <image_transport_tutorial/msg/resized_image.hpp>

class ResizedPublisher : public image_transport::SimplePublisherPlugin<image_transport_tutorial::msg::ResizedImage>
{
public:
  virtual std::string getTransportName() const
  {
    return "resized";
  }

protected:
  virtual void publish(const sensor_msgs::msg::Image& message,
                       const PublishFn& publish_fn) const;
};
