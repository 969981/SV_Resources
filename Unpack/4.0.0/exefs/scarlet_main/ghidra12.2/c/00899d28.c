/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00899d28; name: FUN_00899d28
 */


void FUN_00899d28(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)PTR_DAT_047d2270;
  *(int *)((long)param_1 + 0xc) = iVar3;
  *param_1 = (long)param_2;
  if (0 < iVar3) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = param_2 + 4;
    param_2[5] = param_2 + 4;
    iVar3 = *(int *)((long)param_1 + 0xc);
    if (1 < iVar3) {
      lVar2 = 0;
      lVar4 = 1;
      do {
        lVar1 = *param_1 + lVar2;
        lVar2 = lVar2 + 0x30;
        *(undefined8 *)(lVar1 + 0x40) = 0;
        *(undefined8 *)(lVar1 + 0x48) = 0;
        *(undefined8 *)(lVar1 + 0x30) = 0;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        lVar4 = lVar4 + 1;
        *(long *)(lVar1 + 0x50) = lVar1 + 0x50;
        *(long *)(lVar1 + 0x58) = lVar1 + 0x50;
        iVar3 = *(int *)((long)param_1 + 0xc);
      } while (lVar4 < iVar3);
    }
  }
  param_2 = param_2 + (long)iVar3 * 6;
  iVar3 = *(int *)PTR_DAT_047d2278;
  *(int *)((long)param_1 + 0x1c) = iVar3;
  param_1[2] = (long)param_2;
  if (0 < iVar3) {
    *param_2 = 0;
    param_2[1] = param_2 + 1;
    param_2[2] = param_2 + 1;
    iVar3 = *(int *)((long)param_1 + 0x1c);
    if (1 < iVar3) {
      lVar2 = 0;
      lVar4 = 1;
      do {
        lVar1 = param_1[2] + lVar2;
        lVar2 = lVar2 + 0x18;
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(long *)(lVar1 + 0x20) = lVar1 + 0x20;
        *(long *)(lVar1 + 0x28) = lVar1 + 0x20;
        iVar3 = *(int *)((long)param_1 + 0x1c);
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  param_2 = param_2 + (long)iVar3 * 3;
  iVar3 = *(int *)PTR_DAT_047d2280;
  *(int *)((long)param_1 + 0x2c) = iVar3;
  param_1[4] = (long)param_2;
  if (0 < iVar3) {
    lVar4 = 0;
    lVar2 = 1;
    while( true ) {
      lVar1 = (long)param_2 + lVar4;
      *(long *)(lVar1 + 0x40) = lVar1 + 0x38;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(long *)(lVar1 + 0x38) = lVar1 + 0x38;
      *(undefined4 *)(lVar1 + 0x48) = 0;
      *(undefined4 *)(lVar1 + 0x60) = 0;
      *(undefined2 *)(lVar1 + 100) = 0;
      *(long *)lVar1 = lVar1;
      *(long *)(lVar1 + 8) = lVar1;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(long *)(lVar1 + 0x50) = lVar1 + 0x50;
      *(long *)(lVar1 + 0x58) = lVar1 + 0x50;
      if (*(int *)((long)param_1 + 0x2c) <= lVar2) break;
      param_2 = (undefined8 *)param_1[4];
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x68;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


