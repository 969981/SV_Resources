/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f216c; name: FUN_008f216c
 */


long FUN_008f216c(ushort *param_1)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  
  uVar1 = (ulong)*param_1;
  if (uVar1 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = -1;
    plVar3 = (long *)(*(long *)(param_1 + 4) + 0x10);
    do {
      while (iVar4 = (int)*(short *)((long)plVar3 + -0xe), -1 < iVar4) {
        if (iVar4 <= iVar2) {
          iVar4 = iVar2;
        }
        iVar2 = 0xf;
        if (*plVar3 == 0) {
          iVar2 = iVar4;
        }
        uVar1 = uVar1 - 1;
        plVar3 = plVar3 + 5;
        if (uVar1 == 0) goto LAB_008f21c4;
      }
      iVar2 = 0xf;
      uVar1 = uVar1 - 1;
      plVar3 = plVar3 + 5;
    } while (uVar1 != 0);
  }
LAB_008f21c4:
  return (ulong)param_1[1] * 8 + (long)(iVar2 + 1) * 4;
}


