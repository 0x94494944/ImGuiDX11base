#include "GUI.h"

void GUI::Draw()
{
	ImGui::SetNextWindowSize(ImVec2(200, 100));
	ImGui::SetNextWindowPosCenter(ImGuiCond_Once);
	ImGui::Begin("window", nullptr, ImGuiWindowFlags_NoResize);
	ImGui::Text("Hello world!");
	ImGui::End();
}