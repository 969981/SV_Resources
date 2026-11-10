/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00210394; name: FUN_00210394
 */


void FUN_00210394(undefined4 *param_1,undefined8 param_2,undefined4 param_3,char *param_4,
                 long *param_5)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  void *__dest;
  ulong uVar3;
  
  *param_1 = param_3;
  plVar1 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 8) = plVar1;
  __n = strlen(param_4);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 002104b4 to 002104bb has its CatchHandler @ 002104bc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 9);
    *(char *)(param_1 + 2) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0021043c;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 2) = uVar3 | 1;
    *(size_t *)(param_1 + 4) = __n;
    *(void **)(param_1 + 6) = __dest;
  }
  memcpy(__dest,param_4,__n);
LAB_0021043c:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(long *)(param_1 + 0xc) = *param_5;
  lVar2 = param_5[1];
  *(long *)(param_1 + 0x10) = param_5[2];
  *(long *)(param_1 + 0xe) = lVar2;
  lVar2 = param_5[3];
  plVar1 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = lVar2;
  if (lVar2 == 0) {
    *(long **)(param_1 + 0xc) = plVar1;
  }
  else {
    *(long **)(*plVar1 + 0x10) = plVar1;
    param_5[1] = 0;
    *param_5 = (long)(param_5 + 1);
    param_5[3] = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
                    /* try { // try from 00210494 to 0021049b has its CatchHandler @ 002104c0 */
  FUN_00200584(param_1 + 0x14,param_2);
  return;
}


