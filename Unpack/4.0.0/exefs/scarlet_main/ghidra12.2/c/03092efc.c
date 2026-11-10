/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03092efc; name: FUN_03092efc
 */


void FUN_03092efc(long param_1,int *param_2,long param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  void *__dest;
  int iVar9;
  int iVar10;
  int iVar11;
  size_t __n;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  int *piVar15;
  
  iVar2 = *(int *)(param_1 + 0x108);
  lVar8 = (long)iVar2 + (long)(int)param_4;
  iVar3 = *(int *)(param_1 + 0x50);
  iVar9 = (int)lVar8;
  if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) < iVar9) {
    FUN_03095450(param_1 + 0x100,PTR_PTR_047d1a50,lVar8);
  }
  lVar5 = *(long *)(param_1 + 0x100);
  iVar4 = *(int *)(param_1 + 0x148);
  *(int *)(param_1 + 0x108) = iVar9;
  lVar8 = (long)iVar4 + (long)(int)(iVar3 * param_4);
  iVar9 = (int)lVar8;
  if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar9) {
    FUN_02e9b320(param_1 + 0x140,PTR_PTR_047d1a50,lVar8);
  }
  lVar6 = *(long *)(param_1 + 0x140);
  *(int *)(param_1 + 0x148) = iVar9;
  iVar9 = *(int *)(param_1 + 0xd8);
  lVar8 = (long)iVar9 + (long)(int)param_4;
  iVar10 = (int)lVar8;
  if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < iVar10) {
    FUN_03095540(param_1 + 0xd0,PTR_PTR_047d1a50,lVar8);
  }
  *(int *)(param_1 + 0xd8) = iVar10;
  lVar8 = *(long *)(param_1 + 0xd0);
  if (*(int *)(param_1 + 0x108) == 0) {
    bVar7 = 1;
  }
  else {
    bVar7 = *(byte *)(*(long *)(param_1 + 0x100) + (long)*param_2) | 1;
  }
  *(byte *)(*(long *)(param_1 + 0x100) + (long)*param_2) = bVar7;
  *(undefined4 *)(*(long *)(param_1 + 0x168) + (long)*param_2 * 4) =
       *(undefined4 *)(param_1 + 0x170);
  iVar10 = *(int *)(param_1 + 0x170);
  lVar14 = (long)iVar10 + (long)(int)param_4;
  iVar11 = (int)lVar14;
  if ((int)(*(uint *)(param_1 + 0x174) & 0x7fffffff) < iVar11) {
    FUN_02e9b320(param_1 + 0x168,PTR_PTR_047d1a50,lVar14);
  }
  *(int *)(param_1 + 0x170) = iVar11;
  if (0 < (int)param_4) {
    lVar14 = 0;
    __dest = (void *)(lVar6 + (long)iVar4 * 4);
    __n = (long)iVar3 * 4;
    puVar12 = (undefined8 *)(lVar8 + (long)iVar9 * 0x10 + 8);
    puVar13 = (undefined1 *)(lVar5 + iVar2);
    piVar15 = (int *)(*(long *)(param_1 + 0x168) + (long)iVar10 * 4);
    do {
      puVar1 = (undefined4 *)(param_3 + lVar14);
      *puVar13 = *(undefined1 *)(puVar1 + 4);
      *(undefined4 *)(puVar12 + -1) = *puVar1;
      *(undefined4 *)((long)puVar12 + -4) = puVar1[1];
      *puVar12 = *(undefined8 *)(puVar1 + 2);
      memcpy(__dest,*(void **)(puVar1 + 6),__n);
      lVar14 = lVar14 + 0x38;
      __dest = (void *)((long)__dest + __n);
      *piVar15 = *param_2;
      puVar12 = puVar12 + 2;
      puVar13 = puVar13 + 1;
      piVar15 = piVar15 + 1;
    } while ((ulong)param_4 * 0x38 != lVar14);
  }
  return;
}


