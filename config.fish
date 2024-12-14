function fish_prompt
    set -l last_status $status

    # フルパスを表示
    set_color $fish_color_cwd
    echo -n (pwd)
    set_color normal

    # Gitブランチ情報を表示（もし存在すれば）
    if command -v git >/dev/null
        set -l git_branch (git branch 2>/dev/null | sed -n '/\* /s///p')
        if test -n "$git_branch"
            set_color yellow
            echo -n " ($git_branch)"
            set_color normal
        end
    end

    # 改行して入力を開始
    echo
    echo -n '➜ '

    set_color normal
end

#エイリアスの作成
function ccc
    cc -Wall -Wextra -Werror $argv
end

function norm
    norminette -R CheckForbiddenSourceHeader $argv
end


