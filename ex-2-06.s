	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_extract_tag
	.p2align	4, 0x90
_extract_tag:                           ## @extract_tag
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	andl	$3, %edi
	movl	%edi, %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_extract_ptr
	.p2align	4, 0x90
_extract_ptr:                           ## @extract_ptr
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi3:
	.cfi_def_cfa_offset 16
Lcfi4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi5:
	.cfi_def_cfa_register %rbp
	andl	$-4, %edi
	movl	%edi, %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_set_tag
	.p2align	4, 0x90
_set_tag:                               ## @set_tag
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi6:
	.cfi_def_cfa_offset 16
Lcfi7:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi8:
	.cfi_def_cfa_register %rbp
	andl	$-4, %edi
	orl	%esi, %edi
	movl	%edi, %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_ith_bit
	.p2align	4, 0x90
_ith_bit:                               ## @ith_bit
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi9:
	.cfi_def_cfa_offset 16
Lcfi10:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi11:
	.cfi_def_cfa_register %rbp
	movl	%esi, %ecx
	shrl	%cl, %edi
	andl	$1, %edi
	movl	%edi, %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi12:
	.cfi_def_cfa_offset 16
Lcfi13:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi14:
	.cfi_def_cfa_register %rbp
	pushq	%rbx
	pushq	%rax
Lcfi15:
	.cfi_offset %rbx, -24
	movl	$10, %edi
	callq	_extract_tag
	movl	%eax, %ecx
	leaq	L_.str(%rip), %rbx
	xorl	%eax, %eax
	movq	%rbx, %rdi
	movl	%ecx, %esi
	callq	_printf
	movl	$6429, %edi             ## imm = 0x191D
	callq	_extract_tag
	movl	%eax, %ecx
	xorl	%eax, %eax
	movq	%rbx, %rdi
	movl	%ecx, %esi
	callq	_printf
	movl	$99649, %edi            ## imm = 0x18541
	callq	_extract_tag
	movl	%eax, %ecx
	xorl	%eax, %eax
	movq	%rbx, %rdi
	movl	%ecx, %esi
	callq	_printf
	movl	$8660, %edi             ## imm = 0x21D4
	callq	_extract_ptr
	movl	%eax, %ecx
	xorl	%eax, %eax
	movq	%rbx, %rdi
	movl	%ecx, %esi
	callq	_printf
	movl	$83660, %edi            ## imm = 0x146CC
	callq	_extract_ptr
	movl	%eax, %ecx
	xorl	%eax, %eax
	movq	%rbx, %rdi
	movl	%ecx, %esi
	callq	_printf
	movl	$847756, %edi           ## imm = 0xCEF8C
	callq	_extract_ptr
	movl	%eax, %ecx
	xorl	%eax, %eax
	movq	%rbx, %rdi
	movl	%ecx, %esi
	callq	_printf
	movl	$8663, %edi             ## imm = 0x21D7
	movl	$2, %esi
	callq	_set_tag
	movl	%eax, %ecx
	xorl	%eax, %eax
	movq	%rbx, %rdi
	movl	%ecx, %esi
	callq	_printf
	movl	$8662, %edi             ## imm = 0x21D6
	movl	$3, %esi
	callq	_set_tag
	movl	%eax, %ecx
	xorl	%eax, %eax
	movq	%rbx, %rdi
	movl	%ecx, %esi
	callq	_printf
	movl	$78462, %edi            ## imm = 0x1327E
	movl	$1, %esi
	callq	_set_tag
	movl	%eax, %ecx
	xorl	%eax, %eax
	movq	%rbx, %rdi
	movl	%ecx, %esi
	callq	_printf
	movl	$8669232, %edi          ## imm = 0x844830
	xorl	%esi, %esi
	callq	_set_tag
	movl	%eax, %ecx
	xorl	%eax, %eax
	movq	%rbx, %rdi
	movl	%ecx, %esi
	callq	_printf
	xorl	%eax, %eax
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d\n"


.subsections_via_symbols
