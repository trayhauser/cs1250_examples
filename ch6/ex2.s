	.file	"ex2.cpp"
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
	.section	".rodata"
	.align 8
.LLC0:
	.asciz	"int funct called\n"
	.section	".text"
	.align 4
	.global _Z5functii
	.type	_Z5functii, #function
	.proc	07
_Z5functii:
.LLFB1400:
	!#PROLOGUE# 0
	save	%sp, -120, %sp
.LLCFI1:
	!#PROLOGUE# 1
	st	%i0, [%fp+68]
	st	%i1, [%fp+72]
	sethi	%hi(_ZSt4cout), %g1
	or	%g1, %lo(_ZSt4cout), %o0
	sethi	%hi(.LLC0), %g1
	or	%g1, %lo(.LLC0), %o1
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc, 0
	 nop
	ld	[%fp+68], %o5
	ld	[%fp+72], %g1
	add	%o5, %g1, %g1
	st	%g1, [%fp-20]
	ld	[%fp-20], %f10
	fitod	%f10, %f8
	fmovs	%f8, %f0
	fmovs	%f9, %f1
	ret
	restore
.LLFE1400:
	.size	_Z5functii, .-_Z5functii
	.section	".rodata"
	.align 8
.LLC1:
	.asciz	"double funct called\n"
	.section	".text"
	.align 4
	.global _Z5functdd
	.type	_Z5functdd, #function
	.proc	07
_Z5functdd:
.LLFB1401:
	!#PROLOGUE# 0
	save	%sp, -128, %sp
.LLCFI2:
	!#PROLOGUE# 1
	std	%i0, [%fp-24]
	std	%i2, [%fp-32]
	sethi	%hi(_ZSt4cout), %g1
	or	%g1, %lo(_ZSt4cout), %o0
	sethi	%hi(.LLC1), %g1
	or	%g1, %lo(.LLC1), %o1
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc, 0
	 nop
	ldd	[%fp-24], %f10
	ldd	[%fp-32], %f8
	faddd	%f10, %f8, %f8
	fmovs	%f8, %f0
	fmovs	%f9, %f1
	ret
	restore
.LLFE1401:
	.size	_Z5functdd, .-_Z5functdd
	.section	".rodata"
	.align 8
.LLC2:
	.long	1074790400
	.long	0
	.section	".text"
	.align 4
	.global main
	.type	main, #function
	.proc	04
main:
.LLFB1402:
	!#PROLOGUE# 0
	save	%sp, -128, %sp
.LLCFI3:
	!#PROLOGUE# 1
	sethi	%hi(.LLC2), %g1
	or	%g1, %lo(.LLC2), %g1
	ld	[%g1], %f8
	ld	[%g1+4], %f9
	std	%f8, [%fp-24]
	mov	1, %g1
	st	%g1, [%fp-28]
	ldd	[%fp-24], %o0
	ldd	[%fp-24], %o2
	call	_Z5functdd, 0
	 nop
	fmovs	%f0, %f8
	fmovs	%f1, %f9
	sethi	%hi(_ZSt4cout), %g1
	or	%g1, %lo(_ZSt4cout), %o0
	std	%f8, [%fp-16]
	ldd	[%fp-16], %o4
	mov	%o4, %o1
	mov	%o5, %o2
	call	_ZNSolsEd, 0
	 nop
	mov	%o0, %g1
	mov	%g1, %o0
	sethi	%hi(_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_), %g1
	or	%g1, %lo(_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_), %o1
	call	_ZNSolsEPFRSoS_E, 0
	 nop
	mov	4, %g1
	mov	%g1, %i0
	ret
	restore
.LLFE1402:
	.size	main, .-main
	.section	".gnu.linkonce.t._ZSt3minIjERKT_S2_S2_",#alloc,#execinstr
	.align 4
	.weak	_ZSt3minIjERKT_S2_S2_
	.type	_ZSt3minIjERKT_S2_S2_, #function
	.proc	0116
_ZSt3minIjERKT_S2_S2_:
.LLFB1403:
	!#PROLOGUE# 0
	save	%sp, -120, %sp
.LLCFI4:
	!#PROLOGUE# 1
	st	%i0, [%fp+68]
	st	%i1, [%fp+72]
	ld	[%fp+72], %g1
	ld	[%fp+68], %i5
	ld	[%g1], %i4
	ld	[%i5], %g1
	cmp	%i4, %g1
	bgeu	.LL14
	nop
	ld	[%fp+72], %g1
	st	%g1, [%fp-20]
	b	.LL13
	 nop
.LL14:
	ld	[%fp+68], %g1
	st	%g1, [%fp-20]
.LL13:
	ld	[%fp-20], %i0
	ret
	restore
.LLFE1403:
	.size	_ZSt3minIjERKT_S2_S2_, .-_ZSt3minIjERKT_S2_S2_
	.section	".text"
	.align 4
	.type	_Z41__static_initialization_and_destruction_0ii, #function
	.proc	020
_Z41__static_initialization_and_destruction_0ii:
.LLFB1410:
	!#PROLOGUE# 0
	save	%sp, -112, %sp
.LLCFI5:
	!#PROLOGUE# 1
	st	%i0, [%fp+68]
	st	%i1, [%fp+72]
	ld	[%fp+72], %g1
	sethi	%hi(64512), %o5
	or	%o5, 1023, %o5
	cmp	%g1, %o5
	bne	.LL16
	nop
	ld	[%fp+68], %g1
	cmp	%g1, 1
	bne	.LL16
	nop
	sethi	%hi(_ZSt8__ioinit), %g1
	or	%g1, %lo(_ZSt8__ioinit), %o0
	call	_ZNSt8ios_base4InitC1Ev, 0
	 nop
