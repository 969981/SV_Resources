/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0057959c; name: FUN_0057959c
 */


long FUN_0057959c(long param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) goto LAB_005795b0;
LAB_00579664:
    lVar3 = 0;
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 == 3) goto LAB_00579674;
LAB_005795ec:
    if (iVar4 != 2) goto LAB_00579718;
    lVar6 = *(long *)(param_1 + 0x18);
    uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
    if ((int)*(uint *)(lVar6 + 0x18) < 1) {
      uVar9 = *(ulong *)(lVar6 + 8);
    }
    else {
      puVar7 = *(undefined8 **)(lVar6 + 0x20);
      uVar9 = uVar8;
      do {
        puVar7 = puVar7 + 1;
        bVar2 = *(byte *)*puVar7;
        uVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar1 = *(ulong *)((byte *)*puVar7 + 8);
        }
        uVar9 = uVar9 - 1;
        uVar8 = uVar1 + uVar8 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      } while (uVar9 != 0);
      uVar9 = *(ulong *)(lVar6 + 8);
    }
    if ((uVar9 & 1) != 0) {
      bVar2 = *(byte *)((uVar9 & 0xfffffffffffffffe) + 8);
      if ((bVar2 & 1) == 0) {
        uVar9 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar9 = *(ulong *)((uVar9 & 0xfffffffffffffffe) + 0x10);
      }
      uVar8 = uVar9 + uVar8;
    }
    *(int *)(lVar6 + 0x28) = (int)uVar8;
  }
  else {
    if (*(long *)(pbVar5 + 8) == 0) goto LAB_00579664;
LAB_005795b0:
    uVar8 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar8 = *(ulong *)(pbVar5 + 8);
    }
    lVar3 = uVar8 + (((uint)LZCOUNT((uint)uVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 != 3) goto LAB_005795ec;
LAB_00579674:
    lVar6 = *(long *)(param_1 + 0x18);
    pbVar5 = *(byte **)(lVar6 + 0x10);
    bVar2 = *pbVar5;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 != 0) goto LAB_0057968c;
LAB_005796d0:
      uVar8 = 0;
      uVar9 = *(ulong *)(lVar6 + 8);
    }
    else {
      if (*(long *)(pbVar5 + 8) == 0) goto LAB_005796d0;
LAB_0057968c:
      uVar8 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar5 + 8);
      }
      uVar8 = uVar8 + (((uint)LZCOUNT((uint)uVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar9 = *(ulong *)(lVar6 + 8);
    }
    if ((uVar9 & 1) != 0) {
      bVar2 = *(byte *)((uVar9 & 0xfffffffffffffffe) + 8);
      if ((bVar2 & 1) == 0) {
        uVar9 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar9 = *(ulong *)((uVar9 & 0xfffffffffffffffe) + 0x10);
      }
      uVar8 = uVar9 + uVar8;
    }
    *(int *)(lVar6 + 0x18) = (int)uVar8;
  }
  lVar3 = lVar3 + uVar8 + (ulong)(((uint)LZCOUNT((uint)uVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_00579718:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x20) = (int)lVar3;
    return lVar3;
  }
  uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar2 = *(byte *)(uVar8 + 8);
  if ((bVar2 & 1) == 0) {
    uVar8 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar8 = *(ulong *)(uVar8 + 0x10);
  }
  *(int *)(param_1 + 0x20) = (int)(uVar8 + lVar3);
  return uVar8 + lVar3;
}


