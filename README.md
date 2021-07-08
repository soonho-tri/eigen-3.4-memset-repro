A small example to reproduce the problem reported in https://github.com/RobotLocomotion/drake/issues/15298

Repro steps:

1. Install bazel: See https://docs.bazel.build/versions/main/install.html

2. Check out this repo

3. Run `bazel build //... && ./bazel-bin/main`

Note: This is using the `3.4-rc1` tag, https://gitlab.com/libeigen/eigen/-/commit/1f4c0311cda3403999b702c996898af5707973a9. You can change the eigen version in `WORKSPACE` file.
