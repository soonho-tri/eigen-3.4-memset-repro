workspace(name = "EigenDemo")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")

new_git_repository(
    name = "eigen",
    build_file = "//:eigen.BUILD",
    commit = "e9c9a3130b7307a240335aa527a6d4c5fb2ee471",
    # commit = "4780d8dfb2b0e9bcff063c80f4ffce71d9d7a725",
    remote = "https://gitlab.com/libeigen/eigen.git",
    shallow_since = "1624302437 +0000",
)
