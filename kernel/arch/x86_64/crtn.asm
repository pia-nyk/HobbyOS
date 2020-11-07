
[BITS 32]

;; The .init section contains the _init function
section .init
        ;; GCC will put the contents of crtend.o's .init section here
        ;; The ending of the _init function
        pop	ebp
	ret


;; The .fini section contains the _fini function
section .fini
        ;; GCC will put the contents of crtend.o's .fini section here
        ;; The ending of the _fini function
        pop	ebp
	ret
