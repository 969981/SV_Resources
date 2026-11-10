/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ce070; name: FUN_007ce070
 */


undefined8 FUN_007ce070(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uVar5;
  char *pcVar6;
  long lVar7;
  long local_38 [2];
  undefined4 local_28 [2];
  
  puVar2 = PTR_DAT_047d0a08;
  uVar3 = (**(code **)(**(long **)(*(long *)PTR_DAT_047d0a08 + 0x18) + 0x48))
                    (*(long **)(*(long *)PTR_DAT_047d0a08 + 0x18),param_1 + 0x98);
  if ((uVar3 & 1) == 0) {
    return 5;
  }
  if (*(int *)(param_1 + 0x60) == 3) {
    FUN_00cbd7c0(local_38,param_1 + 100);
    FUN_018ff39c(param_1 + 0xa0,local_38);
    *(undefined **)(param_1 + 0x30) = PTR_FUN_047d11c0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar6 = "JoinSessionJob::ProcessSendMonitoringData";
  }
  else {
    FUN_007cdea8(*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x98));
    FUN_0078cac8((int *)(param_1 + 0x60));
    if (*(char *)(param_1 + 0x90) == '\0') {
      uVar3 = (**(code **)(**(long **)(*(long *)puVar2 + 0x18) + 0xe0))();
      if ((uVar3 & 1) != 0) {
        *(undefined **)(param_1 + 0x30) = PTR_FUN_047d11c8;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "JoinSessionJob::MeshStartup";
        iVar1 = *(int *)(*(long *)puVar2 + 0x474);
        plVar4 = (long *)FUN_0079365c();
        lVar7 = *plVar4;
        local_38[0] = 0;
        FUN_007935cc(local_38);
        *(long *)(param_1 + 0xb8) = local_38[0] + lVar7 * iVar1;
        return 0;
      }
      uVar5 = 0xc406;
    }
    else {
      uVar5 = 0x6479;
    }
    local_38[0] = CONCAT44(local_38[0]._4_4_,uVar5);
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_018ff39c(param_1 + 0xa0,local_38);
    *(undefined **)(param_1 + 0x30) = PTR_LAB_047d11d0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar6 = "JoinSessionJob::DisconnectNetwork";
  }
  *(char **)(param_1 + 0x40) = pcVar6;
  return 0;
}


