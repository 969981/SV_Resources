/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068b878; name: FUN_0068b878
 */


void FUN_0068b878(undefined *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  
  lVar6 = (long)*(int *)(param_1 + 0x18);
  plVar9 = (long *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar9 = (long *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar6 = 0;
  }
  else {
    lVar10 = lVar6 << 3;
    do {
      lVar11 = *plVar9;
      pbVar12 = *(byte **)(lVar11 + 0x10);
      bVar1 = *pbVar12;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0) goto LAB_0068b8fc;
LAB_0068b8c0:
        uVar7 = (ulong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar7 = *(ulong *)(pbVar12 + 8);
        }
        lVar5 = uVar7 + (((uint)LZCOUNT((uint)uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      }
      else {
        if (*(long *)(pbVar12 + 8) != 0) goto LAB_0068b8c0;
LAB_0068b8fc:
        lVar5 = 0;
      }
      if (*(char *)(lVar11 + 0x18) != '\0') {
        lVar5 = lVar5 + 2;
      }
      if ((*(ulong *)(lVar11 + 8) & 1) != 0) {
        uVar7 = *(ulong *)(lVar11 + 8) & 0xfffffffffffffffe;
        bVar1 = *(byte *)(uVar7 + 8);
        if ((bVar1 & 1) == 0) {
          uVar7 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar7 = *(ulong *)(uVar7 + 0x10);
        }
        lVar5 = uVar7 + lVar5;
      }
      *(uint *)(lVar11 + 0x1c) = (uint)lVar5;
      lVar6 = lVar5 + lVar6 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      plVar9 = plVar9 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x30);
  lVar6 = lVar6 + iVar2;
  iVar4 = (int)lVar6;
  puVar13 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar13 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  }
  if (iVar2 != 0) {
    lVar10 = (long)iVar2 << 3;
    do {
      lVar11 = FUN_006894b8(*puVar13);
      lVar6 = lVar11 + lVar6 + (ulong)(((uint)LZCOUNT((uint)lVar11 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      iVar4 = (int)lVar6;
      lVar10 = lVar10 + -8;
      puVar13 = puVar13 + 1;
    } while (lVar10 != 0);
  }
  if (param_1 != PTR_DAT_047cf548) {
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar3 = FUN_0068a1ec();
      iVar4 = iVar4 + uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar3 = FUN_006871c4();
      iVar4 = iVar4 + uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar3 = FUN_005369b4();
      iVar4 = iVar4 + uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    lVar6 = *(long *)(param_1 + 0x58);
    if (lVar6 != 0) {
      lVar10 = (long)*(int *)(lVar6 + 0x18);
      puVar13 = (undefined8 *)0x0;
      if (*(long *)(lVar6 + 0x20) != 0) {
        puVar13 = (undefined8 *)(*(long *)(lVar6 + 0x20) + 8);
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
        uVar3 = 0;
      }
      else {
        lVar11 = lVar10 << 3;
        do {
          lVar5 = FUN_002690b8(*puVar13);
          lVar10 = lVar5 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6)
          ;
          uVar3 = (uint)lVar10;
          lVar11 = lVar11 + -8;
          puVar13 = puVar13 + 1;
        } while (lVar11 != 0);
      }
      if (*(char *)(lVar6 + 0x28) != '\0') {
        uVar3 = uVar3 + 2;
      }
      if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
        uVar7 = *(ulong *)(lVar6 + 8) & 0xfffffffffffffffe;
        bVar1 = *(byte *)(uVar7 + 8);
        if ((bVar1 & 1) == 0) {
          uVar8 = (uint)(bVar1 >> 1);
        }
        else {
          uVar8 = (uint)*(undefined8 *)(uVar7 + 0x10);
        }
        uVar3 = uVar8 + uVar3;
      }
      *(uint *)(lVar6 + 0x2c) = uVar3;
      iVar4 = iVar4 + uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    lVar6 = *(long *)(param_1 + 0x60);
    if (lVar6 != 0) {
      lVar10 = (long)*(int *)(lVar6 + 0x18);
      puVar13 = (undefined8 *)0x0;
      if (*(long *)(lVar6 + 0x20) != 0) {
        puVar13 = (undefined8 *)(*(long *)(lVar6 + 0x20) + 8);
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
        uVar3 = 0;
      }
      else {
        lVar11 = lVar10 << 3;
        do {
          lVar5 = FUN_002690b8(*puVar13);
          lVar10 = lVar5 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6)
          ;
          uVar3 = (uint)lVar10;
          lVar11 = lVar11 + -8;
          puVar13 = puVar13 + 1;
        } while (lVar11 != 0);
      }
      if (*(char *)(lVar6 + 0x28) != '\0') {
        uVar3 = uVar3 + 2;
      }
      if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
        uVar7 = *(ulong *)(lVar6 + 8) & 0xfffffffffffffffe;
        bVar1 = *(byte *)(uVar7 + 8);
        if ((bVar1 & 1) == 0) {
          uVar8 = (uint)(bVar1 >> 1);
        }
        else {
          uVar8 = (uint)*(undefined8 *)(uVar7 + 0x10);
        }
        uVar3 = uVar8 + uVar3;
      }
      *(uint *)(lVar6 + 0x2c) = uVar3;
      iVar4 = iVar4 + uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x68);
  iVar2 = 0xb;
  if ((uVar3 & 0x80000000) == 0) {
    iVar2 = (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if (uVar3 != 0) {
    iVar4 = iVar2 + iVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar7 + 8);
    if ((bVar1 & 1) == 0) {
      uVar3 = (uint)(bVar1 >> 1);
    }
    else {
      uVar3 = (uint)*(undefined8 *)(uVar7 + 0x10);
    }
    iVar4 = uVar3 + iVar4;
  }
  *(int *)(param_1 + 0x6c) = iVar4;
  return;
}


