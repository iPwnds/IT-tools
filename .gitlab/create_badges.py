import os
import anybadge


def create_build_badge():
    label = 'Artikel compileert'

    if os.environ.get('BUILD_SUCCESS') == '1':
        badge = anybadge.Badge(label=label, value='OK', default_color='green')
    else:
        badge = anybadge.Badge(label=label, value='FAIL', default_color='red')
    badge.write_badge('build_success.svg')


def create_auxiliary_files_badge():
    label = "Geen tijdelijke LaTeX-bestanden"

    if os.environ.get('AUXILIARY_FILES') == '1':
        badge = anybadge.Badge(label=label, value='OK', default_color='green')
    else:
        badge = anybadge.Badge(label=label, value='FAIL', default_color='red')
    badge.write_badge('auxiliary_files.svg')


def create_word_count_badge():
    label = 'Artikel voldoet aan woordlimiet'
    lower_limit = 2000
    upper_limit = 2200

    word_count = int(os.environ.get('WORD_COUNT'))
    if word_count and lower_limit <= word_count <= upper_limit:
        badge = anybadge.Badge(label=label, value=f'OK ({word_count} woorden)', default_color='green')
    else:
        badge = anybadge.Badge(label=label, value=f'FAIL ({word_count} woorden)', default_color='red')
    badge.write_badge('word_count.svg')


if __name__ == '__main__':
    create_build_badge()
    create_auxiliary_files_badge()
    create_word_count_badge()
