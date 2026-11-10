/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bbdd90; name: FUN_00bbdd90
 */


void FUN_00bbdd90(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_0455a760;
  if ((((param_1[1] & 1) != 0) &&
      (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), plVar1 != (long *)0x0)) &&
     (plVar1[1] == 0)) {
    if (*plVar1 != 0) {
      FUN_00bfee44(plVar1);
    }
    lVar4 = tpidr_el0;
    plVar5 = *(long **)(lVar4 + 0x30);
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
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
        FUN_00c48fe8(plVar5,plVar1,0,8);
        goto LAB_00bbde24;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,plVar1,0,8);
  }
LAB_00bbde24:
  param_1[1] = 0;
  return;
}


