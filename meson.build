project(
    'inventory  ',
    ['cpp', 'c'],
    version: '0.1.0',
    meson_version: '>= 0.62.0',
    default_options: [
        'warning_level=2',
        'werror=false',
        'cpp_std=gnu++2a',
    ],
)

inventory_sources = [
    'main.cpp',
    'menu.cpp',
    'computer.cpp',
    'computer.hpp',
    'menu.hpp',
    'helpers.cpp',
    'helpers.hpp',
]

inventory_deps = []

executable(
    'inventory',
    inventory_sources,
    dependencies: inventory_deps,
    install: true,
)

