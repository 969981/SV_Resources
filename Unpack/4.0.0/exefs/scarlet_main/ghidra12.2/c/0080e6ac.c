/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080e6ac; name: FUN_0080e6ac
 */


undefined8 FUN_0080e6ac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  int local_20 [4];
  
  lVar1 = *(long *)PTR_DAT_047d0a08;
  if (*(long *)(lVar1 + 0xb8) != 0) {
    if (*(long *)(lVar1 + 0xb8) == *(long *)(lVar1 + 0xc0)) {
      FUN_007d4164(local_20,*(undefined8 *)(lVar1 + 0x10));
      if (local_20[0] != 0) {
LAB_0080e718:
        *(undefined **)(param_1 + 0x30) = PTR_LAB_047d1830;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "DetachMeshJob::MeshCleanup";
        return 0;
      }
      pcVar3 = "DetachMeshJob::WaitLeaveMeshWithHostMigration";
      puVar2 = PTR_LAB_047d1828;
      goto LAB_0080e750;
    }
    if (*(long *)(lVar1 + 0xc0) != 0) {
      FUN_007d43bc(local_20,*(undefined8 *)(lVar1 + 0x10));
      if (local_20[0] != 0) goto LAB_0080e718;
      pcVar3 = "DetachMeshJob::WaitLeaveMesh";
      puVar2 = PTR_LAB_047d1838;
      goto LAB_0080e750;
    }
  }
  pcVar3 = "DetachMeshJob::MeshCleanup";
  puVar2 = PTR_LAB_047d1830;
LAB_0080e750:
  *(undefined **)(param_1 + 0x30) = puVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar3;
  return 5;
}


