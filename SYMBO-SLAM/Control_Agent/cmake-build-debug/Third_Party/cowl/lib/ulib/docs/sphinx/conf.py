# Project metadata

project = 'uLib'
copyright = '2018-2021, Ivano Bilenchi'
author = 'Ivano Bilenchi'
version = '0.1.0'
release = '0.1.0'
git_url = 'https://github.com/IvanoBilenchi/ulib'

# Sphinx

primary_domain = 'cpp'
default_role = 'any'
extensions = ['breathe']
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']
rst_prolog = f':github_url: {git_url}'
rst_epilog = f'.. _git_url: {git_url}'

# HTML

html_theme = 'sphinx_rtd_theme'
html_theme_options = { 'logo_only': False }
html_short_title = '{} docs'.format(project)
html_copy_source = False
html_show_sphinx = False
html_use_index = False

# Breathe

breathe_projects = { project: '/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/lib/ulib/docs/doxygen/xml' }
breathe_default_project = project
breathe_default_members = ('members', 'undocmembers')
