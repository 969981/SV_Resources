/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03093258; name: FUN_03093258
 */


undefined4 * FUN_03093258(long param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  void *__dest;
  int iVar7;
  int iVar8;
  long lVar9;
  size_t __n;
  undefined4 *puVar10;
  long lVar11;
  
  iVar7 = *(int *)(param_1 + 0xe8);
  iVar1 = iVar7 + param_3;
  if ((int)(*(uint *)(param_1 + 0xec) & 0x7fffffff) < iVar1) {
    nn::os::LockMutex(*(MutexType **)(param_1 + 0x1a8));
    iVar1 = *(int *)(param_1 + 0xe8);
    lVar9 = (long)iVar1 + (long)(int)param_3;
    iVar7 = (int)lVar9;
    if ((int)(*(uint *)(param_1 + 0xec) & 0x7fffffff) < iVar7) {
      FUN_0309515c(param_1 + 0xe0,PTR_PTR_047d1a50,lVar9);
    }
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0xe0) + (long)iVar1 * 0x14);
    *(int *)(param_1 + 0xe8) = iVar7;
    nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x1a8));
  }
  else {
    *(int *)(param_1 + 0xe8) = iVar1;
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0xe0) + (long)iVar7 * 0x14);
  }
  iVar1 = *(int *)(param_1 + 0x60);
  iVar7 = *(int *)(param_1 + 0x158);
  lVar9 = (long)iVar7 + (long)iVar1 * (long)(int)param_3;
  iVar8 = (int)lVar9;
  if ((int)(*(uint *)(param_1 + 0x15c) & 0x7fffffff) < iVar8) {
    FUN_02e9b320(param_1 + 0x150,PTR_PTR_047d1a50,lVar9);
  }
  iVar3 = *(int *)(param_1 + 0x118);
  *(int *)(param_1 + 0x158) = iVar8;
  lVar9 = (long)iVar3 + (long)(int)param_3;
  lVar11 = *(long *)(param_1 + 0x150);
  iVar8 = (int)lVar9;
  if ((int)(*(uint *)(param_1 + 0x11c) & 0x7fffffff) < iVar8) {
    FUN_03095650(param_1 + 0x110,PTR_PTR_047d1a50,lVar9);
  }
  *(int *)(param_1 + 0x118) = iVar8;
  if (0 < (int)param_3) {
    __dest = (void *)(lVar11 + (long)iVar7 * 4);
    lVar9 = 0;
    __n = (long)iVar1 * 4;
    puVar6 = (undefined2 *)(*(long *)(param_1 + 0x110) + (long)iVar3 * 2);
    puVar10 = puVar5;
    do {
      puVar2 = (undefined4 *)(param_2 + lVar9);
      *puVar10 = *puVar2;
      puVar10[1] = puVar2[1];
      uVar4 = *(undefined8 *)(puVar2 + 2);
      *(undefined2 *)(puVar10 + 4) = *(undefined2 *)(puVar2 + 4);
      *(undefined8 *)(puVar10 + 2) = uVar4;
      *(undefined2 *)((long)puVar10 + 0x12) = *(undefined2 *)((long)puVar2 + 0x12);
      *puVar6 = *(undefined2 *)(puVar2 + 0xe);
      memcpy(__dest,*(void **)(puVar2 + 6),__n);
      lVar9 = lVar9 + 0x40;
      __dest = (void *)((long)__dest + __n);
      puVar10 = puVar10 + 5;
      puVar6 = puVar6 + 1;
    } while ((ulong)param_3 * 0x40 != lVar9);
  }
  return puVar5;
}


