/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bb1224; name: FUN_00bb1224
 */


ulong FUN_00bb1224(long *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  uVar1 = pthread_mutex_destroy((pthread_mutex_t *)*param_1);
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return (ulong)uVar1;
  }
  lVar4 = tpidr_el0;
  plVar6 = *(long **)(lVar4 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
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
      uVar3 = FUN_00c48fe8(plVar6,lVar5,0,8);
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00bb129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
  return uVar3;
}


