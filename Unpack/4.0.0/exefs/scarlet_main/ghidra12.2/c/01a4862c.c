/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a4862c; name: FUN_01a4862c
 */


void FUN_01a4862c(long *param_1,ulong param_2)

{
  void *__src;
  int iVar1;
  long lVar2;
  ulong uVar3;
  size_t __n;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *__dest;
  
  lVar4 = *param_1;
  if ((ulong)(param_1[2] - lVar4 >> 2) < param_2) {
    lVar5 = param_1[1];
    lVar2 = FUN_01a487a0(param_2);
    __src = (void *)*param_1;
    lVar4 = lVar2 + (lVar5 - lVar4);
    __n = param_1[1] - (long)__src;
    __dest = (void *)(lVar4 - __n);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *param_1 = (long)__dest;
    param_1[1] = lVar4;
    param_1[2] = lVar2 + param_2 * 4;
    if (__src != (void *)0x0) {
      lVar4 = tpidr_el0;
      plVar6 = *(long **)(lVar4 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if ((uVar3 & 1) != 0) {
        lVar4 = FUN_00c4e600();
        if (0 < *(int *)(lVar4 + 0x12c8)) {
          FUN_00c48fe8(plVar6,__src,0,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01a4870c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,__src,0,8);
      return;
    }
  }
  return;
}


