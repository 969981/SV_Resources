/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00581420; name: FUN_00581420
 */


void FUN_00581420(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined *puVar8;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    lVar4 = *(long *)(param_1 + 0x10);
    pbVar7 = *(byte **)(lVar4 + 0x10);
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 != 0) goto LAB_005814a4;
LAB_00581520:
      uVar2 = 0;
      uVar6 = *(ulong *)(lVar4 + 8);
    }
    else {
      if (*(long *)(pbVar7 + 8) == 0) goto LAB_00581520;
LAB_005814a4:
      uVar2 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar2 = (uint)*(undefined8 *)(pbVar7 + 8);
      }
      uVar2 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar6 = *(ulong *)(lVar4 + 8);
    }
    if ((uVar6 & 1) != 0) {
      bVar1 = *(byte *)((uVar6 & 0xfffffffffffffffe) + 8);
      if ((bVar1 & 1) == 0) {
        uVar5 = (uint)(bVar1 >> 1);
      }
      else {
        uVar5 = (uint)*(undefined8 *)((uVar6 & 0xfffffffffffffffe) + 0x10);
      }
      uVar2 = uVar5 + uVar2;
    }
    *(uint *)(lVar4 + 0x18) = uVar2;
    iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) {
      iVar3 = 0;
      goto LAB_00581550;
    }
    puVar8 = *(undefined **)(param_1 + 0x10);
    if ((puVar8 == PTR_DAT_047ce348) || (*(long *)(puVar8 + 0x10) == 0)) {
      uVar2 = 0;
      uVar6 = *(ulong *)(puVar8 + 8);
    }
    else {
      uVar2 = FUN_00578888();
      uVar2 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar6 = *(ulong *)(puVar8 + 8);
    }
    if ((uVar6 & 1) != 0) {
      bVar1 = *(byte *)((uVar6 & 0xfffffffffffffffe) + 8);
      if ((bVar1 & 1) == 0) {
        uVar5 = (uint)(bVar1 >> 1);
      }
      else {
        uVar5 = (uint)*(undefined8 *)((uVar6 & 0xfffffffffffffffe) + 0x10);
      }
      uVar2 = uVar5 + uVar2;
    }
    *(uint *)(puVar8 + 0x18) = uVar2;
    iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
  }
  iVar3 = iVar3 + 1;
LAB_00581550:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x18) = iVar3;
    return;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar1 = *(byte *)(uVar6 + 8);
  if ((bVar1 & 1) == 0) {
    uVar2 = (uint)(bVar1 >> 1);
  }
  else {
    uVar2 = (uint)*(undefined8 *)(uVar6 + 0x10);
  }
  *(uint *)(param_1 + 0x18) = uVar2 + iVar3;
  return;
}


