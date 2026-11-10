/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0213de18; name: FUN_0213de18
 */


void FUN_0213de18(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = param_1[6];
  *param_1 = (long)&PTR_FUN_04595ba0;
  param_1[4] = (long)&PTR_LAB_04595be0;
  param_1[6] = 0;
  if (lVar6 != 0) {
    plVar2 = (long *)param_1[7];
    lVar3 = param_1[8];
    lVar7 = param_1[9];
    uVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar6,lVar3,lVar7);
        goto LAB_0213de50;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar6,lVar3,lVar7);
  }
LAB_0213de50:
  puVar1 = PTR_DAT_047dcf30 + 0x50;
  *param_1 = (long)(PTR_DAT_047dcf30 + 0x10);
  param_1[4] = (long)puVar1;
                    /* WARNING: Could not recover jumptable at 0x0213de84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0xd0))();
  return;
}


