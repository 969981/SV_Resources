/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bd4da8; name: FUN_00bd4da8
 */


int FUN_00bd4da8(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  
  iVar3 = *(int *)(param_1 + 0x40) << 1;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar7 = 0;
    do {
      uVar4 = FUN_00bdb9b8(*(undefined8 *)(*(long *)(param_1 + 0x48) + lVar7 * 8 + 8));
      iVar9 = 4;
      if ((uVar4 >> 0x1c & 0xf) != 0) {
        iVar9 = 5;
      }
      uVar1 = (uint)uVar4;
      iVar2 = 3;
      if (0x1fffff < uVar1) {
        iVar2 = iVar9;
      }
      iVar9 = 2;
      if (0x3fff < uVar1) {
        iVar9 = iVar2;
      }
      iVar2 = 1;
      if (0x7f < uVar1) {
        iVar2 = iVar9;
      }
      iVar3 = uVar1 + iVar3 + iVar2;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x40));
  }
  if (*(long **)(param_1 + 8) == (long *)(param_1 + 0x10)) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    plVar8 = *(long **)(param_1 + 8);
    do {
      iVar2 = FUN_00c2ba20(plVar8 + 5,(int)plVar8[4]);
      iVar9 = iVar2 + iVar9;
      plVar5 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        plVar5 = plVar8 + 2;
        plVar6 = (long *)*plVar5;
        if ((long *)*plVar6 != plVar8) {
          do {
            lVar7 = *plVar5;
            plVar5 = (long *)(lVar7 + 0x10);
            plVar6 = (long *)*plVar5;
          } while (*plVar6 != lVar7);
        }
      }
      else {
        do {
          plVar6 = plVar5;
          plVar5 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      plVar8 = plVar6;
    } while (plVar6 != (long *)(param_1 + 0x10));
  }
  iVar9 = iVar9 + iVar3;
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    iVar3 = FUN_00c0358c(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe);
    iVar9 = iVar3 + iVar9;
  }
  *(int *)(param_1 + 0x34) = iVar9;
  return iVar9;
}


