/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dbae8; name: FUN_007dbae8
 */


undefined8 FUN_007dbae8(long param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [16];
  ulong local_b0 [8];
  int local_70 [4];
  ulong local_60 [8];
  
  puVar10 = PTR_DAT_047d0a08;
  uVar4 = (**(code **)(**(long **)(*(long *)PTR_DAT_047d0a08 + 0x18) + 0xe8))();
  if ((uVar4 & 1) != 0) {
    iVar3 = (**(code **)(**(long **)(*(long *)puVar10 + 0x18) + 0x120))();
    if (*(int *)(param_1 + 0x60) != iVar3 + 2) {
      *(int *)(param_1 + 0x60) = iVar3 + 2;
    }
    local_60[0] = 0;
    FUN_007935cc(local_60);
    if (local_60[0] <= *(ulong *)(param_1 + 0x68)) {
      return 5;
    }
    (**(code **)(**(long **)(*(long *)puVar10 + 0x18) + 0x1c8))();
    puVar10 = PTR_FUN_047d1370;
    PTR_DAT_047d0868[0x44a] = 0;
    *(undefined **)(param_1 + 0x30) = puVar10;
LAB_007dbc08:
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "ProcessHostMigrationJob::CompleteFailure";
    return 0;
  }
  uVar4 = (**(code **)(**(long **)(*(long *)puVar10 + 0x18) + 0xe0))();
  if ((uVar4 & 1) == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_FUN_047d1370;
    goto LAB_007dbc08;
  }
  FUN_007e5190(local_60);
  (**(code **)(**(long **)(*(long *)puVar10 + 0x18) + 0x108))
            (local_70,*(long **)(*(long *)puVar10 + 0x18),local_60);
  if (local_70[0] != 0) {
    *(undefined **)(param_1 + 0x30) = PTR_FUN_047d1370;
LAB_007dbbe0:
    uVar11 = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "ProcessHostMigrationJob::CompleteFailure";
    goto LAB_007dbd6c;
  }
  lVar8 = *(long *)puVar10;
  lVar5 = FUN_007e5328(local_60);
  lVar6 = FUN_007e5328(lVar8 + 0x1b8);
  if (lVar5 == lVar6) {
    sVar1 = FUN_007e5330(local_60);
    sVar2 = FUN_007e5330(lVar8 + 0x1b8);
    if (sVar1 == sVar2) {
      local_b0[0] = 0;
      FUN_007935cc(local_b0);
      puVar10 = PTR_FUN_047d1370;
      if (local_b0[0] <= *(ulong *)(param_1 + 0x68)) {
        uVar11 = 5;
        goto LAB_007dbd6c;
      }
      PTR_DAT_047d0868[0x44a] = 0;
      *(undefined **)(param_1 + 0x30) = puVar10;
      goto LAB_007dbbe0;
    }
  }
  FUN_007e5190(local_b0);
  uVar11 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  uVar7 = FUN_007e5328(local_60);
  lVar5 = FUN_007e2bb4(uVar11,uVar7);
  if (lVar5 == 0) {
LAB_007dbd48:
    pcVar9 = "ProcessHostMigrationJob::CompleteFailure";
    puVar10 = PTR_FUN_047d1370;
  }
  else {
    FUN_007e1c44(auStack_c0,lVar5,local_b0);
    FUN_018ff39c(local_70,auStack_c0);
    if (local_70[0] != 0) goto LAB_007dbd48;
    sVar1 = FUN_007e5330(local_b0);
    sVar2 = FUN_007e5330(local_60);
    if (sVar1 != sVar2) goto LAB_007dbd48;
    PTR_DAT_047d0868[0x44a] = 1;
    FUN_007e51d8(param_1 + 0xb8,local_b0);
    if (*(int *)(param_1 + 0x60) != 100) {
      *(undefined4 *)(param_1 + 0x60) = 100;
    }
    pcVar9 = "ProcessHostMigrationJob::UpdateHost";
    puVar10 = PTR_FUN_047d1378;
  }
  *(undefined **)(param_1 + 0x30) = puVar10;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar9;
  FUN_007e51d0(local_b0);
  uVar11 = 0;
LAB_007dbd6c:
  FUN_007e51d0(local_60);
  return uVar11;
}


