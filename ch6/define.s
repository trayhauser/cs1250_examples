	.file	"define.cpp"
	.section	".text"
	.align 4
	.type	_ZSt17__verify_groupingPKcjRKSs, #function
	.proc	04
_ZSt17__verify_groupingPKcjRKSs:
.LLFB1319:
	!#PROLOGUE# 0
	save	%sp, -144, %sp
.LLCFI0:
	!#PROLOGUE# 1
	st	%i0, [%fp+68]
	st	%i1, [%fp+72]
	st	%i2, [%fp+76]
	ld	[%fp+76], %o0
	call	_ZNKSs4sizeEv, 0
	 nop
	mov	%o0, %g1
	add	%g1, -1, %g1
	st	%g1, [%fp-20]
	add	%fp, -20, %o5
	ld	[%fp+72], %g1
	add	%g1, -1, %g1
	st	%g1, [%fp-28]
	add	%fp, -28, %g1
	mov	%o5, %o0
	mov	%g1, %o1
	call	_ZSt3minIjERKT_S2_S2_, 0
	 nop
	mov	%o0, %g1
	ld	[%g1], %g1
	st	%g1, [%fp-24]
	ld	[%fp-20], %g1
	st	%g1, [%fp-32]
	mov	1, %g1
	stb	%g1, [%fp-33]
	st	%g0, [%fp-40]
.LL2:
	ld	[%fp-40], %o5
	ld	[%fp-24], %g1
	cmp	%o5, %g1
	bgeu	.LL5
	nop
	ldub	[%fp-33], %g1
	and	%g1, 0xff, %g1
	cmp	%g1, 0
	be	.LL5
	nop
	ld	[%fp+76], %o0
	ld	[%fp-32], %o1
	call	_ZNKSsixEj, 0
	 nop
	mov	%o0, %g1
	ldub	[%g1], %g1
	sll	%g1, 24, %g1
	sra	%g1, 24, %o4
	ld	[%fp+68], %o5
	ld	[%fp-40], %g1
	add	%o5, %g1, %g1
	ldub	[%g1], %g1
	sll	%g1, 24, %g1
	sra	%g1, 24, %g1
	xor	%o4, %g1, %g1
	subcc	%g0, %g1, %g0
	subx	%g0, -1, %g1
	stb	%g1, [%fp-33]
	ld	[%fp-32], %g1
	add	%g1, -1, %g1
	st	%g1, [%fp-32]
	ld	[%fp-40], %g1
	add	%g1, 1, %g1
	st	%g1, [%fp-40]
	b	.LL2
	 nop
.LL5:
	ld	[%fp-32], %g1
	cmp	%g1, 0
	be	.LL6
	nop
	ldub	[%fp-33], %g1
	and	%g1, 0xff, %g1
	cmp	%g1, 0
	be	.LL6
	nop
	ld	[%fp+76], %o0
	ld	[%fp-32], %o1
	call	_ZNKSsixEj, 0
	 nop
	mov	%o0, %g1
	ldub	[%g1], %g1
	sll	%g1, 24, %g1
	sra	%g1, 24, %o4
	ld	[%fp+68], %o5
	ld	[%fp-24], %g1
	add	%o5, %g1, %g1
	ldub	[%g1], %g1
	sll	%g1, 24, %g1
	sra	%g1, 24, %g1
	xor	%o4, %g1, %g1
	subcc	%g0, %g1, %g0
	subx	%g0, -1, %g1
	stb	%g1, [%fp-33]
	ld	[%fp-32], %g1
	add	%g1, -1, %g1
	st	%g1, [%fp-32]
	b	.LL5
	 nop
.LL6:
	ld	[%fp+76], %o0
	mov	0, %o1
	call	_ZNKSsixEj, 0
	 nop
	mov	%o0, %g1
	ldub	[%g1], %g1
	sll	%g1, 24, %g1
	sra	%g1, 24, %o4
	ld	[%fp+68], %o5
	ld	[%fp-24], %g1
	add	%o5, %g1, %g1
	ldub	[%g1], %g1
	sll	%g1, 24, %g1
	sra	%g1, 24, %g1
	cmp	%o4, %g1
	bg	.LL8
	nop
	ldub	[%fp-33], %g1
	and	%g1, 0xff, %g1
	and	%g1, 1, %g1
	stb	%g1, [%fp-41]
	b	.LL9
	 nop
.LL8:
	stb	%g0, [%fp-41]
.LL9:
	ldub	[%fp-41], %g1
	stb	%g1, [%fp-33]
	ldub	[%fp-33], %g1
	and	%g1, 0xff, %g1
	mov	%g1, %i0
	ret
	restore
.LLFE1319:
	.size	_ZSt17__verify_groupingPKcjRKSs, .-_ZSt17__verify_groupingPKcjRKSs
	.local	_ZSt8__ioinit
	.common	_ZSt8__ioinit,1,1
	.section	".ctors",#alloc,#write
	.align 4
	.long	_GLOBAL__I_main
	.section	".dtors",#alloc,#write
	.align 4
	.long	_GLOBAL__D_main
	.weak	pthread_mutex_unlock
	.weak	pthread_mutex_trylock
	.weak	pthread_mutex_lock
	.weak	pthread_create
	.weak	pthread_setspecific
	.weak	pthread_getspecific
	.weak	pthread_key_delete
	.weak	pthread_key_create
	.weak	pthread_once
	.section	".eh_frame",#alloc,#write
.LLframe1:
	.uaword	.LLECIE1-.LLSCIE1
.LLSCIE1:
	.uaword	0x0
	.byte	0x1
	.asciz	"zP"
	.byte	0x1
	.byte	0x7c
	.byte	0xf
	.byte	0x8
	.byte	0x50
	.align 4
	.long	__gxx_personality_v0
	.byte	0xc
	.byte	0xe
	.byte	0x0
	.align 4
.LLECIE1:
.LLSFDE1:
	.uaword	.LLEFDE1-.LLASFDE1
.LLASFDE1:
	.uaword	.LLASFDE1-.LLframe1
	.uaword	.LLFB1319
	.uaword	.LLFE1319-.LLFB1319
	.byte	0x0
	.byte	0x4
	.uaword	.LLCFI0-.LLFB1319
	.byte	0xd
	.byte	0x1e
	.byte	0x2d
	.byte	0x9
	.byte	0xf
	.byte	0x1f
	.align 4
.LLEFDE1:
	.ident	"GCC: (GNU) 3.4.5"
