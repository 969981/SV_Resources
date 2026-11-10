/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ac618; name: FUN_007ac618
 */


undefined8 FUN_007ac618(long param_1)

{
  ulong uVar1;
  long *plVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  int local_38 [4];
  long local_28;
  
  FUN_007a6120(local_38,*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x180));
  if (local_38[0] != 0) {
    return 5;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_0079c0a0(uVar5);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_0079c92c(uVar5), (uVar1 & 1) == 0)) {
    pcVar3 = "NetDestroyNetworkJob::StartNetworkProcess";
    puVar4 = PTR_FUN_047d0d08;
  }
  else if (*(char *)(param_1 + 0xa8) == '\0') {
    plVar2 = (long *)FUN_0079365c();
    lVar6 = *plVar2;
    local_28 = 0;
    FUN_007935cc(&local_28);
    pcVar3 = "NetDestroyNetworkJob::SendDestroyNetworkMessage";
    *(long *)(param_1 + 0x98) = local_28 + lVar6 * 4000;
    puVar4 = PTR_LAB_047d0d00;
  }
  else {
    FUN_0079c79c(*(undefined8 *)(param_1 + 0xb0));
    plVar2 = (long *)FUN_0079365c();
    lVar6 = *plVar2;
    local_28 = 0;
    FUN_007935cc(&local_28);
    pcVar3 = "NetDestroyNetworkJob::WaitUntilAllClientsReceiveUpdateNetworkConnectionStatusMessage";
    *(long *)(param_1 + 0xa0) = local_28 + lVar6 * 4000;
    puVar4 = PTR_FUN_047d0cf8;
  }
  *(undefined **)(param_1 + 0x30) = puVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar3;
  return 0;
}


