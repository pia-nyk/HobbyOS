[BITS 32]

;; The .init section contains the _init function
section .init

global _init
_init:
	push	ebp
	mov	ebp, esp
	;; GCC will put the contents of crtbegin.o's .init section here


;; The .fini section contains the _fini function
section .fini

global	_fini
_fini:
	push	ebp
	mov	ebp, esp
