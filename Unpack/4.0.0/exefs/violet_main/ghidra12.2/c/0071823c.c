/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0071823c; name: FUN_0071823c
 */


long FUN_0071823c(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_007182ac;
LAB_0071825c:
    uVar3 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar3 = *(ulong *)(pbVar4 + 8);
    }
    lVar6 = uVar3 + (((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    pbVar4 = *(byte **)(param_1 + 0x18);
    uVar3 = (ulong)*pbVar4;
    if ((*pbVar4 & 1) != 0) goto LAB_007182bc;
LAB_00718298:
    uVar5 = uVar3 >> 1;
  }
  else {
    if (*(long *)(pbVar4 + 8) != 0) goto LAB_0071825c;
LAB_007182ac:
    lVar6 = 0;
    pbVar4 = *(byte **)(param_1 + 0x18);
    uVar3 = (ulong)*pbVar4;
    if ((*pbVar4 & 1) == 0) goto LAB_00718298;
LAB_007182bc:
    uVar5 = *(ulong *)(pbVar4 + 8);
  }
  if (uVar5 != 0) {
    uVar5 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)(pbVar4 + 8);
    }
    lVar6 = lVar6 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
  }
  if ((param_1 != PTR_DAT_047d01f8) && (*(long *)(param_1 + 0x20) != 0)) {
    lVar2 = FUN_00514094();
    lVar6 = lVar6 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  switch(*(undefined4 *)(param_1 + 0x34)) {
  case 3:
  case 6:
    uVar3 = *(ulong *)(*(long *)(param_1 + 0x28) + 8);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar3 & 0xfffffffffffffffe;
      bVar1 = *(byte *)(uVar3 + 8);
      if ((bVar1 & 1) == 0) {
        uVar3 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar3 = *(ulong *)(uVar3 + 0x10);
      }
    }
    *(uint *)(*(long *)(param_1 + 0x28) + 0x10) = (uint)uVar3;
    lVar6 = lVar6 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    goto LAB_00718430;
  case 4:
    bVar1 = **(byte **)(param_1 + 0x28);
    uVar3 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar3 = *(ulong *)(*(byte **)(param_1 + 0x28) + 8);
    }
    break;
  case 5:
    puVar7 = *(undefined **)(param_1 + 0x28);
    if ((puVar7 == PTR_DAT_047d0290) || (*(long *)(puVar7 + 0x10) == 0)) {
      uVar3 = 0;
      uVar5 = *(ulong *)(puVar7 + 8);
    }
    else {
      lVar2 = FUN_00514094();
      uVar3 = lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar5 = *(ulong *)(puVar7 + 8);
    }
    if ((uVar5 & 1) != 0) {
      bVar1 = *(byte *)((uVar5 & 0xfffffffffffffffe) + 8);
      if ((bVar1 & 1) == 0) {
        uVar5 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar5 = *(ulong *)((uVar5 & 0xfffffffffffffffe) + 0x10);
      }
      uVar3 = uVar5 + uVar3;
    }
    *(int *)(puVar7 + 0x18) = (int)uVar3;
    break;
  default:
    goto switchD_0071835c_default;
  }
  lVar6 = lVar6 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
LAB_00718430:
  lVar6 = lVar6 + 1;
switchD_0071835c_default:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar3 + 8);
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(uVar3 + 0x10);
    }
    lVar6 = uVar3 + lVar6;
  }
  *(int *)(param_1 + 0x30) = (int)lVar6;
  return lVar6;
}


