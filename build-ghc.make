api = 2
core = 7.x

; Include Drupal core and any core patches from my drupal base; (was:) Build Kit
;includes[] = https://raw2.github.com/groovehunter/drupal/master/drupal-org-core.make
includes[] = https://raw.github.com/groovehunter/drupal/core720/drupal-org-core.make

projects[ghc][type] = profile
projects[ghc][download][type] = git
projects[ghc][download][url] = https://github.com/groovehunter/ghc.git
projects[ghc][download][branch] = master

