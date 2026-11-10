/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347e430; name: FUN_0347e430
 */


void FUN_0347e430(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  *param_1 = (long)&PTR_FUN_047c2648;
  FUN_034de290();
  while (puVar1 = PTR_DAT_047e70a0, plVar3 = (long *)param_1[3], plVar3 != (long *)0x0) {
    if (plVar3[3] == 0) {
      param_1[3] = 0;
    }
    else {
      param_1[3] = plVar3[3];
    }
    (**(code **)(*plVar3 + 0x18))();
  }
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  lVar5 = tpidr_el0;
  plVar3 = *(long **)(lVar5 + 0x30);
  if (plVar3 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar3 = DAT_04859430;
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  uVar4 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar3,param_1,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0347e4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_1,0,8);
  return;
}


