/* Represents a collection of Screens on a given display.
 * Includes a vector of Screens, each element is a Screen.
 * Default start-up is a single default-initialized Screen
 */

#ifndef WINDOW_MGR
#define WINDOW_MGR

#include <vector>
#include <string>
#include <iostream>
#include "newscreen.h"

class Window_mgr {
private:
    // Screens this Window_mgr is tracking
    // by default, a Window_mgr has one standard sized blank Screen
    std::vector<Screen> screens{Screen(24, 80, ' ')};
    //initializer contains a Screen value that is passed to the vector<Screen>
    //constructor to create a one-element vector.
};

#endif
