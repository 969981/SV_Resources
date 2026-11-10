/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034797d4; name: FUN_034797d4
 */


void FUN_034797d4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)&PTR_FUN_047c2450;
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[7] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(1);
  }
  param_1[7] = 0;
  if (param_1[6] != 0) {
    (**(code **)(puVar1 + 0x30))(1);
  }
  param_1[6] = 0;
  if (param_1[4] != 0) {
    (**(code **)(puVar1 + 0x30))(1);
  }
  *param_1 = (long)(PTR_DAT_047e70a0 + 0x10);
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
      FUN_00c48fe8(plVar5,param_1,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x034798a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,param_1,0,8);
  return;
}


