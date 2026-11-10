/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a9430; name: FUN_007a9430
 */


undefined8 FUN_007a9430(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int local_28 [4];
  undefined4 local_18 [2];
  
  if (*(char *)(*(long *)(param_1 + 0xf8) + 0x284) == '\0') {
    FUN_007a2238(local_28);
    if (local_28[0] == 0) {
      *(undefined4 *)(param_1 + 0xa0) = 1;
      uVar2 = FUN_0079e684(*(undefined8 *)(param_1 + 0xf8));
      if (((uVar2 & 1) == 0) &&
         (FUN_0079e694(local_28,*(undefined8 *)(param_1 + 0xf8),0), puVar1 = PTR_FUN_047d0c00,
         local_28[0] == 0)) {
        *(undefined4 *)(param_1 + 0xa0) = 2;
        *(undefined **)(param_1 + 0x30) = puVar1;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NetHostMigrationJob::WaitDisconnectNetwork";
      }
      return 5;
    }
    FUN_007a2238(local_28,*(undefined8 *)(param_1 + 0xf8));
  }
  else {
    local_28[0] = 0x6c05;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  }
  FUN_018ff39c(param_1 + 0x90,local_28);
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d0bf8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetHostMigrationJob::FailureProcess";
  return 0;
}


