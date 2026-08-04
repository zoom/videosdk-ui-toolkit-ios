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
            checksum: "217808b0230b8d8fdce40e067d4f7b65f23666804c36fdb9a8779a9af8af7af0"),
        .binaryTarget(
            name: "ZMUIToolkit",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/ZMUIToolkit.xcframework.zip",
            checksum: "dd795fec44f8222399f4db57bc9ed5549275ff0872a5ead87b71f39216cc23d1"),
        .binaryTarget(
            name: "util",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/util.xcframework.zip",
            checksum: "7b5d3e62105905c8b51bc75db981d9c544bd9740ba0d175e5011be512af61c13"),
        .binaryTarget(
            name: "zContext",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/zContext.xcframework.zip",
            checksum: "09938f781a2fe9b9c1afb1f826a16b0a93d32b510a86ac52f569910d25bc089a"),
        .binaryTarget(
            name: "zoomcml",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/zoomcml.xcframework.zip",
            checksum: "78cfd45699926a8f5aedb05827d868cfa8da58718283bfda708d8745a04f8f79"),
        .binaryTarget(
            name: "CptShare",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/CptShare.xcframework.zip",
            checksum: "5a00ce413719f51ebce6c744a810713995fd6f056781d8fa12e42733c2b6865b"),
        .binaryTarget(
            name: "Whiteboard",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/Whiteboard.xcframework.zip",
            checksum: "1ae600caa1be667cdb63e287701be77b793a0b2e6f6d011ecc2d6013899f77b7"),
        .binaryTarget(
            name: "ZoomTask",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/ZoomTask.xcframework.zip",
            checksum: "f4094be4bc8d07ec7c244fc25f92e9aba98b0596e13fe880ba9bf794aecd0686"),
        .binaryTarget(
            name: "zm_annoter_dynamic",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/zm_annoter_dynamic.xcframework.zip",
            checksum: "6779b41f4780a129c54b2e0989b1c413d2c67b398756a0d5fd20ef1173466674"),
        .binaryTarget(
            name: "ZoomVideoSDKScreenShare",
            url: "https://github.com/zoom/videosdk-ui-toolkit-ios/releases/download/beta-0.0.2/ZoomVideoSDKScreenShare.xcframework.zip",
            checksum: "f85d4d34f362c70fd817135413cd03e65689945ebe51377ea2bd3bcb50c908d5")
    ]
)
