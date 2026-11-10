/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007dac9c; name: FUN_007dac9c
 */


undefined8 FUN_007dac9c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  int *piVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  int local_80 [4];
  undefined4 local_70 [4];
  int local_60 [4];
  int local_50 [4];
  undefined4 local_40 [4];
  ulong local_30 [2];
  
  puVar1 = PTR_LAB_047d1330;
  puVar4 = PTR_FUN_047d1320;
  piVar3 = local_80;
  if ((*(long *)(param_1 + 0x60) != 0) && (*(char *)(*(long *)(param_1 + 0x60) + 0x28) != '\0')) {
    FUN_0078cc00();
    *(undefined8 *)(param_1 + 0x60) = 0;
    PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x98) = 0;
    return 1;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    if (*(int *)(*(long *)(param_1 + 0x58) + 0x784) == 0) {
      if (*(char *)(param_1 + 0x6a) != '\0') {
        *(undefined1 *)(param_1 + 0x6a) = 0;
LAB_007dad9c:
        *(undefined **)(param_1 + 0x30) = puVar4;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "JoinMeshJob::SendJoinRequest";
        return 0;
      }
      if (*(char *)(param_1 + 0x68) == '\0') {
        local_30[0] = 0;
        FUN_007935cc(local_30);
        if (local_30[0] < *(ulong *)(param_1 + 0x88)) {
          return 5;
        }
        puVar4 = PTR_FUN_047d1320;
        goto LAB_007dad9c;
      }
      if (*(int *)(param_1 + 0x6c) == 0) {
        PTR_DAT_047d0868[0x436] = 1;
        *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitUpdateSessionMessage";
        *(undefined **)(param_1 + 0x30) = puVar1;
        *(undefined8 *)(param_1 + 0x38) = 0;
        plVar2 = (long *)FUN_0079365c();
        lVar6 = *plVar2;
        local_30[0] = 0;
        FUN_007935cc(local_30);
        *(ulong *)(param_1 + 0x80) = local_30[0] + lVar6 * 11000;
        *(undefined4 *)(param_1 + 0x98) = 4;
        return 0;
      }
      FUN_00cbd7c0(local_80);
      if (local_80[0] != 0) {
        PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
        uVar5 = *(undefined8 *)(param_1 + 0x60);
        goto LAB_007dad70;
      }
    }
    else {
      local_70[0] = 0x8c52;
      local_30[0] = local_30[0] & 0xffffffff00000000;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_30);
      FUN_00cbd7c0(local_60,local_70);
      if (local_60[0] != 0) {
        PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
        uVar5 = *(undefined8 *)(param_1 + 0x60);
        piVar3 = local_60;
        goto LAB_007dad70;
      }
    }
  }
  else {
    FUN_00cbd7c0(local_50);
    if (local_50[0] != 0) {
      PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      piVar3 = local_50;
LAB_007dad70:
      FUN_00cbd7c0(local_30,piVar3);
      FUN_0078cb94(uVar5,local_30);
      goto LAB_007dae34;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  local_40[0] = 0;
  local_30[0] = local_30[0] & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_30);
  FUN_00cbd7c0(local_30,local_40);
  FUN_0078cb28(uVar5,local_30);
LAB_007dae34:
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 1;
}


