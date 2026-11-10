/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004cd0ec; name: FUN_004cd0ec
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_004cd0ec(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  uVar9 = (ulong)*(uint *)(param_1 + 0x20);
  uVar11 = uVar9;
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar10 = *(undefined8 **)(param_1 + 0x28);
    do {
      puVar10 = puVar10 + 1;
      bVar4 = *(byte *)*puVar10;
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = *(ulong *)((byte *)*puVar10 + 8);
      }
      uVar9 = uVar9 - 1;
      uVar11 = uVar1 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar9 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x38);
  lVar8 = uVar11 + (long)iVar5;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar5 != 0) {
    lVar12 = (long)iVar5 << 3;
    do {
      lVar6 = FUN_004d1764(*puVar10);
      lVar8 = lVar6 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x50);
  lVar8 = lVar8 + iVar5;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
  }
  if (iVar5 != 0) {
    lVar12 = (long)iVar5 << 3;
    do {
      lVar6 = FUN_004d7254(*puVar10);
      lVar8 = lVar6 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x68);
  lVar8 = lVar8 + iVar5;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x70) + 8);
  }
  if (iVar5 != 0) {
    lVar12 = (long)iVar5 << 3;
    do {
      lVar6 = FUN_004d94b0(*puVar10);
      lVar8 = lVar6 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x80);
  lVar8 = lVar8 + iVar5;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x88) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x88) + 8);
  }
  if (iVar5 != 0) {
    lVar12 = (long)iVar5 << 3;
    do {
      lVar6 = FUN_004d44f0(*puVar10);
      lVar8 = lVar6 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  lVar12 = FUN_00534808(param_1 + 0x90);
  uVar2 = *(uint *)(param_1 + 0x90);
  lVar6 = FUN_00534808(param_1 + 0xa0);
  uVar3 = *(uint *)(param_1 + 0x10);
  lVar8 = lVar12 + lVar8 + (ulong)uVar2 + lVar6 + (ulong)*(uint *)(param_1 + 0xa0);
  if ((uVar3 & 0x1f) == 0) goto LAB_004cd464;
  if ((uVar3 & 1) != 0) {
    bVar4 = **(byte **)(param_1 + 0xb0);
    uVar11 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar11 = *(ulong *)(*(byte **)(param_1 + 0xb0) + 8);
    }
    lVar8 = lVar8 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar11 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    bVar4 = **(byte **)(param_1 + 0xb8);
    uVar11 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar11 = *(ulong *)(*(byte **)(param_1 + 0xb8) + 8);
    }
    lVar8 = lVar8 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar11 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    bVar4 = **(byte **)(param_1 + 0xc0);
    uVar11 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar11 = *(ulong *)(*(byte **)(param_1 + 0xc0) + 8);
    }
    lVar8 = lVar8 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar11 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    lVar12 = FUN_004dc988(*(undefined8 *)(param_1 + 200));
    lVar8 = lVar8 + lVar12 + (ulong)(((uint)LZCOUNT((uint)lVar12 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar3 >> 4 & 1) == 0) goto LAB_004cd464;
  lVar6 = *(long *)(param_1 + 0xd0);
  lVar12 = (long)*(int *)(lVar6 + 0x18);
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(lVar6 + 0x20) != 0) {
    puVar10 = (undefined8 *)(*(long *)(lVar6 + 0x20) + 8);
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
    lVar12 = 0;
    if ((*(byte *)(lVar6 + 8) & 1) != 0) goto LAB_004cd49c;
LAB_004cd43c:
    *(int *)(lVar6 + 0x28) = (int)lVar12;
  }
  else {
    lVar13 = lVar12 << 3;
    do {
      lVar7 = FUN_004e3f44(*puVar10);
      lVar12 = lVar7 + lVar12 + (ulong)(((uint)LZCOUNT((uint)lVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar13 = lVar13 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar13 != 0);
    if ((*(byte *)(lVar6 + 8) & 1) == 0) goto LAB_004cd43c;
LAB_004cd49c:
    lVar12 = FUN_0051d510(lVar6 + 8,lVar12,lVar6 + 0x28);
  }
  lVar8 = lVar8 + lVar12 + (ulong)(((uint)LZCOUNT((uint)lVar12 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_004cd464:
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar8;
    return lVar8;
  }
  lVar8 = FUN_0051d510((byte *)(param_1 + 8),lVar8,param_1 + 0x14);
  return lVar8;
}


