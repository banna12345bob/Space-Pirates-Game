#pragma once

#include <Solus.h>

class Sandbox2D : public Solus::Layer
{
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnDetach() override;
	virtual void OnAttach() override;

	void OnUpdate(Solus::Timestep time) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Solus::Event& event) override;
private:
	Solus::OrthographicCameraController m_CameraController;

	Solus::Ref<Solus::VertexArray> m_SquareVA;
	Solus::Ref<Solus::Shader> m_flatColourShader;

	float m_Position[2] = { 0.0f, 0.0f };
	float m_Scale[2] = {1.0f, 1.0f};
	float m_Rotation[2] = { 0.0f };
	glm::vec4 m_squareColour = { 0.2f, 0.3f, 0.8f, 1.0f };
};