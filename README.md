# Zoom Video SDK UI toolkit

The [Zoom Video SDK UI toolkit](https://developers.zoom.us/docs/video-sdk/ios/ui-kit/) is a prebuilt video chat user interface powered by the Zoom Video SDK.

The use of this UI Took Kit is subject to the [beta program terms of use](https://explore.zoom.us/en/beta-terms-and-conditions/) and the [Video SDK terms of service](https://explore.zoom.us/en/video-sdk-terms/). Copyright 2023 Zoom Video Communications, Inc. All rights reserved.

## Prerequisites

- Xcode
- A physical 64-bit iOS device (iPhone or iPad) with iOS version 11.0+
- A Zoom account with Video SDK credentials
- A validated provisioning profile certificate

## Installation

Currently, the Zoom Video SDK UI toolkit is available through Swift Package Manager.

```
https://github.com/zoom/video-sdk-ui-toolkit-ios.git
```

## Required App Permissions

In order for the camera and mic to work during the session, add the following:

| Permission Required | Optional | Permission Key | Description |
| :------------------ | :------- | :------------- | :---------- |
| Camera              | Required | NSCameraUsageDescription | Required for Video |
| Microphone          | Required | NSMicrophoneUsageDescription | Required for Audio |
| Bluetooth           | Required | NSBluetoothPeripheralUsageDescription | Required for Bluetooth audio devices |

## Authorize

Learn how to use your credentials to [authenticate](https://developers.zoom.us/docs/video-sdk/auth/#generate-a-video-sdk-jwt) so you can connect.

See the [Video SDK Auth Endpoint Sample](https://github.com/zoom/videosdk-sample-signature-node.js) for a sample app that shows how to quickly, easily, and securely generate a Video SDK JWT.

## Usage

After understanding the authorization process, we can simply add Zoom Video SDK UI toolkit into your View Controller by following the 3 steps below.

### Step 1. Create the SessionContext

Create the **SessionContext** that takes in the required parameters such as JWT, session name and username (display name). If your session requires a password, you can use the password parameter.

```Swift
let sessionContext = SessionContext(jwt: String, sessionName: String, username: String)

// OR if password is required
let sessionContext = SessionContext(jwt: String, sessionName: String, sessionPassword: String?, username: String)
```

### Step 2. Create the Zoom Video View Controller and present it

Create the **UIToolkitVC** that takes in the **sessionContext** and present it.

```Swift
let vc = UIToolkitVC(sessionContext: sessionContext)
vc.delegate = self
vc.modalPresentationStyle = .fullScreen
present(toolkitVC, animated: true)
```

### Step 3. Delegate

There is a delegate class **UIToolkitDelegate** which consists of important callbacks such as error, view is loaded and dismissed.

```Swift
extension YourViewController: UIToolkitDelegate {
    func onError(_ errorType: UIToolkitError) {
        print("UIToolkitVC onError: \(errorType.rawValue) -> \(errorType.description)")
    }
    
    func onViewLoaded() {
        print("UIToolkitVC onViewLoaded")
    }
    
    func onViewDismissed() {
        print("UIToolkitVC onViewDismissed")
    }
}
```

See the [Zoom Video SDK UI toolkit](https://developers.zoom.us/docs/video-sdk/ios/ui-kit/) documentation for more.

## Need help?

If you're looking for help, try [Developer Support](https://devsupport.zoom.us/hc/en-us) or our [Developer Forum](https://devforum.zoom.us/). Priority support is also available with [Premier Developer Support](https://explore.zoom.us/docs/en-us/developer-support-plans.html) plans.

<br> 

---

Copyright 2023 Zoom Video Communications, Inc. All rights reserved.
