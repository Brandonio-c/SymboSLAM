# Project metadata

project = 'Cowl'
copyright = '2019-2021, SisInf Lab, Polytechnic University of Bari'
author = 'SisInf Lab, Polytechnic University of Bari'
version = '0.5.2'
release = '0.5.2'
logo = '/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/docs/img/cowl_logo.png'
git_url = 'https://github.com/sisinflab-swot/cowl'
poliba_url = 'http://www.poliba.it'
sisinflab_url = 'http://sisinflab.poliba.it'
swot_url = 'http://swot.sisinflab.poliba.it'

# Sphinx

primary_domain = 'cpp'
default_role = 'any'
extensions = ['breathe', 'sphinx.ext.intersphinx']
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']
rst_prolog = f':github_url: {git_url}'
rst_epilog = (
    f'.. _git_url: {git_url}\n'
    f'.. _swot_url: {swot_url}\n'
    f'.. _poliba_url: {poliba_url}\n'
)

# HTML

html_theme = 'sphinx_rtd_theme'
html_theme_options = { 'logo_only': False }
templates_path = ['/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/docs/_templates']
html_static_path = ['/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/docs/_static', '/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/docs/img']
html_logo = logo
html_short_title = '{} docs'.format(project)
html_context = {
    'poliba_url': poliba_url,
    'sisinflab_url': sisinflab_url,
    'swot_url': swot_url
}
html_copy_source = False
html_show_sphinx = False
html_use_index = False

# Intersphinx

intersphinx_mapping = {
    'ulib': ('https://ivanobilenchi.com/docs/ulib', '/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/lib/ulib/docs/sphinx/html/objects.inv')
}

# Breathe

breathe_projects = { project: '/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/docs/doxygen/xml' }
breathe_default_project = project
breathe_default_members = ('members', 'undocmembers')

# Setup

def setup(app):
    app.add_css_file('style.css')
