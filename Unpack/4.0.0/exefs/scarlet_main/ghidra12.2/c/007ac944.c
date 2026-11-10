/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ac944; name: FUN_007ac944
 */


undefined8 FUN_007ac944(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong local_28;
  
  uVar2 = FUN_007a088c(*(undefined8 *)(param_1 + 0xb0));
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)FUN_0079365c();
    lVar4 = *plVar3;
    lVar5 = 4000;
  }
  else {
    local_28 = 0;
    FUN_007935cc(&local_28);
    if (local_28 <= *(ulong *)(param_1 + 0xa0)) {
      return 5;
    }
    plVar3 = (long *)FUN_0079365c();
    lVar4 = *plVar3;
    lVar5 = 2000;
  }
  local_28 = 0;
  FUN_007935cc(&local_28);
  puVar1 = PTR_LAB_047d0d00;
  *(ulong *)(param_1 + 0x98) = local_28 + lVar4 * lVar5;
  *(char **)(param_1 + 0x40) = "NetDestroyNetworkJob::SendDestroyNetworkMessage";
  *(undefined **)(param_1 + 0x30) = puVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


