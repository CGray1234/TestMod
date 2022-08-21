#include "Includes.hpp"

using namespace QuestUI::BeatSaberUI;
using namespace UnityEngine;
using namespace GlobalNamespace;
using namespace TestMod;

DEFINE_TYPE(TestMod, TestModViewController);

void TestModViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {

    if (firstActivation) {

        UnityEngine::GameObject *container = QuestUI::BeatSaberUI::CreateScrollView(get_transform());

        QuestUI::BeatSaberUI::CreateText(container->get_transform(), "----------------- Enable Customizable Buttons -----------------");
        AddConfigValueToggle(container->get_transform(), getModConfig().SoloEnabled)->get_gameObject();
        AddConfigValueToggle(container->get_transform(), getModConfig().MultiplayerEnabled)->get_gameObject();
        AddConfigValueToggle(container->get_transform(), getModConfig().CampaignEnabled)->get_gameObject();
        AddConfigValueToggle(container->get_transform(), getModConfig().PartyEnabled)->get_gameObject();

        QuestUI::BeatSaberUI::CreateText(container->get_transform(), "-------------------- Customize Button Text --------------------");
        AddConfigValueStringSetting(container->get_transform(), getModConfig().SoloText)->get_gameObject();
        AddConfigValueStringSetting(container->get_transform(), getModConfig().MultiplayerText)->get_gameObject();
        AddConfigValueStringSetting(container->get_transform(), getModConfig().CampaignText)->get_gameObject();
        AddConfigValueStringSetting(container->get_transform(), getModConfig().PartyText)->get_gameObject();

        QuestUI::BeatSaberUI::CreateUIButton(container->get_transform(), "Restart Game", []() {
            Resources::FindObjectsOfTypeAll<MenuTransitionsHelper*>().FirstOrDefault()->RestartGame(nullptr);
        });
        
    }
}

//Resources::FindObjectsOfTypeAll<MenuTransitionsHelper*>().FirstOrDefault()->RestartGame(nullptr);