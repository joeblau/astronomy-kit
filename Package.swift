import PackageDescription

let package = Package(
    name: "AstronomyKit",
    products: [
        .library(
            name: "AstronomyKit",
            targets: ["AstronomyKit"]),
        ],
    dependencies: [
    ],
    targets: [
        .target(
            name: "AstronomyKit",
            dependencies: [])
    ]
)
