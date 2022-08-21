#pragma once

#include "config-utils/shared/config-utils.hpp"

DECLARE_CONFIG(ModConfig,

    CONFIG_VALUE();

    CONFIG_VALUE(SoloText, std::string, "Change Solo Button Text", "SOLO");
    CONFIG_VALUE(MultiplayerText, std::string, "Change Online Button Text", "ONLINE");
    CONFIG_VALUE(CampaignText, std::string, "Change Campaign Button Text", "CAMPAIGN");
    CONFIG_VALUE(PartyText, std::string, "Change Party Button Text", "PARTY");

    CONFIG_VALUE(SoloEnabled, bool, "Change Solo Button Text", true);
    CONFIG_VALUE(MultiplayerEnabled, bool, "Change Online Button Text", true);
    CONFIG_VALUE(CampaignEnabled, bool, "Change Campaign Button Text", true);
    CONFIG_VALUE(PartyEnabled, bool, "Change Party Button Text", true);

    CONFIG_INIT_FUNCTION(

        CONFIG_INIT_VALUE(SoloText);
        CONFIG_INIT_VALUE(MultiplayerText);
        CONFIG_INIT_VALUE(CampaignText);
        CONFIG_INIT_VALUE(PartyText);

        CONFIG_INIT_VALUE(SoloEnabled);
        CONFIG_INIT_VALUE(MultiplayerEnabled);
        CONFIG_INIT_VALUE(CampaignEnabled);
        CONFIG_INIT_VALUE(PartyEnabled);
    )
)