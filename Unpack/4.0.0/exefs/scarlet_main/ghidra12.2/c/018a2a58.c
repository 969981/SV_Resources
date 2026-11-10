/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018a2a58; name: FUN_018a2a58
 */


void FUN_018a2a58(long *param_1,undefined1 *param_2)

{
  void *__src;
  int iVar1;
  ulong uVar2;
  void *__dest;
  long lVar3;
  long *plVar4;
  size_t __n;
  
  uVar2 = FUN_018a2bdc(param_1,(param_1[1] - *param_1) + 1);
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  if (uVar2 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = operator_new(uVar2);
  }
  *(undefined1 *)((long)__dest + __n) = *param_2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *param_1 = (long)__dest;
  param_1[1] = (long)((undefined1 *)((long)__dest + __n) + 1);
  param_1[2] = (long)__dest + uVar2;
  if (__src == (void *)0x0) {
    return;
  }
  lVar3 = tpidr_el0;
  plVar4 = *(long **)(lVar3 + 0x30);
  if (plVar4 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar4 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar4,__src,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x018a2b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,__src,0,8);
  return;
}


