/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00698378; name: FUN_00698378
 */


void FUN_00698378(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined *puVar8;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    uVar3 = FUN_006991a4(*(undefined8 *)(param_1 + 0x10));
    break;
  case 2:
    puVar8 = *(undefined **)(param_1 + 0x10);
    pbVar7 = *(byte **)(puVar8 + 0x10);
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 != 0) goto LAB_006983d8;
LAB_006984b8:
      uVar3 = 0;
    }
    else {
      if (*(long *)(pbVar7 + 8) == 0) goto LAB_006984b8;
LAB_006983d8:
      uVar3 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar3 = (uint)*(undefined8 *)(pbVar7 + 8);
      }
      uVar3 = uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((puVar8 != PTR_DAT_047cf750) && (*(long *)(puVar8 + 0x18) != 0)) {
      uVar4 = FUN_006854d0();
      uVar3 = uVar3 + uVar4 + (((uint)LZCOUNT(uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((*(ulong *)(puVar8 + 8) & 1) != 0) {
      uVar6 = *(ulong *)(puVar8 + 8) & 0xfffffffffffffffe;
      bVar1 = *(byte *)(uVar6 + 8);
      if ((bVar1 & 1) == 0) {
        uVar4 = (uint)(bVar1 >> 1);
      }
      else {
        uVar4 = (uint)*(undefined8 *)(uVar6 + 0x10);
      }
      uVar3 = uVar4 + uVar3;
    }
    *(uint *)(puVar8 + 0x20) = uVar3;
    iVar2 = uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    goto LAB_0069855c;
  case 3:
    uVar3 = FUN_0069c7e4(*(undefined8 *)(param_1 + 0x10));
    break;
  case 4:
    lVar5 = *(long *)(param_1 + 0x10);
    pbVar7 = *(byte **)(lVar5 + 0x10);
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 != 0) goto LAB_00698440;
LAB_00698530:
      uVar3 = 0;
      uVar6 = *(ulong *)(lVar5 + 8);
    }
    else {
      if (*(long *)(pbVar7 + 8) == 0) goto LAB_00698530;
LAB_00698440:
      uVar3 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar3 = (uint)*(undefined8 *)(pbVar7 + 8);
      }
      uVar3 = uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar6 = *(ulong *)(lVar5 + 8);
    }
    if ((uVar6 & 1) != 0) {
      bVar1 = *(byte *)((uVar6 & 0xfffffffffffffffe) + 8);
      if ((bVar1 & 1) == 0) {
        uVar4 = (uint)(bVar1 >> 1);
      }
      else {
        uVar4 = (uint)*(undefined8 *)((uVar6 & 0xfffffffffffffffe) + 0x10);
      }
      uVar3 = uVar4 + uVar3;
    }
    *(uint *)(lVar5 + 0x18) = uVar3;
    iVar2 = uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    goto LAB_0069855c;
  case 5:
    uVar3 = FUN_0069d724(*(undefined8 *)(param_1 + 0x10));
    break;
  case 6:
    uVar3 = FUN_0069a4ec(*(undefined8 *)(param_1 + 0x10));
    break;
  default:
    iVar2 = 0;
    goto LAB_00698560;
  }
  iVar2 = uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
LAB_0069855c:
  iVar2 = iVar2 + 1;
LAB_00698560:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x18) = iVar2;
    return;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar1 = *(byte *)(uVar6 + 8);
  if ((bVar1 & 1) == 0) {
    uVar3 = (uint)(bVar1 >> 1);
  }
  else {
    uVar3 = (uint)*(undefined8 *)(uVar6 + 0x10);
  }
  *(uint *)(param_1 + 0x18) = uVar3 + iVar2;
  return;
}


