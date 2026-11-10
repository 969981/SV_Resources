/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024d8c0; name: FUN_0024d8c0
 */


void FUN_0024d8c0(ulong *param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  size_t __n;
  undefined1 *__dest;
  ulong uVar3;
  char acStack_50 [32];
  
  iVar1 = snprintf(acStack_50,0x20,"%08x",(ulong)(param_2 & 0x3fffff));
  plVar2 = (long *)FUN_01cf7e20(iVar1);
  param_1[3] = (ulong)plVar2;
  __n = strlen(acStack_50);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0024d964;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  memcpy(__dest,acStack_50,__n);
LAB_0024d964:
  __dest[__n] = 0;
  return;
}


