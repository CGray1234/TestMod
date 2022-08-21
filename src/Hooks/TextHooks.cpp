#include "GlobalNamespace/MainMenuViewController.hpp"
#include "UnityEngine/UI/Button.hpp"
#include "UnityEngine/GameObject.hpp"
#include "HMUI/CurvedTextMeshPro.hpp"

#include "Includes.hpp"

MAKE_AUTO_HOOK_MATCH(SoloText, &GlobalNamespace::MainMenuViewController::DidActivate, void, GlobalNamespace::MainMenuViewController *self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
    
    SoloText(self, firstActivation, addedToHierarchy, screenSystemEnabling);

    UnityEngine::UI::Button *soloMenuButton = self->soloButton;
    UnityEngine::GameObject *gameObject = soloMenuButton->get_gameObject();
    HMUI::CurvedTextMeshPro *soloMenuText = gameObject->GetComponentInChildren<HMUI::CurvedTextMeshPro *>();

    if (getModConfig().SoloEnabled.GetValue() == true) {
        soloMenuText->SetText(getModConfig().SoloText.GetValue());
    } else {
        soloMenuText->SetText("SOLO");
    }
}

MAKE_AUTO_HOOK_MATCH(MultiplayerText, &GlobalNamespace::MainMenuViewController::DidActivate, void, GlobalNamespace::MainMenuViewController *self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
    
    MultiplayerText(self, firstActivation, addedToHierarchy, screenSystemEnabling);

    UnityEngine::UI::Button *multiplayerMenuButton = self->multiplayerButton;
    UnityEngine::GameObject *gameObject = multiplayerMenuButton->get_gameObject();
    HMUI::CurvedTextMeshPro *multiplayerMenuText = gameObject->GetComponentInChildren<HMUI::CurvedTextMeshPro *>();

    if (getModConfig().MultiplayerEnabled.GetValue() == true) {
        multiplayerMenuText->SetText(getModConfig().MultiplayerText.GetValue());
    } else {
        multiplayerMenuText->SetText("ONLINE");
    }
}

MAKE_AUTO_HOOK_MATCH(PartyText, &GlobalNamespace::MainMenuViewController::DidActivate, void, GlobalNamespace::MainMenuViewController *self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
    
    PartyText(self, firstActivation, addedToHierarchy, screenSystemEnabling);

    UnityEngine::UI::Button *partyMenuButton = self->partyButton;
    UnityEngine::GameObject *gameObject = partyMenuButton->get_gameObject();
    HMUI::CurvedTextMeshPro *partyMenuText = gameObject->GetComponentInChildren<HMUI::CurvedTextMeshPro *>();

    if (getModConfig().PartyEnabled.GetValue() == true) {
        partyMenuText->SetText(getModConfig().PartyText.GetValue());
    } else {
        partyMenuText->SetText("PARTY");
    }
}

MAKE_AUTO_HOOK_MATCH(CampaignText, &GlobalNamespace::MainMenuViewController::DidActivate, void, GlobalNamespace::MainMenuViewController *self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {

    CampaignText(self, firstActivation, addedToHierarchy, screenSystemEnabling);

    UnityEngine::UI::Button *campaignMenuButton = self->campaignButton;
    UnityEngine::GameObject *gameObject = campaignMenuButton->get_gameObject();
    HMUI::CurvedTextMeshPro *campaignMenuText = gameObject->GetComponentInChildren<HMUI::CurvedTextMeshPro *>();

    if (getModConfig().CampaignEnabled.GetValue() == true) {
        campaignMenuText->SetText(getModConfig().CampaignText.GetValue());
    } else {
        campaignMenuText->SetText("CAMPAIGN");
    }
}