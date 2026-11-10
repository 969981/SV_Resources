/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00baee9c; name: FUN_00baee9c
 */


void FUN_00baee9c(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_00baee9c(*param_1);
  FUN_00baee9c(param_1[1]);
  lVar3 = tpidr_el0;
  if (((*(byte *)(param_1 + 4) & 1) != 0) && (lVar6 = param_1[6], lVar6 != 0)) {
    plVar5 = *(long **)(lVar3 + 0x30);
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar5 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar6,0,8);
        goto LAB_00baeed0;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar6,0,8);
  }
LAB_00baeed0:
  plVar5 = *(long **)(lVar3 + 0x30);
  if (plVar5 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar5 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar5,param_1,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00baef20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,param_1,0,8);
  return;
}


