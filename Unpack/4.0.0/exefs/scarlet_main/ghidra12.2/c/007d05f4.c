/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d05f4; name: FUN_007d05f4
 */


undefined8 FUN_007d05f4(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  int local_30 [4];
  
  uVar1 = FUN_007cff10();
  puVar3 = PTR_DAT_047d0a08;
  if ((uVar1 & 1) != 0) {
    FUN_007cd7f4(local_30,*(undefined8 *)PTR_DAT_047d0a08);
    if (local_30[0] == 0) {
      pcVar2 = "CreateSessionJob::CreateMesh";
      puVar3 = PTR_LAB_047d12b8;
    }
    else {
      FUN_007cd5a0(*(undefined8 *)puVar3);
      FUN_018ff39c(param_1 + 0x94,local_30);
      pcVar2 = "CreateSessionJob::DestroyNetwork";
      puVar3 = PTR_FUN_047d12a8;
    }
    *(undefined **)(param_1 + 0x30) = puVar3;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar2;
  }
  return 0;
}


