#pragma once
#include <Artifact/Core/System.h>

class PlayerInputComponent;

class PlayerInputSystem : public Artifact::System
{
public:
    PlayerInputSystem(Artifact::EntitySystem& a_EntitySystem, Artifact::MessagingSystem& a_MessagingSystem);

    virtual void registerListeners() override;

private:
    void handleInput();
    void updatePlayerMovement(Artifact::ComponentHandle<PlayerInputComponent> a_Player);
    void updateFireState(Artifact::ComponentHandle<PlayerInputComponent> a_Player);
};

