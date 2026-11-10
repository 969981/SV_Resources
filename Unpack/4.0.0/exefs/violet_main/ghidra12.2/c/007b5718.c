/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b5718; name: FUN_007b5718
 */


undefined8 FUN_007b5718(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [32];
  
  lVar3 = *(long *)(param_1 + 0x140);
  if (0 < *(int *)(param_1 + 0x150)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x148) <= *(int *)(param_1 + 0x14c)) {
      iVar1 = *(int *)(param_1 + 0x148);
    }
    lVar3 = lVar3 + (long)(*(int *)(param_1 + 0x14c) - iVar1) * 0x20;
  }
  FUN_007965ac(auStack_30,lVar3);
  if (0 < *(int *)(param_1 + 0x150)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x14c) + 1 < *(int *)(param_1 + 0x148)) {
      iVar1 = *(int *)(param_1 + 0x14c) + 1;
    }
    *(int *)(param_1 + 0x14c) = iVar1;
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
  }
  FUN_007b5958(auStack_40,*(undefined8 *)(param_1 + 0x58),param_1 + 0x158,auStack_30);
  FUN_0078cd58(*(undefined8 *)(param_1 + 0x58),1);
  puVar2 = PTR_LAB_047d0e48;
  *(char **)(param_1 + 0x40) = "LocalEjectClientListCheckJob::WaitEjectTargetClient";
  *(undefined **)(param_1 + 0x30) = puVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}


