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
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.1/ZoomVideoSDK.xcframework.zip",
            checksum: "4484d7b3f4b68f784b60ef435c3c1d516ad23d8334890f0d5df8a37356adfda4"),
        .binaryTarget(
            name: "ZMUIToolkit",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.1/ZMUIToolkit.xcframework.zip",
            checksum: "8f0b2388554d2d26649093d30e54f43597d9e58d53a9801b1cf038d52c264b09"),
        .binaryTarget(
            name: "zoomcml",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.1/zoomcml.xcframework.zip",
            checksum: "62dc5204fe094f00ea1cc8252e023269ac905da3771c46f98371fbe1ebc73e8a"),
        .binaryTarget(
            name: "CptShare",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.1/CptShare.xcframework.zip",
            checksum: "4a31ae145b273a83549e001435762ec81dbc269d0f3e942cacdd63b9ca64a807"),
        .binaryTarget(
            name: "Whiteboard",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.1/Whiteboard.xcframework.zip",
            checksum: "0ea368f829a19a374064728dcee9500dd795a393d76a2760931f52e38fd2f706"),
        .binaryTarget(
            name: "ZoomTask",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.1/ZoomTask.xcframework.zip",
            checksum: "53b9303bb6e0cc12adf38b8d4b88229cd79bd5cc966456a8412b27b800e630e6"),
        .binaryTarget(
            name: "zm_annoter_dynamic",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.1/zm_annoter_dynamic.xcframework.zip",
            checksum: "fd44fb7681dc0409889e96764329ee76a6a5d9e74a34d649fad12500dbe773ad"),
        .binaryTarget(
            name: "ZoomVideoSDKScreenShare",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.1/ZoomVideoSDKScreenShare.xcframework.zip",
            checksum: "4ffc0b80290a744c7c33d3baa7a590f8f0e76ecf82736b93863a3cea172ea5ef")
    ]
)
