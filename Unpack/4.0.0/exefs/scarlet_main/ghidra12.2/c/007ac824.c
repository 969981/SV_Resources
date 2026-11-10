/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ac824; name: FUN_007ac824
 */


undefined8 FUN_007ac824(long param_1)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [16];
  undefined4 local_40 [4];
  int local_30 [4];
  
  local_30[0] = 0;
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
  uVar1 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x188))();
  if ((uVar1 & 1) == 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0xb0) + 0x180);
    pcVar3 = *(code **)(*plVar2 + 0x80);
  }
  else {
    plVar2 = *(long **)(*(long *)(param_1 + 0xb0) + 0x180);
    pcVar3 = *(code **)(*plVar2 + 0x78);
  }
  (*pcVar3)(local_40,plVar2,param_1 + 0x60);
  FUN_018ff39c(local_30,local_40);
  if (local_30[0] == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_LAB_047d0d10;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NetDestroyNetworkJob::WaitNetworkProcessCompleted";
    FUN_0078cd58(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x180),1);
    return 5;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  FUN_00cbd7c0(auStack_50,param_1 + 100);
  FUN_0078cb94(uVar4,auStack_50);
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_0079af14(*(undefined8 *)(param_1 + 0xb0));
  FUN_007965fc(*(long *)(param_1 + 0xb0) + 0x68);
  if ((*(char *)(param_1 + 0xa8) != '\0') && (*(int *)(*(long *)(param_1 + 0xb0) + 0x1c0) != 0)) {
    *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x1c0) = 0;
  }
  return 1;
}


