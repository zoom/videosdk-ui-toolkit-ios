// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "ZMUIToolkitiOS",
    platforms: [
        .iOS(.v15)
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
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/v2.6.11-1/ZoomVideoSDK.xcframework.zip",
            checksum: "c4c6e43e77c0197b03ecc7e2f678bf20e0a82579994161b713a1fb54d4304ffd"),
        .binaryTarget(
            name: "ZMUIToolkit",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/v2.6.11-1/ZMUIToolkit.xcframework.zip",
            checksum: "86bf8d7ff97ad0650aeaa8aefd4b7fb837cc57236d1a074c7d3849218f2096a9"),
        .binaryTarget(
            name: "util",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/v2.6.11-1/util.xcframework.zip",
            checksum: "86d3fe67a486618ee848be3bd4c4d328b704ae9b5aac4bf3d7d5902ebb84c716"),
        .binaryTarget(
            name: "zContext",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/v2.6.11-1/zContext.xcframework.zip",
            checksum: "cf5dae85e31264e4845b078085fda9d45ca44f66fb117ec08e9205cc6e87f474"),
        .binaryTarget(
            name: "zoomcml",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/v2.6.11-1/zoomcml.xcframework.zip",
            checksum: "d914b1f2610fda52aa99a65efc1b9cb74a0a45bd338459a344e34bdee34c624f"),
        .binaryTarget(
            name: "CptShare",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/v2.6.11-1/CptShare.xcframework.zip",
            checksum: "25bd03ea98e57991c7e95e2c53912969bf04e25e39017867825f12cfdd2705c3"),
        .binaryTarget(
            name: "Whiteboard",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/v2.6.11-1/Whiteboard.xcframework.zip",
            checksum: "ce88d6f043a8449fd943dc74d8f8c9a06268fbbbe85cf2e2f1b81b77e6e7cd2a"),
        .binaryTarget(
            name: "ZoomTask",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/v2.6.11-1/ZoomTask.xcframework.zip",
            checksum: "aa279c0467dc24bcbae9fcaa26e2750825193f81ce105c86d71b3b9dad9dbbef"),
        .binaryTarget(
            name: "zm_annoter_dynamic",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/v2.6.11-1/zm_annoter_dynamic.xcframework.zip",
            checksum: "f2ddb5b1efdf4aa97e624ddfbeb4074ad0473cf4dd231393f2ed800afe32a9c1"),
        .binaryTarget(
            name: "ZoomVideoSDKScreenShare",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/v2.6.11-1/ZoomVideoSDKScreenShare.xcframework.zip",
            checksum: "80b287060e97be54ca32ea302f60a6574ae5d65b70240f6ae66229adf522c0d0")
    ]
)
