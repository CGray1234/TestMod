#include "main.hpp"

#include "modloader/shared/modloader.hpp"
#include "hooks.hpp"

#include "custom-types/shared/macros.hpp"
#include "HMUI/ViewController.hpp"

#include "ViewController.hpp"

#include "beatsaber-hook/shared/utils/hooking.hpp"
#include "beatsaber-hook/shared/utils/logging.hpp"

#include "questui/shared/BeatSaberUI.hpp"
#include "questui/shared/QuestUI.hpp"

#include "GlobalNamespace/MenuTransitionsHelper.hpp"

#include "UnityEngine/Resources.hpp"

using namespace UnityEngine;
using namespace QuestUI;
using namespace QuestUI::BeatSaberUI;
using namespace GlobalNamespace;
using namespace QuestUI;
using namespace UnityEngine::UI;
using namespace HMUI;