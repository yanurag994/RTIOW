#include "rtweekend.hpp"
#include "hittable_list.hpp"
#include "hittable.hpp"
#include "sphere.hpp"
#include "camera.hpp"

int main()
{
    // Camera
    camera cam;
    cam.aspect_ratio = 16.0 / 9.0;
    cam.image_width = 720;
    cam.samples_per_pixel = 100;
    
    // World

    hittable_list world;

    world.add(make_shared<sphere>(point3(0, 0, -1), 0.5));
    world.add(make_shared<sphere>(point3(0, -100.5, -1), 100));

    cam.render(world);
}