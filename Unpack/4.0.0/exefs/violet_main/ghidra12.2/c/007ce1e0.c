/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ce1e0; name: FUN_007ce1e0
 */


undefined8 FUN_007ce1e0(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  int local_20 [4];
  
  FUN_007cd7f4(local_20,*(undefined8 *)PTR_DAT_047d0a08);
  if (local_20[0] == 0) {
    *(undefined4 *)(param_1 + 0x94) = 2;
    pcVar1 = "JoinSessionJob::JoinMesh";
    puVar2 = PTR_LAB_047d11d8;
  }
  else {
    FUN_018ff39c(param_1 + 0xa0,local_20);
    pcVar1 = "JoinSessionJob::DisconnectNetwork";
    puVar2 = PTR_LAB_047d11d0;
  }
  *(undefined **)(param_1 + 0x30) = puVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar1;
  return 0;
}


