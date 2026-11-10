/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ebfe58; name: FUN_02ebfe58
 */


void FUN_02ebfe58(long *param_1,long *param_2)

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
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = *(uint *)(param_2 + 1);
  pvVar1 = (void *)0x0;
  if (*param_2 != 0) {
    pvVar1 = (void *)(*param_2 + (long)param_2);
  }
  if (0 < (int)uVar3 && pvVar1 != (void *)0x0) {
    uVar4 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    puVar5 = PTR_DAT_047d1a08;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
    if ((int)uVar4 < (int)uVar3) goto LAB_02ec013c;
    local_58 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
    pvVar6 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    pvVar2 = (void *)0x0;
    if (*param_1 != 0) {
      pvVar2 = (void *)(*param_1 + (long)param_1);
    }
    memcpy(pvVar6,pvVar2,(long)(int)param_1[1] << 3);
    if (*(int *)((long)param_1 + 0xc) < 0) {
      lVar7 = 0;
      if (*param_1 != 0) {
        lVar7 = *param_1 + (long)param_1;
      }
      (**(code **)(puVar5 + 8))(0,lVar7,0);
    }
    lVar7 = 0;
    if (pvVar6 != (void *)0x0) {
      lVar7 = (long)pvVar6 - (long)param_1;
    }
    *(uint *)(param_1 + 1) = uVar3;
    *(uint *)((long)param_1 + 0xc) = uVar4 | 0x80000000;
    *param_1 = lVar7;
    memcpy((void *)(lVar7 + (long)param_1),pvVar1,(ulong)uVar3 << 3);
  }
  plVar8 = param_1 + 2;
  *plVar8 = 0;
  param_1[3] = 0;
  lVar7 = param_2[2];
  uVar3 = *(uint *)(param_2 + 3);
  pvVar1 = (void *)0x0;
  if (lVar7 != 0) {
    pvVar1 = (void *)(lVar7 + (long)(param_2 + 2));
  }
  if (0 < (int)uVar3 && pvVar1 != (void *)0x0) {
    uVar4 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    puVar5 = PTR_DAT_047d1a08;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
    if ((int)uVar4 < (int)uVar3) goto LAB_02ec013c;
    local_58 = (ulong)(int)uVar4;
    pvVar6 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    pvVar2 = (void *)0x0;
    if (param_1[2] != 0) {
      pvVar2 = (void *)(param_1[2] + (long)plVar8);
    }
    memcpy(pvVar6,pvVar2,(long)(int)param_1[3]);
    if (*(int *)((long)param_1 + 0x1c) < 0) {
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
    *(uint *)(param_1 + 3) = uVar3;
    *(uint *)((long)param_1 + 0x1c) = uVar4 | 0x80000000;
    param_1[2] = lVar7;
    memcpy((void *)(lVar7 + (long)plVar8),pvVar1,(ulong)uVar3);
  }
  plVar8 = param_1 + 4;
  *plVar8 = 0;
  param_1[5] = 0;
  lVar7 = param_2[4];
  uVar3 = *(uint *)(param_2 + 5);
  pvVar1 = (void *)0x0;
  if (lVar7 != 0) {
    pvVar1 = (void *)(lVar7 + (long)(param_2 + 4));
  }
  if ((0 < (int)uVar3) && (pvVar1 != (void *)0x0)) {
    uVar4 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    puVar5 = PTR_DAT_047d1a08;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
    if ((int)uVar4 < (int)uVar3) {
LAB_02ec013c:
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    local_58 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
    pvVar6 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    pvVar2 = (void *)0x0;
    if (param_1[4] != 0) {
      pvVar2 = (void *)(param_1[4] + (long)plVar8);
    }
    memcpy(pvVar6,pvVar2,(long)(int)param_1[5] << 2);
    if (*(int *)((long)param_1 + 0x2c) < 0) {
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
    *(uint *)(param_1 + 5) = uVar3;
    *(uint *)((long)param_1 + 0x2c) = uVar4 | 0x80000000;
    param_1[4] = lVar7;
    memcpy((void *)(lVar7 + (long)plVar8),pvVar1,(ulong)uVar3 << 2);
  }
  return;
}


