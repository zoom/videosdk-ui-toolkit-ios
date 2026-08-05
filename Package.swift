// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "ZMUIToolkitiOS",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "ZMUIToolkitiOS",
            targets: [
                "ZoomVideoSDK",
                "ZMUIToolkit",
                "util",
                "zContext",
                "zoomcml",
                "CptShare",
                "Whiteboard",
                "ZoomTask",
                "zm_annoter_dynamic"
            ]),
        .library(
            name: "ZoomVideoSDKScreenShare",
            targets: ["ZoomVideoSDKScreenShare"]),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "ZoomVideoSDK",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/ZoomVideoSDK.xcframework.zip",
            checksum: "67f7a604ecc918659397c525d2fa22372e7ed16a323688db858680bfef6dce3c"),
        .binaryTarget(
            name: "ZMUIToolkit",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/ZMUIToolkit.xcframework.zip",
            checksum: "eabdf36ed458923003f331d4aa201709f023d35bf8da3e3a08b2b62c148c9e17"),
        .binaryTarget(
            name: "util",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/util.xcframework.zip",
            checksum: "f1eacb154f97824b2d9fbc6f94c482828ca6bab0fd9e80cc9f1d48157a34d532"),
        .binaryTarget(
            name: "zContext",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/zContext.xcframework.zip",
            checksum: "1845d72f99bcba91432d0bc07e2b1cd0c8cdcec5e9f388bd7929be2bcc8e5b67"),
        .binaryTarget(
            name: "zoomcml",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/zoomcml.xcframework.zip",
            checksum: "0b8cd63b6947063ce1ebff95a91e0a3234aa0bbfbefaacf97a3ca20fdf8a8cb9"),
        .binaryTarget(
            name: "CptShare",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/CptShare.xcframework.zip",
            checksum: "1ad40ecf3c7c0bb24a9f004e42cdcaa3860627c2b24b8abf2b9cd2e443240e3b"),
        .binaryTarget(
            name: "Whiteboard",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/Whiteboard.xcframework.zip",
            checksum: "3c50436a0086662f53af78707170c925e05d47c9db33a7b188d6666ebd8550e1"),
        .binaryTarget(
            name: "ZoomTask",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/ZoomTask.xcframework.zip",
            checksum: "ec0ded0c4d6a4e0584fa8b4d22fa70ab1f3cfe8879e6f35f79e2c313bff0a080"),
        .binaryTarget(
            name: "zm_annoter_dynamic",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/zm_annoter_dynamic.xcframework.zip",
            checksum: "a114cc1d16f8a2c8318acc0e5e9acbcafdcece81a6d8e5303c7073af4b10f08a"),
        .binaryTarget(
            name: "ZoomVideoSDKScreenShare",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/ZoomVideoSDKScreenShare.xcframework.zip",
            checksum: "2ebf3b82a8013881d8eb4d9d4a3f010ae765a64291a3d7ded244519184623606")
    ]
)
