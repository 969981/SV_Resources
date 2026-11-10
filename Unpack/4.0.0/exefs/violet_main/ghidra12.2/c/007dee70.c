/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dee70; name: FUN_007dee70
 */


undefined8 FUN_007dee70(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  ulong local_58 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(int *)(*(long *)(param_1 + 0x58) + 0x784) == 0) {
    lVar4 = param_1 + 0x68;
    (**(code **)(**(long **)(*(long *)PTR_DAT_047d0a08 + 0x18) + 0x118))
              (local_38,*(long **)(*(long *)PTR_DAT_047d0a08 + 0x18),lVar4);
    if (local_38[0] == 0) {
      FUN_007e5304(local_58,lVar4);
      uVar2 = FUN_00796784(local_58);
      if ((uVar2 & 1) != 0) {
        uVar3 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
        lVar4 = FUN_007e3cc8(uVar3,lVar4);
        *(long *)(param_1 + 0xa8) = lVar4;
        puVar1 = PTR_LAB_047d1410;
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x28) == -3) {
            *(char **)(param_1 + 0x40) = "LeaveMeshWithHostMigrationJob::WaitNextHost";
            *(undefined **)(param_1 + 0x30) = puVar1;
            *(undefined8 *)(param_1 + 0x38) = 0;
            return 5;
          }
          FUN_007d9b34(*(undefined8 *)(param_1 + 0x58));
          plVar5 = (long *)FUN_0079365c();
          lVar4 = *plVar5;
          local_58[0] = 0;
          FUN_007935cc(local_58);
          *(undefined **)(param_1 + 0x30) = PTR_LAB_047d1418;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(ulong *)(param_1 + 200) = local_58[0] + lVar4 * 5000;
          pcVar6 = "LeaveMeshWithHostMigrationJob::SendStartHostMigrationMessage";
          goto LAB_007deea4;
        }
        goto LAB_007def14;
      }
    }
    else {
      local_58[0] = CONCAT44(local_58[0]._4_4_,0x4c11);
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_28);
      if (local_38[0] == (int)local_58[0]) {
LAB_007def14:
        local_58[0] = 0;
        FUN_007935cc(local_58);
        if (local_58[0] < *(ulong *)(param_1 + 0xd8)) {
          return 5;
        }
      }
    }
  }
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d1400;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar6 = "LeaveMeshWithHostMigrationJob::CompleteProcess";
LAB_007deea4:
  *(char **)(param_1 + 0x40) = pcVar6;
  return 0;
}


