#ifndef GUI_H
#define GUI_H

#include <memory>
#include <d3d11.h>
#include <ImGui/imgui.h>
#include <ImGui/imgui_internal.h>

class GUI final
{
public:
	void Draw();  
};

inline std::unique_ptr<GUI> gui;

#endif
