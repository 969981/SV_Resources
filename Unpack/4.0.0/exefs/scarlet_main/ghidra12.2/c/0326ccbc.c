/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0326ccbc; name: FUN_0326ccbc
 */


void FUN_0326ccbc(long param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar2 = param_2 + 8;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar2) {
    FUN_02e9b320(param_1 + 0x18,PTR_PTR_047d1a50,(long)iVar2);
    iVar5 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar5 = 0;
  }
  if (iVar5 < iVar2) {
    *(int *)(param_1 + 0x20) = iVar2;
    memset((void *)(*(long *)(param_1 + 0x18) + (long)iVar5 * 4),0,
           (ulong)((param_2 - iVar5) + 7) * 4 + 4);
  }
  else if (iVar2 < iVar5) {
    *(int *)(param_1 + 0x20) = iVar2;
  }
  puVar6 = *(uint **)(param_1 + 0x18);
  puVar1 = puVar6 + (int)(param_2 + 4);
  puVar6[2] = 4;
  puVar6[3] = puVar6[3] | 0x40000000;
  puVar6[6] = param_2;
  puVar6[(long)(int)param_2 + 2] = param_2;
  puVar6[(long)(int)param_2 + 3] = puVar6[(long)(int)param_2 + 3] | 0x40000000;
  puVar1[2] = 4;
  puVar1[3] = puVar1[3] | 0x40000000;
  *puVar6 = *puVar6 & 0x7fffffff;
  puVar6[puVar6[2] - 1] = puVar6[puVar6[2] - 1] & 0x7fffffff;
  puVar6[4] = puVar6[4] | 0x80000000;
  puVar6[(ulong)(puVar6[6] - 1) + 4] = puVar6[(ulong)(puVar6[6] - 1) + 4] | 0x80000000;
  *puVar1 = *puVar1 & 0x7fffffff;
  puVar1[puVar1[2] - 1] = puVar1[puVar1[2] - 1] & 0x7fffffff;
  puVar6[1] = 0;
  puVar6[5] = 0;
  puVar1[1] = 0;
  *puVar6 = *puVar6 & 0xe0000000;
  puVar6[4] = puVar6[4] & 0xe0000000;
  *puVar1 = *puVar1 & 0xe0000000;
  lVar7 = *(long *)(param_1 + 0x18);
  uVar9 = LZCOUNT(*(uint *)(lVar7 + 0x18));
  uVar4 = 0x1d - uVar9;
  uVar8 = uVar4;
  if (4 < uVar4) {
    uVar8 = 5;
  }
  uVar8 = (*(uint *)(lVar7 + 0x18) & (0x80000000U >> (ulong)(uVar9 & 0x1f) ^ 0xffffffff)) >>
          ((ulong)(0x1f - (uVar9 + uVar8)) & 0x3f);
  lVar3 = param_1 + (ulong)uVar4 * 0x80 + (ulong)uVar8 * 4;
  iVar2 = *(int *)(lVar3 + 0x94);
  *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) & 0xe0000000;
  *(int *)(lVar7 + 0x14) = iVar2;
  *(uint *)(lVar7 + (long)iVar2 * 4) = *(uint *)(lVar7 + (long)iVar2 * 4) & 0xe0000000 | 4;
  *(undefined4 *)(lVar3 + 0x94) = 4;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1 << (ulong)(uVar4 & 0x1f);
  param_1 = param_1 + (ulong)uVar4 * 4;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1 << (ulong)(uVar8 & 0x1f);
  return;
}


