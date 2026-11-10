/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030bb5f8; name: FUN_030bb5f8
 */


long FUN_030bb5f8(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  void *pvVar8;
  long lVar9;
  void *__dest;
  int iVar10;
  
  if (param_2 != param_1) {
    iVar10 = *(int *)(param_2 + 0x20);
    pvVar8 = *(void **)(param_2 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar10) {
      FUN_030b4c90(param_1 + 0x18,PTR_PTR_047d1a50,(long)iVar10);
    }
    memcpy(*(void **)(param_1 + 0x18),pvVar8,(long)iVar10 << 2);
    *(int *)(param_1 + 0x20) = iVar10;
    uVar2 = *(uint *)(param_2 + 0x30);
    lVar9 = *(long *)(param_2 + 0x28);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < (int)uVar2) {
      FUN_030bbb9c((long *)(param_1 + 0x28),PTR_PTR_047d1a50,(long)(int)uVar2);
    }
    lVar5 = *(long *)(param_1 + 0x28);
    uVar1 = *(uint *)(param_1 + 0x30);
    if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x30)) {
      uVar1 = uVar2;
    }
    if ((lVar5 != lVar9) && (0 < (int)uVar1)) {
      uVar4 = (ulong)uVar1;
      puVar6 = (undefined1 *)(lVar5 + 0x28);
      puVar7 = (undefined1 *)(lVar9 + 0x28);
      do {
        uVar3 = *(undefined8 *)(puVar7 + -0x28);
        *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
        *(undefined8 *)(puVar6 + -0x28) = uVar3;
        uVar3 = *(undefined8 *)(puVar7 + -0x18);
        *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
        *(undefined8 *)(puVar6 + -0x18) = uVar3;
        *(undefined4 *)(puVar6 + -8) = *(undefined4 *)(puVar7 + -8);
        *(undefined4 *)(puVar6 + -4) = *(undefined4 *)(puVar7 + -4);
        uVar4 = uVar4 - 1;
        *puVar6 = *puVar7;
        puVar6 = puVar6 + 0x30;
        puVar7 = puVar7 + 0x30;
      } while (uVar4 != 0);
      lVar5 = *(long *)(param_1 + 0x28);
    }
    iVar10 = uVar2 - uVar1;
    if (0 < iVar10) {
      pvVar8 = (void *)(lVar9 + (long)(int)uVar1 * 0x30);
      __dest = (void *)(lVar5 + (long)(int)uVar1 * 0x30);
      do {
        memcpy(__dest,pvVar8,0x24);
        *(undefined4 *)((long)__dest + 0x24) = *(undefined4 *)((long)pvVar8 + 0x24);
        puVar6 = (undefined1 *)((long)pvVar8 + 0x28);
        iVar10 = iVar10 + -1;
        pvVar8 = (void *)((long)pvVar8 + 0x30);
        *(undefined1 *)((long)__dest + 0x28) = *puVar6;
        __dest = (void *)((long)__dest + 0x30);
      } while (iVar10 != 0);
    }
    *(uint *)(param_1 + 0x30) = uVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_2 + 0x46);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    iVar10 = *(int *)(param_2 + 0x58);
    pvVar8 = *(void **)(param_2 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar10) {
      FUN_0309d1cc(param_1 + 0x50,PTR_PTR_047d1a50,(long)iVar10);
    }
    memcpy(*(void **)(param_1 + 0x50),pvVar8,(long)iVar10 << 2);
    *(int *)(param_1 + 0x58) = iVar10;
  }
  return param_1;
}


