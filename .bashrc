#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
alias grep='grep --color=auto'
alias xm4='bluetoothctl connect AC:80:0A:77:F4:54'
alias xm4d='bluetoothctl disconnect AC:80:0A:77:F4:54'
alias off='shutdown now'
PS1='\u@\w\$ '
