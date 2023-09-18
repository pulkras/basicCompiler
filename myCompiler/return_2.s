//	.file	"return_1.c"
//	.text
//	.section	.text.startup,"ax",@progbits
//	.p2align 4
	.globl	main
//	.type	main, @function
main:
	movl	$2, %eax
	ret
//	.size	main, .-main
//	.ident	"GCC: (Gentoo 11.3.0 p7) 11.3.0"
//	.section	.note.GNU-stack,"",@progbits
