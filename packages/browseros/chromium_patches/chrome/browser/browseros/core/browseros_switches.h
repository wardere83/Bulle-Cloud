diff --git a/chrome/browser/bullebrowser/core/bullebrowser_switches.h b/chrome/browser/bullebrowser/core/bullebrowser_switches.h
new file mode 100644
index 0000000000000..dcd8b3ae307f2
--- /dev/null
+++ b/chrome/browser/bullebrowser/core/bullebrowser_switches.h
@@ -0,0 +1,86 @@
+// Copyright 2024 The Chromium Authors
+// Use of this source code is governed by a BSD-style license that can be
+// found in the LICENSE file.
+
+#ifndef CHROME_BROWSER_BULLEBROWSER_CORE_BULLEBROWSER_SWITCHES_H_
+#define CHROME_BROWSER_BULLEBROWSER_CORE_BULLEBROWSER_SWITCHES_H_
+
+namespace bullebrowser {
+
+// =============================================================================
+// BulleBrowser Command-Line Switches
+// =============================================================================
+// All BulleBrowser-specific command-line flags are defined here.
+// Usage: --flag-name or --flag-name=value
+
+// === Server Switches ===
+
+// Disables the BulleBrowser server entirely.
+inline constexpr char kDisableServer[] = "disable-bullebrowser-server";
+
+// Disables the BulleBrowser server OTA updater.
+inline constexpr char kDisableServerUpdater[] = "disable-bullebrowser-server-updater";
+
+// Overrides the appcast URL for server updates (testing).
+inline constexpr char kServerAppcastUrl[] = "bullebrowser-server-appcast-url";
+
+// Overrides the server resources directory path.
+inline constexpr char kServerResourcesDir[] = "bullebrowser-server-resources-dir";
+
+// Overrides the CDP (Chrome DevTools Protocol) port.
+inline constexpr char kCDPPort[] = "bullebrowser-cdp-port";
+
+// Overrides the stable MCP proxy port (what external clients connect to).
+inline constexpr char kProxyPort[] = "bullebrowser-proxy-port";
+
+// Overrides the sidecar backend server port.
+inline constexpr char kServerPort[] = "bullebrowser-server-port";
+
+// Overrides the Agent server port.
+inline constexpr char kAgentPort[] = "bullebrowser-agent-port";
+
+// Overrides the Extension server port.
+inline constexpr char kExtensionPort[] = "bullebrowser-extension-port";
+
+// === Extension Switches ===
+
+// Disables BulleBrowser managed extensions.
+inline constexpr char kDisableExtensions[] = "disable-bullebrowser-extensions";
+
+// Overrides the extensions config URL.
+inline constexpr char kExtensionsUrl[] = "bullebrowser-extensions-url";
+
+// === URL Override Switches ===
+
+// Disables chrome://bullebrowser/* URL overrides.
+// Useful for debugging to see raw extension URLs.
+inline constexpr char kDisableUrlOverrides[] = "bullebrowser-disable-url-overrides";
+
+// === Sparkle Switches (macOS Browser Updates) ===
+
+// Overrides the Sparkle appcast URL for browser updates.
+inline constexpr char kSparkleUrl[] = "bullebrowser-sparkle-url";
+
+// Forces an immediate Sparkle update check.
+inline constexpr char kSparkleForceCheck[] = "bullebrowser-sparkle-force-check";
+
+// Runs Sparkle in dry-run mode (no actual updates).
+inline constexpr char kSparkleDryRun[] = "sparkle-dry-run";
+
+// Skips Sparkle signature verification (testing only).
+inline constexpr char kSparkleSkipSignature[] = "sparkle-skip-signature";
+
+// Spoofs the current version for Sparkle (testing).
+inline constexpr char kSparkleSpoofVersion[] = "sparkle-spoof-version";
+
+// Enables verbose Sparkle logging.
+inline constexpr char kSparkleVerbose[] = "sparkle-verbose";
+
+// === Misc Switches ===
+
+// Indicates this is the first run of BulleBrowser.
+inline constexpr char kFirstRun[] = "bullebrowser-first-run";
+
+}  // namespace bullebrowser
+
+#endif  // CHROME_BROWSER_BULLEBROWSER_CORE_BULLEBROWSER_SWITCHES_H_
