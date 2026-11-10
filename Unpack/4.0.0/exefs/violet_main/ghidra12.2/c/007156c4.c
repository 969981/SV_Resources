/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007156c4; name: FUN_007156c4
 */


void FUN_007156c4(undefined *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  
  pbVar6 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar6;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_007156e4;
LAB_00715734:
    iVar4 = 0;
    iVar3 = 0;
    pbVar6 = *(byte **)(param_1 + 0x18);
    uVar5 = (ulong)*pbVar6;
    if ((*pbVar6 & 1) != 0) goto LAB_00715744;
LAB_00715720:
    uVar7 = uVar5 >> 1;
  }
  else {
    if (*(long *)(pbVar6 + 8) == 0) goto LAB_00715734;
LAB_007156e4:
    uVar2 = (uint)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar2 = (uint)*(undefined8 *)(pbVar6 + 8);
    }
    iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    pbVar6 = *(byte **)(param_1 + 0x18);
    uVar5 = (ulong)*pbVar6;
    iVar4 = iVar3;
    if ((*pbVar6 & 1) == 0) goto LAB_00715720;
LAB_00715744:
    uVar7 = *(ulong *)(pbVar6 + 8);
    iVar3 = iVar4;
  }
  if (uVar7 != 0) {
    uVar2 = (uint)(uVar5 >> 1);
    if ((uVar5 & 1) != 0) {
      uVar2 = (uint)*(undefined8 *)(pbVar6 + 8);
    }
    iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  pbVar6 = *(byte **)(param_1 + 0x20);
  bVar1 = *pbVar6;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_007157a0:
      uVar2 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar2 = (uint)*(undefined8 *)(pbVar6 + 8);
      }
      iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar6 + 8) != 0) goto LAB_007157a0;
  pbVar6 = *(byte **)(param_1 + 0x28);
  bVar1 = *pbVar6;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_00715828;
  }
  else if (*(long *)(pbVar6 + 8) == 0) goto LAB_00715828;
  uVar2 = (uint)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar2 = (uint)*(undefined8 *)(pbVar6 + 8);
  }
  iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_00715828:
  if (param_1 != PTR_DAT_047cfc08) {
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar2 = FUN_00514094();
      iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar2 = FUN_00514094();
      iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar2 = FUN_00514094();
      iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar2 = FUN_00514094();
      iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar2 = FUN_00514094();
      iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x58);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = ((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar3 = iVar3 + uVar2 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = ((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar3 = iVar3 + uVar2 + 1;
  }
  uVar2 = *(uint *)(param_1 + 100);
  if (param_1[0x60] != '\0') {
    iVar3 = iVar3 + 2;
  }
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = ((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar3 = iVar3 + uVar2 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x68);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = ((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar3 = iVar3 + uVar2 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x6c);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = ((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar3 = iVar3 + uVar2 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x70);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = ((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar3 = iVar3 + uVar2 + 2;
  }
  uVar2 = *(uint *)(param_1 + 0x74);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = ((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar3 = iVar3 + uVar2 + 2;
  }
  uVar2 = *(uint *)(param_1 + 0x78);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = ((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar3 = iVar3 + uVar2 + 2;
  }
  uVar2 = *(uint *)(param_1 + 0x7c);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = ((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
    }
    iVar3 = iVar3 + uVar2 + 2;
  }
  uVar2 = *(uint *)(param_1 + 0x80);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar4 = 0xc;
    }
    else {
      iVar4 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar3 = iVar4 + iVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x84);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar4 = 0xc;
    }
    else {
      iVar4 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar3 = iVar4 + iVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x88);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar4 = 0xc;
    }
    else {
      iVar4 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar3 = iVar4 + iVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x8c);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar4 = 0xc;
    }
    else {
      iVar4 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar3 = iVar4 + iVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x90);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar4 = 0xc;
    }
    else {
      iVar4 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar3 = iVar4 + iVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x94);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar4 = 0xc;
    }
    else {
      iVar4 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar3 = iVar4 + iVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x98);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar4 = 0xc;
    }
    else {
      iVar4 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    iVar3 = iVar4 + iVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x9c) = iVar3;
    return;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar1 = *(byte *)(uVar5 + 8);
  if ((bVar1 & 1) == 0) {
    uVar2 = (uint)(bVar1 >> 1);
  }
  else {
    uVar2 = (uint)*(undefined8 *)(uVar5 + 0x10);
  }
  *(uint *)(param_1 + 0x9c) = uVar2 + iVar3;
  return;
}


