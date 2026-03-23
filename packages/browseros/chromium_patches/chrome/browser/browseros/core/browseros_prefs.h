diff --git a/chrome/browser/bullebrowser/core/bullebrowser_prefs.h b/chrome/browser/bullebrowser/core/bullebrowser_prefs.h
new file mode 100644
index 0000000000000..3d2c46562d783
--- /dev/null
+++ b/chrome/browser/bullebrowser/core/bullebrowser_prefs.h
@@ -0,0 +1,65 @@
+// Copyright 2025 The Chromium Authors
+// Use of this source code is governed by a BSD-style license that can be
+// found in the LICENSE file.
+
+#ifndef CHROME_BROWSER_BULLEBROWSER_CORE_BULLEBROWSER_PREFS_H_
+#define CHROME_BROWSER_BULLEBROWSER_CORE_BULLEBROWSER_PREFS_H_
+
+#include "components/prefs/pref_service.h"
+#include "ui/actions/action_id.h"
+
+namespace user_prefs {
+class PrefRegistrySyncable;
+}  // namespace user_prefs
+
+namespace bullebrowser {
+
+namespace prefs {
+
+// Toolbar visibility prefs
+// Boolean: Show LLM Chat in toolbar (default: true)
+inline constexpr char kShowLLMChat[] = "bullebrowser.show_llm_chat";
+
+// Boolean: Show LLM Hub in toolbar (default: true)
+inline constexpr char kShowLLMHub[] = "bullebrowser.show_llm_hub";
+
+// Boolean: Show labels on BulleBrowser toolbar actions (default: true)
+inline constexpr char kShowToolbarLabels[] = "bullebrowser.show_toolbar_labels";
+
+// AI Provider prefs
+// JSON string containing the list of AI providers and configuration
+inline constexpr char kProviders[] = "bullebrowser.providers";
+
+// JSON string containing custom AI providers for BulleBrowser
+inline constexpr char kCustomProviders[] = "bullebrowser.custom_providers";
+
+// String containing the default provider ID for BulleBrowser
+inline constexpr char kDefaultProviderId[] = "bullebrowser.default_provider_id";
+
+}  // namespace prefs
+
+// Registers BulleBrowser profile preferences.
+void RegisterProfilePrefs(user_prefs::PrefRegistrySyncable* registry);
+
+// Check if LLM Chat should be shown in toolbar.
+bool ShouldShowLLMChat(PrefService* pref_service);
+
+// Check if LLM Hub should be shown in toolbar.
+bool ShouldShowLLMHub(PrefService* pref_service);
+
+// Check if toolbar labels should be shown for BulleBrowser actions.
+bool ShouldShowToolbarLabels(PrefService* pref_service);
+
+// Check if a toolbar action should be shown based on its visibility pref.
+// Returns true if:
+//   - Action has no visibility pref (e.g., Assistant - always visible)
+//   - Action's visibility pref is true
+// Returns false if action's visibility pref is false.
+bool ShouldShowToolbarAction(actions::ActionId id, PrefService* pref_service);
+
+// Get the visibility pref key for an action, or nullptr if none exists.
+const char* GetVisibilityPrefForAction(actions::ActionId id);
+
+}  // namespace bullebrowser
+
+#endif  // CHROME_BROWSER_BULLEBROWSER_CORE_BULLEBROWSER_PREFS_H_
