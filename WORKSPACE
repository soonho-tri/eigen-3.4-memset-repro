workspace(name = "EigenDemo")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "eigen",
    build_file = "//:eigen.BUILD",
    sha256 = "d7bcd550b5dfc661d2a0f0076a5a957080c1834ef4d057f15f8a0026bf99bcaf",
    strip_prefix = "eigen-3.4",
    urls = [
        "https://gitlab.com/libeigen/eigen/-/archive/3.4/eigen-3.4.tar.gz",
    ],
)
