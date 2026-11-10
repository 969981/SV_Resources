/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007dec2c; name: FUN_007dec2c
 */


undefined8 FUN_007dec2c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  char *pcVar4;
  undefined *puVar5;
  long lVar6;
  long local_28;
  
  if (*(int *)(*(long *)(param_1 + 0x58) + 0x784) == 0) {
    uVar2 = FUN_0078cdf4(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0xc0));
    if ((uVar2 & 1) != 0) {
      return 5;
    }
    iVar1 = FUN_00807e34(*(undefined8 *)PTR_DAT_047d0dd8,0x10);
    plVar3 = (long *)FUN_0079365c();
    lVar6 = *plVar3;
    local_28 = 0;
    FUN_007935cc(&local_28);
    pcVar4 = "LeaveMeshWithHostMigrationJob::CalcNextHost";
    *(long *)(param_1 + 0xd8) = local_28 + lVar6 * iVar1;
    puVar5 = PTR_FUN_047d1408;
  }
  else {
    pcVar4 = "LeaveMeshWithHostMigrationJob::CompleteProcess";
    puVar5 = PTR_FUN_047d1400;
  }
  *(undefined **)(param_1 + 0x30) = puVar5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return 0;
}


