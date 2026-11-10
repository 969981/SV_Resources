/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ce4c4; name: FUN_007ce4c4
 */


ulong FUN_007ce4c4(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_40 [16];
  long local_28;
  
  puVar6 = PTR_DAT_047d0868;
  plVar8 = param_1 + 0x14;
  *(int *)(PTR_DAT_047d0868 + 0x3a8) = (int)*plVar8;
  uVar2 = FUN_00794af4(plVar8);
  *(undefined4 *)(puVar6 + 0x3ac) = uVar2;
  local_28 = 0;
  FUN_007935cc(&local_28);
  lVar10 = local_28 - param_1[0x16];
  plVar3 = (long *)FUN_0079365c();
  puVar1 = PTR_DAT_047d0a08;
  uVar2 = 0;
  if (*plVar3 != 0) {
    uVar2 = (undefined4)(lVar10 / *plVar3);
  }
  *(undefined4 *)(puVar6 + 0x3b0) = uVar2;
  uVar9 = *(undefined8 *)(*(long *)puVar1 + 0x10);
  FUN_00cbd7c0(auStack_40,plVar8);
  FUN_007d9e2c(uVar9,auStack_40);
  if ((int)*plVar8 != 0) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  FUN_007cddf8(*(undefined8 *)puVar1,0);
  if ((int)*plVar8 == 0) {
    uVar5 = 0;
    uVar4 = 0;
    pcVar7 = "JoinSessionJobBase::CompleteProcess";
    puVar6 = PTR_LAB_047d11e8;
  }
  else {
    uVar4 = 0x640000;
    uVar5 = 4;
    pcVar7 = "JoinSessionJobBase::CompleteFailure";
    puVar6 = PTR_LAB_047d11e0;
  }
  param_1[6] = (long)puVar6;
  param_1[7] = 0;
  param_1[8] = (long)pcVar7;
  return uVar4 | uVar5;
}


