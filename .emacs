;;n package repos
(require 'package)
 (setq package-archives
       '(("melpa" . "http://melpa.org/packages/")
         ("marmalade" . "https://marmalade-repo.org/packages/")
         ("gnu" . "https://elpa.gnu.org/packages/")))
(add-to-list 'package-archives '("org" . "https://orgmode.org/elpa/") t)
(package-initialize)

;;n set default directory
(setq default-directory "C:/Users/nat/Dropbox/emacs/")

;;n start server (for auto opening emacs)
(server-start)

;;n line numbers on (causes major lag in large files)
;; (global-linum-mode t)
;; (global-nlinum-relative-mode)

;;n word wrapping on
(global-visual-line-mode t)

;;n enable/disable various bars
(menu-bar-mode +1)
(tool-bar-mode -1)
(toggle-scroll-bar -1)

;;n highlight active line
(global-hl-line-mode +1)
(set-face-background 'hl-line "#3e4446")

;;n built-in dark color scheme
(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(ansi-color-names-vector
   ["#212526" "#ff4b4b" "#b4fa70" "#fce94f" "#729fcf" "#ad7fa8" "#8cc4ff" "#eeeeec"])
 '(custom-enabled-themes (quote (wheatgrass)))
 '(inhibit-startup-screen t)
 '(package-selected-packages (quote (ag org-plus-contrib org-edna nlinum))))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )

;;n I don't remember what this is for
;; Disable loading of ¡°default.el¡± at startup,
;; in Fedora all it does is fix window title which I rather configure differently
; (setq inhibit-default-init t)

;;n show file path in frame title
(setq-default frame-title-format "%b (%f)")

;;n not positive this really works
; remove-smart-quotes
; (defun replace-smart-quotes (beg end)
;   "Replace 'smart quotes' in buffer or region with ascii quotes."
;   (interactive "r")
;   (format-replace-strings '(("\x201C" . "\"")
;                             ("\x201D" . "\"")
;                             ("\x2018" . "'")
;                             ("\x2019" . "'"))
;                           nil beg end))

;;n window resize hotkeys (hotkey confliction with org-mode)
; (global-set-key (kbd "S-C-<left>") 'shrink-window-horizontally)
; (global-set-key (kbd "S-C-<right>") 'enlarge-window-horizontally)
; (global-set-key (kbd "S-C-<down>") 'shrink-window)
; (global-set-key (kbd "S-C-<up>") 'enlarge-window)
