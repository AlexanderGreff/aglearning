
#*********** aliases  *****************************************************

alias gitc='git clone ' 

alias bl="/bin/ls"
alias l="ls -l"
alias la="ls -la"
alias ll="ls -Lo"
alias lr="ls -og"
#alias ls="ls -F"
alias bc="bc -l"
alias u="cd .."
alias rd="rm -rf "
alias md="mkdir -p "
alias h="history 10000"
alias pe='env|sort'
alias ssh='ssh -X '
alias now="date +%Y%m%d-%H%M%S"
alias del=" /bin/rm -f  *~  .*~ *.bak .*.bak *.BAK ;find -L . -name \"*~\" -delete ; find -L . -name \"core\" -delete ;find -L . -name \".#*\" -delete ;"

export LC_ALL=C

#PS1='[$? \u@\h:\w]\$'
#PS1='$? \[\e]0;\u@\h: \w\a\]${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$'
PS1='$? \[\e]0;\u@\h: \w\a\]${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\] \n \[\033[1;33m\]!\! :\[\033[00m\] '

export PATH=.:$PATH:~/bin/:
PATH=$PATH:/opt/rh/gcc-toolset-12/root/usr/bin/:/opt/rh/gcc-toolset-11/root/usr/bin/:/opt/rh/gcc-toolset-10/root/usr/bin/:/opt/rh/gcc-toolset-9/root/usr/bin/:

function sm
{
	VGPWD=$PWD
	source ~/.bash_aliases
	cd $VGPWD
}

# Source extra setting
if [ -f ~/.bash_aliases-p72 ]; then
        . ~/.bash_aliases-p72
else
        if [ -e /etc/redhat-release ]; then
                source scl_source enable gcc-toolset-12
        fi
fi

