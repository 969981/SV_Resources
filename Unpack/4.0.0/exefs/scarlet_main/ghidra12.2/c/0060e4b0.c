/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0060e4b0; name: FUN_0060e4b0
 */


void FUN_0060e4b0(undefined *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  lVar9 = (long)*(int *)(param_1 + 0x18);
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar3 = 0;
    iVar5 = 0;
    pbVar7 = *(byte **)(param_1 + 0x28);
    uVar6 = (ulong)*pbVar7;
    if ((*pbVar7 & 1) != 0) goto LAB_0060e534;
LAB_0060e518:
    uVar8 = uVar6 >> 1;
    iVar3 = iVar5;
  }
  else {
    lVar11 = lVar9 << 3;
    do {
      lVar4 = FUN_00609894(*puVar10);
      lVar9 = lVar4 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      iVar5 = (int)lVar9;
      lVar11 = lVar11 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
    pbVar7 = *(byte **)(param_1 + 0x28);
    uVar6 = (ulong)*pbVar7;
    iVar3 = iVar5;
    if ((*pbVar7 & 1) == 0) goto LAB_0060e518;
LAB_0060e534:
    uVar8 = *(ulong *)(pbVar7 + 8);
  }
  if (uVar8 != 0) {
    uVar2 = (uint)(uVar6 >> 1);
    if ((uVar6 & 1) != 0) {
      uVar2 = (uint)*(undefined8 *)(pbVar7 + 8);
    }
    iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  pbVar7 = *(byte **)(param_1 + 0x30);
  bVar1 = *pbVar7;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_0060e590:
      uVar2 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar2 = (uint)*(undefined8 *)(pbVar7 + 8);
      }
      iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar7 + 8) != 0) goto LAB_0060e590;
  pbVar7 = *(byte **)(param_1 + 0x38);
  bVar1 = *pbVar7;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_0060e618;
  }
  else if (*(long *)(pbVar7 + 8) == 0) goto LAB_0060e618;
  uVar2 = (uint)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar2 = (uint)*(undefined8 *)(pbVar7 + 8);
  }
  iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_0060e618:
  if (param_1 != PTR_DAT_047ce710) {
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar2 = FUN_00514094();
      iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar2 = FUN_0026aac8();
      iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x50);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar5 = 0xb;
    }
    else {
      iVar5 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    iVar3 = iVar5 + iVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x54);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar5 = 0xb;
    }
    else {
      iVar5 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    iVar3 = iVar5 + iVar3;
  }
  if (param_1[0x58] != '\0') {
    iVar3 = iVar3 + 2;
  }
  if (param_1[0x59] != '\0') {
    iVar3 = iVar3 + 2;
  }
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar5 = 0xb;
    }
    else {
      iVar5 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    iVar3 = iVar5 + iVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar5 = 0xb;
    }
    else {
      iVar5 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    iVar3 = iVar5 + iVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar6 + 8);
    if ((bVar1 & 1) == 0) {
      uVar2 = (uint)(bVar1 >> 1);
    }
    else {
      uVar2 = (uint)*(undefined8 *)(uVar6 + 0x10);
    }
    iVar3 = uVar2 + iVar3;
  }
  *(int *)(param_1 + 100) = iVar3;
  return;
}


