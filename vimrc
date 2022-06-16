set nu
syntax on
set mouse=a
set	smartindent
set tabstop=4
set shiftwidth=4
set background=dark
colorscheme iceberg

" ++++++++++++++++++++++++++ "
"          NERDTree          "
" ++++++++++++++++++++++++++ "
" a file browser to optimise your workflow
" https://github.com/preservim/nerdtree -- full documention here

" map Ctrl-N to toggle NerdTree
map <C-n> :NERDTreeToggle<CR>

" auto load NERDTREE when starting vim with no file/folder
autocmd StdinReadPre * let s:std_in=1
autocmd VimEnter * if argc() == 0 && !exists("s:std_in") | NERDTree | endif

" Close VIM if NERDTREE is only window left
autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTree") && b:NERDTree.isTabTree()) | q | endif
