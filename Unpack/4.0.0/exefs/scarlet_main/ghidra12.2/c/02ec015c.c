/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ec015c; name: FUN_02ec015c
 */


void FUN_02ec015c(long param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  ulong local_58;
  
  FUN_02ec0474();
  plVar8 = (long *)(param_1 + 0x70);
  *plVar8 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  lVar7 = *(long *)(param_2 + 0x70);
  uVar3 = *(uint *)(param_2 + 0x78);
  pvVar1 = (void *)0x0;
  if (lVar7 != 0) {
    pvVar1 = (void *)(lVar7 + param_2 + 0x70);
  }
  if (0 < (int)uVar3 && pvVar1 != (void *)0x0) {
    uVar4 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    puVar5 = PTR_DAT_047d1a08;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
    if ((int)uVar4 < (int)uVar3) goto LAB_02ec0454;
    local_58 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
    pvVar6 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    pvVar2 = (void *)0x0;
    if (*(long *)(param_1 + 0x70) != 0) {
      pvVar2 = (void *)(*(long *)(param_1 + 0x70) + (long)plVar8);
    }
    memcpy(pvVar6,pvVar2,(long)*(int *)(param_1 + 0x78) << 2);
    if (*(int *)(param_1 + 0x7c) < 0) {
      lVar7 = 0;
      if (*plVar8 != 0) {
        lVar7 = *plVar8 + (long)plVar8;
      }
      (**(code **)(puVar5 + 8))(0,lVar7,0);
    }
    lVar7 = 0;
    if (pvVar6 != (void *)0x0) {
      lVar7 = (long)pvVar6 - (long)plVar8;
    }
    *(uint *)(param_1 + 0x78) = uVar3;
    *(uint *)(param_1 + 0x7c) = uVar4 | 0x80000000;
    *(long *)(param_1 + 0x70) = lVar7;
    memcpy((void *)(lVar7 + (long)plVar8),pvVar1,(ulong)uVar3 << 2);
  }
  plVar8 = (long *)(param_1 + 0x80);
  *plVar8 = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  lVar7 = *(long *)(param_2 + 0x80);
  uVar3 = *(uint *)(param_2 + 0x88);
  pvVar1 = (void *)0x0;
  if (lVar7 != 0) {
    pvVar1 = (void *)(lVar7 + param_2 + 0x80);
  }
  if (0 < (int)uVar3 && pvVar1 != (void *)0x0) {
    uVar4 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    puVar5 = PTR_DAT_047d1a08;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
    if ((int)uVar4 < (int)uVar3) goto LAB_02ec0454;
    local_58 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
    pvVar6 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    pvVar2 = (void *)0x0;
    if (*(long *)(param_1 + 0x80) != 0) {
      pvVar2 = (void *)(*(long *)(param_1 + 0x80) + (long)plVar8);
    }
    memcpy(pvVar6,pvVar2,(long)*(int *)(param_1 + 0x88) << 3);
    if (*(int *)(param_1 + 0x8c) < 0) {
      lVar7 = 0;
      if (*plVar8 != 0) {
        lVar7 = *plVar8 + (long)plVar8;
      }
      (**(code **)(puVar5 + 8))(0,lVar7,0);
    }
    lVar7 = 0;
    if (pvVar6 != (void *)0x0) {
      lVar7 = (long)pvVar6 - (long)plVar8;
    }
    *(uint *)(param_1 + 0x88) = uVar3;
    *(uint *)(param_1 + 0x8c) = uVar4 | 0x80000000;
    *(long *)(param_1 + 0x80) = lVar7;
    memcpy((void *)(lVar7 + (long)plVar8),pvVar1,(ulong)uVar3 << 3);
  }
  plVar8 = (long *)(param_1 + 0x90);
  *plVar8 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  lVar7 = *(long *)(param_2 + 0x90);
  uVar3 = *(uint *)(param_2 + 0x98);
  pvVar1 = (void *)0x0;
  if (lVar7 != 0) {
    pvVar1 = (void *)(lVar7 + param_2 + 0x90);
  }
  if ((0 < (int)uVar3) && (pvVar1 != (void *)0x0)) {
    uVar4 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    puVar5 = PTR_DAT_047d1a08;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
    if ((int)uVar4 < (int)uVar3) {
LAB_02ec0454:
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    local_58 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
    pvVar6 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    pvVar2 = (void *)0x0;
    if (*(long *)(param_1 + 0x90) != 0) {
      pvVar2 = (void *)(*(long *)(param_1 + 0x90) + (long)plVar8);
    }
    memcpy(pvVar6,pvVar2,(long)*(int *)(param_1 + 0x98) << 2);
    if (*(int *)(param_1 + 0x9c) < 0) {
      lVar7 = 0;
      if (*plVar8 != 0) {
        lVar7 = *plVar8 + (long)plVar8;
      }
      (**(code **)(puVar5 + 8))(0,lVar7,0);
    }
    lVar7 = 0;
    if (pvVar6 != (void *)0x0) {
      lVar7 = (long)pvVar6 - (long)plVar8;
    }
    *(uint *)(param_1 + 0x98) = uVar3;
    *(uint *)(param_1 + 0x9c) = uVar4 | 0x80000000;
    *(long *)(param_1 + 0x90) = lVar7;
    memcpy((void *)(lVar7 + (long)plVar8),pvVar1,(ulong)uVar3 << 2);
  }
  return;
}


