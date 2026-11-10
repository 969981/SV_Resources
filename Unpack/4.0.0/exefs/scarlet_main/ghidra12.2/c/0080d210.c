/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080d210; name: FUN_0080d210
 */


ulong FUN_0080d210(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  char *pcVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_60 [16];
  int local_50 [4];
  long local_40 [2];
  undefined4 local_28 [2];
  
  local_40[0] = CONCAT44(local_40[0]._4_4_,0x10408);
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  piVar9 = (int *)(param_1 + 0xc0);
  if (*piVar9 != (int)local_40[0]) {
    local_28[0] = 0;
    local_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
    iVar1 = *piVar9;
    if (iVar1 != local_50[0]) goto LAB_0080d2b0;
  }
  local_40[0] = CONCAT44(local_40[0]._4_4_,0xc406);
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  FUN_018ff39c(piVar9,local_40);
  iVar1 = *piVar9;
LAB_0080d2b0:
  puVar7 = PTR_DAT_047d0868;
  *(int *)(PTR_DAT_047d0868 + 0x3a8) = iVar1;
  uVar3 = FUN_00794af4(piVar9);
  *(undefined4 *)(puVar7 + 0x3ac) = uVar3;
  local_40[0] = 0;
  FUN_007935cc(local_40);
  lVar11 = local_40[0] - *(long *)(param_1 + 0xe8);
  plVar4 = (long *)FUN_0079365c();
  puVar2 = PTR_DAT_047d0a08;
  uVar3 = 0;
  if (*plVar4 != 0) {
    uVar3 = (undefined4)(lVar11 / *plVar4);
  }
  *(undefined4 *)(puVar7 + 0x3b0) = uVar3;
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0x10);
  FUN_00cbd7c0(auStack_60,piVar9);
  FUN_007d9e2c(uVar10,auStack_60);
  FUN_007cddf8(*(undefined8 *)puVar2,0);
  if (*(int *)(param_1 + 0xc0) == 0) {
    uVar6 = 0;
    uVar5 = 0;
    pcVar8 = "AttachMeshJob::CompleteProcess";
    puVar7 = PTR_LAB_047d17c0;
  }
  else {
    uVar5 = 0x640000;
    uVar6 = 4;
    pcVar8 = "AttachMeshJob::CompleteFailure";
    puVar7 = PTR_FUN_047d17b0;
  }
  *(undefined **)(param_1 + 0x30) = puVar7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar8;
  return uVar5 | uVar6;
}


