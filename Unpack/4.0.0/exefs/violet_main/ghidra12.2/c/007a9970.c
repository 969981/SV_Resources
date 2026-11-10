/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a9970; name: FUN_007a9970
 */


undefined8 FUN_007a9970(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  char *pcVar4;
  undefined *puVar5;
  long lVar6;
  int local_38 [4];
  long local_28;
  
  uVar2 = FUN_007a1108(*(undefined8 *)(param_1 + 0xf8));
  if ((uVar2 & 1) == 0) {
    return 5;
  }
  FUN_007a1130(local_38,*(undefined8 *)(param_1 + 0xf8));
  if (local_38[0] == 0) {
    if (*(char *)(param_1 + 0xa4) == '\0') {
      *(undefined4 *)(param_1 + 0xe8) = 0;
      iVar1 = (**(code **)(**(long **)(param_1 + 0xf8) + 0x1a0))();
      plVar3 = (long *)FUN_0079365c();
      lVar6 = *plVar3;
      local_28 = 0;
      FUN_007935cc(&local_28);
      pcVar4 = "NetHostMigrationJob::WaitBeforeReconnectNetwork";
      *(long *)(param_1 + 0xd0) = local_28 + lVar6 * iVar1;
      puVar5 = PTR_LAB_047d0c18;
    }
    else {
      pcVar4 = "NetHostMigrationJob::RecreateNetwork";
      puVar5 = PTR_LAB_047d0c10;
    }
    *(char **)(param_1 + 0x40) = pcVar4;
    *(undefined **)(param_1 + 0x30) = puVar5;
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(char *)(*(long *)(param_1 + 0xf8) + 0x24a) != '\x01') {
      *(undefined1 *)(*(long *)(param_1 + 0xf8) + 0x24a) = 1;
    }
  }
  else {
    FUN_018ff39c(param_1 + 0x90,local_38);
    *(undefined **)(param_1 + 0x30) = PTR_FUN_047d0bf8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NetHostMigrationJob::FailureProcess";
  }
  return 0;
}


