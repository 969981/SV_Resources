/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a6904; name: FUN_028a6904
 */


void FUN_028a6904(long *param_1,undefined1 *param_2)

{
  void *__src;
  int iVar1;
  long lVar2;
  void *__dest;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  size_t __n;
  
  lVar2 = FUN_028a81a4(param_1,(param_1[1] - *param_1) + 1);
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  lVar4 = tpidr_el0;
  if (lVar2 == 0) {
    __dest = (void *)0x0;
  }
  else {
    plVar5 = *(long **)(lVar4 + 0x30);
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar5 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    __dest = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,lVar2,8);
  }
  *(undefined1 *)((long)__dest + __n) = *param_2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *param_1 = (long)__dest;
  param_1[1] = (long)((undefined1 *)((long)__dest + __n) + 1);
  param_1[2] = (long)__dest + lVar2;
  if (__src == (void *)0x0) {
    return;
  }
  plVar5 = *(long **)(lVar4 + 0x30);
  if (plVar5 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar5 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar5,__src,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028a6a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,__src,0,8);
  return;
}


