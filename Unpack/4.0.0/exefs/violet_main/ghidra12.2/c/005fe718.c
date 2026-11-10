/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005fe718; name: FUN_005fe718
 */


void FUN_005fe718(long param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = (long)*(int *)(param_1 + 0x18);
  puVar6 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar8 = (ulong)uVar5;
    uVar7 = uVar8;
  }
  else {
    lVar11 = lVar10 << 3;
    do {
      lVar4 = FUN_006101ec(*puVar6);
      lVar10 = lVar4 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar11 = lVar11 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar11 != 0);
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar8 = (ulong)uVar5;
    uVar7 = lVar10 + uVar8;
  }
  if (0 < (int)uVar5) {
    puVar6 = *(undefined8 **)(param_1 + 0x38);
    do {
      puVar6 = puVar6 + 1;
      bVar2 = *(byte *)*puVar6;
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)((byte *)*puVar6 + 8);
      }
      uVar8 = uVar8 - 1;
      uVar7 = uVar1 + uVar7 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar8 != 0);
  }
  uVar8 = (ulong)*(uint *)(param_1 + 0x48);
  lVar10 = uVar7 + uVar8;
  iVar3 = (int)lVar10;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    puVar6 = *(undefined8 **)(param_1 + 0x50);
    do {
      puVar6 = puVar6 + 1;
      bVar2 = *(byte *)*puVar6;
      uVar7 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar7 = *(ulong *)((byte *)*puVar6 + 8);
      }
      uVar8 = uVar8 - 1;
      lVar10 = uVar7 + lVar10 + (ulong)(((uint)LZCOUNT((uint)uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      iVar3 = (int)lVar10;
    } while (uVar8 != 0);
  }
  pbVar9 = *(byte **)(param_1 + 0x58);
  bVar2 = *pbVar9;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_005fe85c:
      uVar5 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar5 = (uint)*(undefined8 *)(pbVar9 + 8);
      }
      iVar3 = iVar3 + uVar5 + (((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar9 + 8) != 0) goto LAB_005fe85c;
  pbVar9 = *(byte **)(param_1 + 0x60);
  bVar2 = *pbVar9;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_005fe8e4;
  }
  else if (*(long *)(pbVar9 + 8) == 0) goto LAB_005fe8e4;
  uVar5 = (uint)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar5 = (uint)*(undefined8 *)(pbVar9 + 8);
  }
  iVar3 = iVar3 + uVar5 + (((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_005fe8e4:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar2 = *(byte *)(uVar7 + 8);
    if ((bVar2 & 1) == 0) {
      uVar5 = (uint)(bVar2 >> 1);
    }
    else {
      uVar5 = (uint)*(undefined8 *)(uVar7 + 0x10);
    }
    iVar3 = uVar5 + iVar3;
  }
  *(int *)(param_1 + 0x68) = iVar3;
  return;
}


