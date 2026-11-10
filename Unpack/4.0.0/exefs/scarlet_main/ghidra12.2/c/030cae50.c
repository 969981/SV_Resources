/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030cae50; name: FUN_030cae50
 */


void FUN_030cae50(long *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *__dest;
  int iVar8;
  undefined4 *puVar9;
  void *__src;
  ulong uVar10;
  
  puVar5 = PTR_DAT_047e5108;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[4] = -0x8000000000000000;
  puVar5 = PTR_PTR_047d1a50;
  uVar4 = *(uint *)(param_2 + 0x20);
  if ((int)uVar4 < 1) {
    param_1[3] = 0;
    param_1[4] = -0x8000000000000000;
  }
  else {
    puVar9 = *(undefined4 **)(param_2 + 0x18);
    puVar6 = (undefined4 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 << 2);
    uVar3 = uVar4 & 3;
    param_1[3] = (long)puVar6;
    *(uint *)(param_1 + 4) = uVar4;
    *(uint *)((long)param_1 + 0x24) = uVar4;
    if (2 < uVar4 - 1) {
      iVar8 = -(uVar4 & 0xfffffffc);
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar9;
        puVar7[1] = puVar9[1];
        puVar7[2] = puVar9[2];
        puVar2 = puVar9 + 3;
        puVar6 = puVar7 + 4;
        puVar9 = puVar9 + 4;
        iVar8 = iVar8 + 4;
        puVar7[3] = *puVar2;
        puVar7 = puVar6;
      } while (iVar8 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar9;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  param_1[5] = 0;
  param_1[6] = -0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x30);
  if ((int)uVar4 < 1) {
    param_1[5] = 0;
    param_1[6] = -0x8000000000000000;
  }
  else {
    puVar9 = *(undefined4 **)(param_2 + 0x28);
    puVar6 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,(ulong)uVar4 << 2);
    uVar3 = uVar4 & 3;
    param_1[5] = (long)puVar6;
    *(uint *)(param_1 + 6) = uVar4;
    *(uint *)((long)param_1 + 0x34) = uVar4;
    if (2 < uVar4 - 1) {
      iVar8 = -(uVar4 & 0xfffffffc);
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar9;
        puVar7[1] = puVar9[1];
        puVar7[2] = puVar9[2];
        puVar2 = puVar9 + 3;
        puVar6 = puVar7 + 4;
        puVar9 = puVar9 + 4;
        iVar8 = iVar8 + 4;
        puVar7[3] = *puVar2;
        puVar7 = puVar6;
      } while (iVar8 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar9;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x40);
  uVar10 = (ulong)uVar4;
  if ((int)uVar4 < 1) {
    param_1[7] = 0;
    param_1[8] = -0x8000000000000000;
  }
  else {
    __src = *(void **)(param_2 + 0x38);
    __dest = (void *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,uVar10 * 0x30);
    param_1[7] = (long)__dest;
    *(uint *)(param_1 + 8) = uVar4;
    *(uint *)((long)param_1 + 0x44) = uVar4;
    do {
      memcpy(__dest,__src,0x24);
      *(undefined4 *)((long)__dest + 0x24) = *(undefined4 *)((long)__src + 0x24);
      puVar1 = (undefined1 *)((long)__src + 0x28);
      uVar4 = (int)uVar10 - 1;
      uVar10 = (ulong)uVar4;
      __src = (void *)((long)__src + 0x30);
      *(undefined1 *)((long)__dest + 0x28) = *puVar1;
      __dest = (void *)((long)__dest + 0x30);
    } while (uVar4 != 0);
  }
  param_1[0xb] = *(long *)(param_2 + 0x58);
  param_1[10] = *(long *)(param_2 + 0x50);
  return;
}


