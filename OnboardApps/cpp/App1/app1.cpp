#include <core_script_bridge/navigation_bridge.h>
#include <iostream>

Navigation nav;
int main(int argc, char *argv[])
{
    nav.takeoff(3.0);
    nav.position_set(5,0,-3);
    nav.position_set(5,5,-3);
    nav.position_set(0,5,-3);
    nav.position_set(0,0,-3);
    nav.land();
}
