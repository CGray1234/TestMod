#include "Includes.hpp"

using namespace UnityEngine;
using namespace GlobalNamespace;
using namespace TestMod;

DEFINE_TYPE(TestMod, TestModViewController);

void TestModViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
    GameObject *container = QuestUI::BeatSaberUI::CreateScrollView(get_transform());

    QuestUI::BeatSaberUI::CreateUIButton(container->get_transform(), "Restart Game", []() {
        Resources::FindObjectsOfTypeAll<MenuTransitionsHelper*>().FirstOrDefault()->RestartGame(nullptr);
    });
}

//Resources::FindObjectsOfTypeAll<MenuTransitionsHelper*>().FirstOrDefault()->RestartGame(nullptr);