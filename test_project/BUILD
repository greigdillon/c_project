cc_binary(
    name = "app",
    srcs = ["main.cpp"],
    deps = [":person"],
)

cc_library(
    name = "person",
    srcs = ["Person.cpp"],
    hdrs = ["Person.h"],
    deps = ["@com_google_absl//absl/strings"],
)
