//
//  UsesGUI.h
//  FaceOff
//
//  Created by Jonathan Cole on 10/22/15.
//
//

#ifndef UsesGUI_h
#define UsesGUI_h

#include "GUIHandler.hpp"
#include "CinderImGui.h"
#include <stdio.h>

class UsesGUI {
public:
    /**
     This should be used to set up GUI variables in any class that interfaces with the GUI.
     */
    virtual void SetupGUIVariables() = 0;
    GUIHandler& GetGUI(){
        return GUIHandler::GetInstance();
    }
    
    virtual void DrawGUI() = 0;
    
    bool showGUI = false;
    
    static void ShowHelpMarker(const char* desc)
    {
        ImGui::SameLine();
        ImGui::TextDisabled("(?)");
        if (ImGui::IsItemHovered())
            ImGui::SetTooltip("%s", desc);
    }
    
    
};


#endif /* UsesGUI_h */
