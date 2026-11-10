/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c93f0; name: FUN_004c93f0
 */


void FUN_004c93f0(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  void *__dest;
  long *plVar2;
  size_t __n;
  ulong uVar3;
  
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x50);
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar2 = (long *)*param_4;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  if (plVar2[1] - *plVar2 != 0) {
    uVar3 = plVar2[1] - *plVar2 >> 2;
    if (uVar3 >> 0x3e != 0) {
                    /* try { // try from 004c94ac to 004c94b3 has its CatchHandler @ 004c94b4 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38);
    *(void **)(lVar1 + 0x20) = __dest;
    *(void **)(lVar1 + 0x28) = __dest;
    *(void **)(lVar1 + 0x30) = (void *)((long)__dest + uVar3 * 4);
    __n = plVar2[1] - *plVar2;
    if (0 < (long)__n) {
      memcpy(__dest,(void *)*plVar2,__n);
      __dest = (void *)((long)__dest + __n);
    }
    *(void **)(lVar1 + 0x28) = __dest;
  }
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


