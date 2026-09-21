project(
  'template', 'cpp',
  version : '0.1.0',
  default_options : ['cpp_std=c++20']
)

# input dependencies.
deps = [dependency('boost')]

# build library.
lib = static_library(
  'core',
  ['src/lib.cc'],
  dependencies: deps
)

# test target.
test_exe = executable(
  'core_test',
  ['tests/test.cc'],
  dependencies: dependency('gtest'),
  link_with: lib,
)
test('core_test', test_exe, workdir: meson.project_source_root())

# build target.
exe = executable(
  'main',
  ['src/main.cc'],
  link_with: lib
)

