/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02efe83c; name: FUN_02efe83c
 */


void FUN_02efe83c(long *param_1,long param_2)

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
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_047e4018 + 0x10);
  param_1[1] = 0xffffffff;
  plVar8 = param_1 + 3;
  *plVar8 = 0;
  param_1[4] = 0;
  lVar7 = *(long *)(param_2 + 0x18);
  uVar3 = *(uint *)(param_2 + 0x20);
  pvVar1 = (void *)0x0;
  if (lVar7 != 0) {
    pvVar1 = (void *)(lVar7 + param_2 + 0x18);
  }
  if (0 < (int)uVar3 && pvVar1 != (void *)0x0) {
    uVar4 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    puVar5 = PTR_DAT_047d1a08;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
    if ((int)uVar4 < (int)uVar3) goto LAB_02efea7c;
    local_58 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
    pvVar6 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    pvVar2 = (void *)0x0;
    if (param_1[3] != 0) {
      pvVar2 = (void *)(param_1[3] + (long)plVar8);
    }
    memcpy(pvVar6,pvVar2,(long)(int)param_1[4] << 2);
    if (*(int *)((long)param_1 + 0x24) < 0) {
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
    *(uint *)(param_1 + 4) = uVar3;
    *(uint *)((long)param_1 + 0x24) = uVar4 | 0x80000000;
    param_1[3] = lVar7;
    memcpy((void *)(lVar7 + (long)plVar8),pvVar1,(ulong)uVar3 << 2);
  }
  FUN_02efea9c(param_1 + 5,param_2 + 0x28);
  FUN_02efea9c(param_1 + 8,param_2 + 0x40);
  plVar8 = param_1 + 0xb;
  *plVar8 = 0;
  param_1[0xc] = 0;
  lVar7 = *(long *)(param_2 + 0x58);
  uVar3 = *(uint *)(param_2 + 0x60);
  pvVar1 = (void *)0x0;
  if (lVar7 != 0) {
    pvVar1 = (void *)(lVar7 + param_2 + 0x58);
  }
  if ((0 < (int)uVar3) && (pvVar1 != (void *)0x0)) {
    uVar4 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 100) = 0;
    puVar5 = PTR_DAT_047d1a08;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
    if ((int)uVar4 < (int)uVar3) {
LAB_02efea7c:
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    local_58 = -(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar4 << 5;
    pvVar6 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    pvVar2 = (void *)0x0;
    if (param_1[0xb] != 0) {
      pvVar2 = (void *)(param_1[0xb] + (long)plVar8);
    }
    memcpy(pvVar6,pvVar2,(long)(int)param_1[0xc] << 5);
    if (*(int *)((long)param_1 + 100) < 0) {
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
    *(uint *)(param_1 + 0xc) = uVar3;
    *(uint *)((long)param_1 + 100) = uVar4 | 0x80000000;
    param_1[0xb] = lVar7;
    memcpy((void *)(lVar7 + (long)plVar8),pvVar1,(ulong)uVar3 << 5);
  }
  return;
}


