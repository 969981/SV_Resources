/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0084cc94; name: FUN_0084cc94
 */


long * FUN_0084cc94(long *param_1,long *param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined *puVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong local_48;
  
  puVar4 = PTR_DAT_047d1a08;
  if (param_2 != param_1) {
    pvVar2 = (void *)0x0;
    if (*param_2 != 0) {
      pvVar2 = (void *)(*param_2 + (long)param_2);
    }
    uVar3 = *(uint *)(param_2 + 1);
    uVar6 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    if ((int)uVar6 <= (int)uVar3) {
      uVar6 = uVar3;
    }
    lVar7 = *param_1;
    if (pvVar2 == (void *)0x0 || uVar6 == 0) {
      if (*(int *)((long)param_1 + 0xc) < 0) {
        lVar8 = 0;
        if (lVar7 != 0) {
          lVar8 = lVar7 + (long)param_1;
        }
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar8,0);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      pvVar5 = (void *)0x0;
      if (lVar7 != 0) {
        pvVar5 = (void *)(lVar7 + (long)param_1);
      }
      uVar1 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 1)) {
        uVar1 = *(uint *)(param_1 + 1);
      }
      if (uVar6 != uVar1) {
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          pvVar5 = (void *)0x0;
          if (lVar7 != 0) {
            pvVar5 = (void *)(lVar7 + (long)param_1);
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,pvVar5,0);
        }
        local_48 = (ulong)uVar6 << 3;
        pvVar5 = (void *)(**(code **)puVar4)(0,&local_48,0);
        uVar3 = *(uint *)(param_2 + 1);
      }
      memcpy(pvVar5,pvVar2,-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
      lVar7 = 0;
      if (pvVar5 != (void *)0x0) {
        lVar7 = (long)pvVar5 - (long)param_1;
      }
      *param_1 = lVar7;
      *(int *)(param_1 + 1) = (int)param_2[1];
      uVar6 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
      if ((int)uVar6 <= (int)*(uint *)(param_2 + 1)) {
        uVar6 = *(uint *)(param_2 + 1);
      }
      *(uint *)((long)param_1 + 0xc) = uVar6 | 0x80000000;
    }
    plVar9 = param_1 + 2;
    lVar7 = *plVar9;
    lVar8 = param_2[2];
    uVar6 = *(uint *)(param_2 + 3);
    pvVar2 = (void *)0x0;
    if (lVar8 != 0) {
      pvVar2 = (void *)(lVar8 + (long)(param_2 + 2));
    }
    uVar3 = *(uint *)((long)param_2 + 0x1c) & 0x7fffffff;
    if ((int)uVar3 <= (int)uVar6) {
      uVar3 = uVar6;
    }
    if ((pvVar2 == (void *)0x0) || (uVar3 == 0)) {
      if (*(int *)((long)param_1 + 0x1c) < 0) {
        lVar8 = 0;
        if (lVar7 != 0) {
          lVar8 = lVar7 + (long)plVar9;
        }
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar8,0);
      }
      *plVar9 = 0;
      param_1[3] = 0;
    }
    else {
      pvVar5 = (void *)0x0;
      if (lVar7 != 0) {
        pvVar5 = (void *)(lVar7 + (long)plVar9);
      }
      uVar1 = *(uint *)((long)param_1 + 0x1c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 3)) {
        uVar1 = *(uint *)(param_1 + 3);
      }
      if (uVar3 != uVar1) {
        if ((int)*(uint *)((long)param_1 + 0x1c) < 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,pvVar5,0);
        }
        local_48 = (ulong)uVar3;
        pvVar5 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
        uVar6 = *(uint *)(param_2 + 3);
      }
      memcpy(pvVar5,pvVar2,(long)(int)uVar6);
      lVar7 = 0;
      if (pvVar5 != (void *)0x0) {
        lVar7 = (long)pvVar5 - (long)plVar9;
      }
      param_1[2] = lVar7;
      *(int *)(param_1 + 3) = (int)param_2[3];
      uVar6 = *(uint *)((long)param_2 + 0x1c) & 0x7fffffff;
      if ((int)uVar6 <= (int)*(uint *)(param_2 + 3)) {
        uVar6 = *(uint *)(param_2 + 3);
      }
      *(uint *)((long)param_1 + 0x1c) = uVar6 | 0x80000000;
    }
    plVar9 = param_1 + 4;
    lVar7 = *plVar9;
    lVar8 = param_2[4];
    uVar6 = *(uint *)(param_2 + 5);
    pvVar2 = (void *)0x0;
    if (lVar8 != 0) {
      pvVar2 = (void *)(lVar8 + (long)(param_2 + 4));
    }
    uVar3 = *(uint *)((long)param_2 + 0x2c) & 0x7fffffff;
    if ((int)uVar3 <= (int)uVar6) {
      uVar3 = uVar6;
    }
    if ((pvVar2 == (void *)0x0) || (uVar3 == 0)) {
      if (*(int *)((long)param_1 + 0x2c) < 0) {
        lVar8 = 0;
        if (lVar7 != 0) {
          lVar8 = lVar7 + (long)plVar9;
        }
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar8,0);
      }
      *plVar9 = 0;
      param_1[5] = 0;
    }
    else {
      pvVar5 = (void *)0x0;
      if (lVar7 != 0) {
        pvVar5 = (void *)(lVar7 + (long)plVar9);
      }
      uVar1 = *(uint *)((long)param_1 + 0x2c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 5)) {
        uVar1 = *(uint *)(param_1 + 5);
      }
      if (uVar3 != uVar1) {
        if ((int)*(uint *)((long)param_1 + 0x2c) < 0) {
          pvVar5 = (void *)0x0;
          if (lVar7 != 0) {
            pvVar5 = (void *)(lVar7 + (long)plVar9);
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,pvVar5,0);
        }
        local_48 = (ulong)uVar3 << 2;
        pvVar5 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
        uVar6 = *(uint *)(param_2 + 5);
      }
      memcpy(pvVar5,pvVar2,-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2);
      lVar7 = 0;
      if (pvVar5 != (void *)0x0) {
        lVar7 = (long)pvVar5 - (long)plVar9;
      }
      param_1[4] = lVar7;
      *(int *)(param_1 + 5) = (int)param_2[5];
      uVar6 = *(uint *)((long)param_2 + 0x2c) & 0x7fffffff;
      if ((int)uVar6 <= (int)*(uint *)(param_2 + 5)) {
        uVar6 = *(uint *)(param_2 + 5);
      }
      *(uint *)((long)param_1 + 0x2c) = uVar6 | 0x80000000;
    }
  }
  return param_1;
}


