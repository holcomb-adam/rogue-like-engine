#include "RLEpch.hpp"
#include "ImGuiLayer.hpp"

// External Library includes
#include <imgui.h>

// RLE Library includes
#include <RLE/Core/Engine.hpp>



anvil::ImGuiLayer::ImGuiLayer() :
	rle::Layer("ImGuiLayer")
{
	
}

void anvil::ImGuiLayer::onEnter()
{

}

void anvil::ImGuiLayer::onExit()
{

}

void anvil::ImGuiLayer::onUpdate(const rle::time::step_ms delta)
{

}

void anvil::ImGuiLayer::onRender(rle::Renderer& renderer) const
{
	static bool show = true;
	ImGui::ShowDemoWindow(&show);
}