.LL16:
	ld	[%fp+72], %g1
	sethi	%hi(64512), %o5
	or	%o5, 1023, %o5
	cmp	%g1, %o5
	bne	.LL15
	nop
	ld	[%fp+68], %g1
	cmp	%g1, 0
	bne	.LL15
	nop
	sethi	%hi(_ZSt8__ioinit), %g1
	or	%g1, %lo(_ZSt8__ioinit), %o0
	call	_ZNSt8ios_base4InitD1Ev, 0
	 nop
.LL15:
	nop
	ret
	restore
.LLFE1410:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.align 4
	.type	_GLOBAL__I__Z5functii, #function
	.proc	020
_GLOBAL__I__Z5functii:
.LLFB1411:
	!#PROLOGUE# 0
	save	%sp, -112, %sp
.LLCFI6:
	!#PROLOGUE# 1
	mov	1, %o0
	sethi	%hi(64512), %g1
	or	%g1, 1023, %o1
	call	_Z41__static_initialization_and_destruction_0ii, 0
	 nop
	nop
	ret
	restore
.LLFE1411:
	.size	_GLOBAL__I__Z5functii, .-_GLOBAL__I__Z5functii
	.section	".ctors",#alloc,#write
	.align 4
	.long	_GLOBAL__I__Z5functii
	.section	".text"
	.align 4
	.type	_GLOBAL__D__Z5functii, #function
	.proc	020
_GLOBAL__D__Z5functii:
.LLFB1412:
	!#PROLOGUE# 0
	save	%sp, -112, %sp
.LLCFI7:
	!#PROLOGUE# 1
	mov	0, %o0
	sethi	%hi(64512), %g1
	or	%g1, 1023, %o1
	call	_Z41__static_initialization_and_destruction_0ii, 0
	 nop
	nop
	ret
	restore
.LLFE1412:
	.size	_GLOBAL__D__Z5functii, .-_GLOBAL__D__Z5functii
	.section	".dtors",#alloc,#write
	.align 4
	.long	_GLOBAL__D__Z5functii
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
.LLSFDE3:
	.uaword	.LLEFDE3-.LLASFDE3
.LLASFDE3:
	.uaword	.LLASFDE3-.LLframe1
	.uaword	.LLFB1400
	.uaword	.LLFE1400-.LLFB1400
	.byte	0x0
	.byte	0x4
	.uaword	.LLCFI1-.LLFB1400
	.byte	0xd
	.byte	0x1e
	.byte	0x2d
	.byte	0x9
	.byte	0xf
	.byte	0x1f
	.align 4
.LLEFDE3:
.LLSFDE5:
	.uaword	.LLEFDE5-.LLASFDE5
.LLASFDE5:
	.uaword	.LLASFDE5-.LLframe1
	.uaword	.LLFB1401
	.uaword	.LLFE1401-.LLFB1401
	.byte	0x0
	.byte	0x4
	.uaword	.LLCFI2-.LLFB1401
	.byte	0xd
	.byte	0x1e
	.byte	0x2d
	.byte	0x9
	.byte	0xf
	.byte	0x1f
	.align 4
.LLEFDE5:
.LLSFDE7:
	.uaword	.LLEFDE7-.LLASFDE7
.LLASFDE7:
	.uaword	.LLASFDE7-.LLframe1
	.uaword	.LLFB1402
	.uaword	.LLFE1402-.LLFB1402
	.byte	0x0
	.byte	0x4
	.uaword	.LLCFI3-.LLFB1402
	.byte	0xd
	.byte	0x1e
	.byte	0x2d
	.byte	0x9
	.byte	0xf
	.byte	0x1f
	.align 4
.LLEFDE7:
.LLSFDE11:
	.uaword	.LLEFDE11-.LLASFDE11
.LLASFDE11:
	.uaword	.LLASFDE11-.LLframe1
	.uaword	.LLFB1410
	.uaword	.LLFE1410-.LLFB1410
	.byte	0x0
	.byte	0x4
	.uaword	.LLCFI5-.LLFB1410
	.byte	0xd
	.byte	0x1e
	.byte	0x2d
	.byte	0x9
	.byte	0xf
	.byte	0x1f
	.align 4
.LLEFDE11:
.LLSFDE13:
	.uaword	.LLEFDE13-.LLASFDE13
.LLASFDE13:
	.uaword	.LLASFDE13-.LLframe1
	.uaword	.LLFB1411
	.uaword	.LLFE1411-.LLFB1411
	.byte	0x0
	.byte	0x4
	.uaword	.LLCFI6-.LLFB1411
	.byte	0xd
	.byte	0x1e
	.byte	0x2d
	.byte	0x9
	.byte	0xf
	.byte	0x1f
	.align 4
.LLEFDE13:
.LLSFDE15:
	.uaword	.LLEFDE15-.LLASFDE15
.LLASFDE15:
	.uaword	.LLASFDE15-.LLframe1
	.uaword	.LLFB1412
	.uaword	.LLFE1412-.LLFB1412
	.byte	0x0
	.byte	0x4
	.uaword	.LLCFI7-.LLFB1412
	.byte	0xd
	.byte	0x1e
	.byte	0x2d
	.byte	0x9
	.byte	0xf
	.byte	0x1f
	.align 4
.LLEFDE15:
	.ident	"GCC: (GNU) 3.4.5"
