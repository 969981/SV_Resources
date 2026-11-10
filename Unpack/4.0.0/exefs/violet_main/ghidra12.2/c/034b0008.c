/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b0008; name: FUN_034b0008
 */


void FUN_034b0008(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 == 0) {
    return;
  }
  *(short *)(lVar2 + 0x94) = *(short *)(lVar2 + 0x94) + -1;
  if ((param_2 & 1) != 0) {
    *(short *)(lVar2 + 0x96) = *(short *)(lVar2 + 0x96) + -1;
  }
  puVar1 = PTR_DAT_047e70c0;
  lVar2 = *(long *)(param_1 + 0x90);
  if (0 < *(short *)(lVar2 + 0x90)) {
    return;
  }
  if (0 < *(short *)(lVar2 + 0x94)) {
    return;
  }
  if (*(short *)(lVar2 + 0x88) != 0) {
    return;
  }
  if (*(short *)(lVar2 + 0x8a) != 0) {
    return;
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    return;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return;
  }
  if ((*(byte *)(lVar2 + 0x98) >> 1 & 1) != 0) {
    plVar5 = (long *)(PTR_DAT_047e70c0 + 0x10);
    lVar4 = 0;
    do {
      lVar3 = lVar4;
      lVar4 = *plVar5;
      plVar5 = (long *)(lVar4 + 0x50);
    } while (lVar4 != 0 && lVar4 != param_1);
    if (lVar4 != 0) {
      plVar5 = (long *)(PTR_DAT_047e70c0 + 0x10);
      if (*(long *)(PTR_DAT_047e70c0 + 0x10) != lVar4) {
        plVar5 = (long *)(lVar3 + 0x50);
      }
      *plVar5 = *(long *)(lVar4 + 0x50);
      if (*(long *)(puVar1 + 8) == lVar4) {
        *(long *)(puVar1 + 8) = lVar3;
      }
      *(int *)puVar1 = *(int *)puVar1 + -1;
      lVar2 = *(long *)(param_1 + 0x90);
    }
    if (lVar2 == 0) goto LAB_034b0104;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_034ac158();
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_034ac158();
  }
LAB_034b0104:
  FUN_034ac254(&DAT_048b0280,*(undefined8 *)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}


