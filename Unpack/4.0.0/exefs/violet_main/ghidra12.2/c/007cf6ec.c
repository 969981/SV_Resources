/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cf6ec; name: FUN_007cf6ec
 */


undefined8 FUN_007cf6ec(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  int local_20 [4];
  
  uVar1 = FUN_007cf29c();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  lVar2 = *(long *)PTR_DAT_047d0a08;
  if (*(long *)(lVar2 + 0xb8) != 0) {
    if (*(long *)(lVar2 + 0xb8) == *(long *)(lVar2 + 0xc0)) {
      FUN_007d4164(local_20,*(undefined8 *)(lVar2 + 0x10));
      if (local_20[0] != 0) {
LAB_007cf770:
        *(undefined **)(param_1 + 0x30) = PTR_LAB_047d1248;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "LeaveSessionJob::MeshCleanup";
        return 0;
      }
      pcVar4 = "LeaveSessionJob::WaitLeaveMeshWithHostMigration";
      puVar3 = PTR_LAB_047d1240;
      goto LAB_007cf7a8;
    }
    if (*(long *)(lVar2 + 0xc0) != 0) {
      FUN_007d43bc(local_20,*(undefined8 *)(lVar2 + 0x10));
      if (local_20[0] != 0) goto LAB_007cf770;
      pcVar4 = "LeaveSessionJob::WaitLeaveMesh";
      puVar3 = PTR_LAB_047d1250;
      goto LAB_007cf7a8;
    }
  }
  pcVar4 = "LeaveSessionJob::MeshCleanup";
  puVar3 = PTR_LAB_047d1248;
LAB_007cf7a8:
  *(undefined **)(param_1 + 0x30) = puVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return 5;
}


