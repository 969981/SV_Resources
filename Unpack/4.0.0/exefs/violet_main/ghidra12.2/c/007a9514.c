/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a9514; name: FUN_007a9514
 */


undefined8 FUN_007a9514(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long local_40 [2];
  undefined4 local_28 [2];
  
  if (*(char *)(*(long *)(param_1 + 0xf8) + 0x284) == '\0') {
    FUN_007a2238(local_40);
    if ((int)local_40[0] == 0) {
      *(undefined4 *)(param_1 + 0xa0) = 5;
      FUN_007a1dd0(*(undefined8 *)(param_1 + 0xf8));
      puVar1 = PTR_LAB_047d0c08;
      *(undefined4 *)(param_1 + 0xa0) = 6;
      *(char **)(param_1 + 0x40) = "NetHostMigrationJob::WaitEmulateDisconnected";
      *(undefined **)(param_1 + 0x30) = puVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
      iVar2 = (**(code **)(**(long **)(param_1 + 0xf8) + 0x1a8))();
      plVar3 = (long *)FUN_0079365c();
      lVar4 = *plVar3;
      local_40[0] = 0;
      FUN_007935cc(local_40);
      *(long *)(param_1 + 0xe0) = local_40[0] + lVar4 * iVar2;
      return 5;
    }
    FUN_007a2238(local_40,*(undefined8 *)(param_1 + 0xf8));
  }
  else {
    local_40[0] = CONCAT44(local_40[0]._4_4_,0x6c05);
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  }
  FUN_018ff39c(param_1 + 0x90,local_40);
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d0bf8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetHostMigrationJob::FailureProcess";
  return 0;
}


