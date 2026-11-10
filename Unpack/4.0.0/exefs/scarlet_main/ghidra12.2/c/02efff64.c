/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02efff64; name: FUN_02efff64
 */


void FUN_02efff64(long *param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  void *pvVar7;
  long lVar8;
  long *plVar9;
  ulong local_58;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_047e4020 + 0x10);
  param_1[1] = 0xffffffff;
  plVar9 = param_1 + 3;
  *plVar9 = 0;
  param_1[4] = 0;
  lVar8 = *(long *)(param_2 + 0x18);
  uVar3 = *(uint *)(param_2 + 0x20);
  pvVar1 = (void *)0x0;
  if (lVar8 != 0) {
    pvVar1 = (void *)(lVar8 + param_2 + 0x18);
  }
  if (0 < (int)uVar3 && pvVar1 != (void *)0x0) {
    uVar5 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    puVar6 = PTR_DAT_047d1a08;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = (uVar5 | (int)uVar5 >> 1) + 1;
    if ((int)uVar5 < (int)uVar3) goto LAB_02f00298;
    local_58 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
    pvVar7 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    pvVar2 = (void *)0x0;
    if (param_1[3] != 0) {
      pvVar2 = (void *)(param_1[3] + (long)plVar9);
    }
    memcpy(pvVar7,pvVar2,(long)(int)param_1[4] << 2);
    if (*(int *)((long)param_1 + 0x24) < 0) {
      lVar8 = 0;
      if (*plVar9 != 0) {
        lVar8 = *plVar9 + (long)plVar9;
      }
      (**(code **)(puVar6 + 8))(0,lVar8,0);
    }
    lVar8 = 0;
    if (pvVar7 != (void *)0x0) {
      lVar8 = (long)pvVar7 - (long)plVar9;
    }
    *(uint *)(param_1 + 4) = uVar3;
    *(uint *)((long)param_1 + 0x24) = uVar5 | 0x80000000;
    param_1[3] = lVar8;
    memcpy((void *)(lVar8 + (long)plVar9),pvVar1,(ulong)uVar3 << 2);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  plVar9 = param_1 + 7;
  *plVar9 = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 6) = uVar4;
  lVar8 = *(long *)(param_2 + 0x38);
  uVar3 = *(uint *)(param_2 + 0x40);
  pvVar1 = (void *)0x0;
  if (lVar8 != 0) {
    pvVar1 = (void *)(lVar8 + param_2 + 0x38);
  }
  if ((0 < (int)uVar3) && (pvVar1 != (void *)0x0)) {
    uVar5 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    puVar6 = PTR_DAT_047d1a08;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = (uVar5 | (int)uVar5 >> 1) + 1;
    if ((int)uVar5 < (int)uVar3) goto LAB_02f00298;
    local_58 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
    pvVar7 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    pvVar2 = (void *)0x0;
    if (param_1[7] != 0) {
      pvVar2 = (void *)(param_1[7] + (long)plVar9);
    }
    memcpy(pvVar7,pvVar2,(long)(int)param_1[8] << 2);
    if (*(int *)((long)param_1 + 0x44) < 0) {
      lVar8 = 0;
      if (*plVar9 != 0) {
        lVar8 = *plVar9 + (long)plVar9;
      }
      (**(code **)(puVar6 + 8))(0,lVar8,0);
    }
    lVar8 = 0;
    if (pvVar7 != (void *)0x0) {
      lVar8 = (long)pvVar7 - (long)plVar9;
    }
    *(uint *)(param_1 + 8) = uVar3;
    *(uint *)((long)param_1 + 0x44) = uVar5 | 0x80000000;
    param_1[7] = lVar8;
    memcpy((void *)(lVar8 + (long)plVar9),pvVar1,(ulong)uVar3 << 2);
  }
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  plVar9 = param_1 + 10;
  *plVar9 = 0;
  *(undefined4 *)(param_1 + 9) = uVar4;
  param_1[0xb] = 0;
  lVar8 = *(long *)(param_2 + 0x50);
  uVar3 = *(uint *)(param_2 + 0x58);
  pvVar1 = (void *)0x0;
  if (lVar8 != 0) {
    pvVar1 = (void *)(lVar8 + param_2 + 0x50);
  }
  if ((0 < (int)uVar3) && (pvVar1 != (void *)0x0)) {
    uVar5 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
    puVar6 = PTR_DAT_047d1a08;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = (uVar5 | (int)uVar5 >> 1) + 1;
    if ((int)uVar5 < (int)uVar3) {
LAB_02f00298:
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    local_58 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
    pvVar7 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    pvVar2 = (void *)0x0;
    if (param_1[10] != 0) {
      pvVar2 = (void *)(param_1[10] + (long)plVar9);
    }
    memcpy(pvVar7,pvVar2,(long)(int)param_1[0xb] << 2);
    if (*(int *)((long)param_1 + 0x5c) < 0) {
      lVar8 = 0;
      if (*plVar9 != 0) {
        lVar8 = *plVar9 + (long)plVar9;
      }
      (**(code **)(puVar6 + 8))(0,lVar8,0);
    }
    lVar8 = 0;
    if (pvVar7 != (void *)0x0) {
      lVar8 = (long)pvVar7 - (long)plVar9;
    }
    *(uint *)(param_1 + 0xb) = uVar3;
    *(uint *)((long)param_1 + 0x5c) = uVar5 | 0x80000000;
    param_1[10] = lVar8;
    memcpy((void *)(lVar8 + (long)plVar9),pvVar1,(ulong)uVar3 << 2);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  return;
}


