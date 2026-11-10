/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d0560; name: FUN_007d0560
 */


undefined8 FUN_007d0560(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  bool bVar5;
  ulong uVar6;
  int local_20 [4];
  
  uVar6 = FUN_007cff10();
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  plVar4 = *(long **)(*(long *)PTR_DAT_047d0a08 + 0x18);
  (**(code **)(*plVar4 + 0x58))
            (local_20,plVar4,param_1 + 0x60,*(undefined8 *)(*(long *)PTR_DAT_047d0a08 + 0x20));
  bVar5 = local_20[0] != 0;
  puVar1 = PTR_LAB_047d12b0;
  if (bVar5) {
    puVar1 = PTR_FUN_047d1288;
  }
  pcVar2 = "CreateSessionJob::WaitDestroyNetwork";
  if (bVar5) {
    pcVar2 = "CreateSessionJob::CompleteFailure";
  }
  *(undefined **)(param_1 + 0x30) = puVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar3 = 5;
  if (bVar5) {
    uVar3 = 0;
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  return uVar3;
}


