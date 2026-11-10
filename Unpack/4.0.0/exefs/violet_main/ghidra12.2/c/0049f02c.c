/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049f02c; name: FUN_0049f02c
 */


void FUN_0049f02c(long param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  ulong *puVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined *puVar8;
  
  uVar7 = *(ulong *)(param_2 + 8);
  if ((uVar7 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar4 = FUN_00264e54();
    }
    else {
      lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar4,(uVar7 & 0xfffffffffffffffe) + 8);
  }
  puVar3 = PTR_DAT_047cba80;
  pbVar6 = *(byte **)(param_2 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    if (*pbVar6 >> 1 != 0) {
LAB_0049f098:
      plVar1 = (long *)(param_1 + 0x10);
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar8 = (undefined *)*plVar1;
      }
      else {
        puVar5 = (ulong *)*puVar5;
        puVar8 = (undefined *)*plVar1;
      }
      if (puVar8 == PTR_DAT_047cba80) {
        FUN_001fcdc8(plVar1,puVar5);
        pbVar6 = *(byte **)(param_2 + 0x18);
        bVar2 = *pbVar6;
        goto joined_r0x0049f0c8;
      }
      FUN_001fcec0(puVar8,pbVar6);
    }
  }
  else if (*(long *)(pbVar6 + 8) != 0) goto LAB_0049f098;
  pbVar6 = *(byte **)(param_2 + 0x18);
  bVar2 = *pbVar6;
joined_r0x0049f0c8:
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(pbVar6 + 8) == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x18);
  puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar8 = (undefined *)*plVar1;
  }
  else {
    puVar5 = (ulong *)*puVar5;
    puVar8 = (undefined *)*plVar1;
  }
  if (puVar8 == puVar3) {
    FUN_001fcdc8(plVar1,puVar5);
    return;
  }
  FUN_001fcec0(puVar8,pbVar6);
  return;
}


