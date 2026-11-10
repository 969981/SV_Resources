/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03090fb4; name: FUN_03090fb4
 */


void FUN_03090fb4(long *param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  MutexType *pMVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  long *plVar12;
  int *piVar13;
  undefined4 local_70 [2];
  undefined8 local_68;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_047e5008 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[0xf] = -0x8000000000000000;
  plVar7 = param_1 + 0xd;
  *plVar7 = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = -0x8000000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = -0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = -0x8000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = -0x8000000000000000;
  param_1[0x18] = 0;
  param_1[0x19] = -0x8000000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = -0x8000000000000000;
  plVar12 = param_1 + 0x1c;
  *plVar12 = 0;
  param_1[0x1d] = -0x8000000000000000;
  param_1[0x1e] = 0;
  param_1[0x2b] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x1f] = -0x8000000000000000;
  param_1[0x20] = 0;
  param_1[0x21] = -0x8000000000000000;
  param_1[0x22] = 0;
  param_1[0x23] = -0x8000000000000000;
  param_1[0x24] = 0;
  param_1[0x25] = -0x8000000000000000;
  param_1[0x26] = 0;
  param_1[0x27] = -0x8000000000000000;
  param_1[0x28] = 0;
  param_1[0x29] = -0x8000000000000000;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = -0x8000000000000000;
  param_1[0x31] = 0;
  param_1[0x32] = -0x8000000000000000;
  param_1[0x33] = (long)&DAT_03d7702c;
  param_1[3] = param_2[3];
  *(int *)(param_1 + 4) = (int)param_2[4];
  param_1[5] = param_2[5];
  *(int *)(param_1 + 6) = (int)param_2[6];
  param_1[7] = param_2[7];
  *(int *)(param_1 + 8) = (int)param_2[8];
  param_1[9] = param_2[9];
  *(int *)(param_1 + 10) = (int)param_2[10];
  param_1[0xb] = param_2[0xb];
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  plVar5 = (long *)*plVar7;
  plVar9 = (long *)param_2[0xd];
  if (plVar5 != plVar9) {
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar9 = plVar9 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)*plVar7;
      plVar9 = (long *)param_2[0xd];
    }
    *plVar7 = (long)plVar9;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar9 = plVar5 + 2;
      do {
        lVar10 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  piVar13 = (int *)PTR_DAT_047e4f38;
  iVar1 = *(int *)PTR_DAT_047e4f38;
  lVar10 = tpidr_el0;
  lVar8 = *(long *)(lVar10 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar8;
  }
  if (*(long *)(lVar8 + (long)iVar1 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (param_2 == param_1) {
    iVar1 = *piVar13;
    lVar8 = *(long *)(lVar10 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar8;
    }
    if (*(long *)(lVar8 + (long)iVar1 * 8 + 1000) != 0) {
      FUN_03231bdc();
      lVar8 = *(long *)(lVar10 + 0x1000b8);
    }
    iVar1 = *piVar13;
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar8;
    }
    if (*(long *)(lVar8 + (long)iVar1 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
  }
  else {
    iVar1 = (int)param_2[0xf];
    pvVar11 = (void *)param_2[0xe];
    if ((int)(*(uint *)((long)param_1 + 0x7c) & 0x7fffffff) < iVar1) {
      FUN_02f5f190(param_1 + 0xe,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0xe],pvVar11,(long)iVar1 << 2);
    *(int *)(param_1 + 0xf) = iVar1;
    iVar1 = (int)param_2[0x11];
    pvVar11 = (void *)param_2[0x10];
    if ((int)(*(uint *)((long)param_1 + 0x8c) & 0x7fffffff) < iVar1) {
      FUN_02f5f190(param_1 + 0x10,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x10],pvVar11,(long)iVar1 << 2);
    *(int *)(param_1 + 0x11) = iVar1;
    piVar13 = (int *)PTR_DAT_047e4f38;
    iVar1 = (int)param_2[0x13];
    pvVar11 = (void *)param_2[0x12];
    if ((int)(*(uint *)((long)param_1 + 0x9c) & 0x7fffffff) < iVar1) {
      FUN_02f5f190(param_1 + 0x12,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x12],pvVar11,(long)iVar1 << 2);
    *(int *)(param_1 + 0x13) = iVar1;
    iVar1 = (int)param_2[0x15];
    pvVar11 = (void *)param_2[0x14];
    if ((int)(*(uint *)((long)param_1 + 0xac) & 0x7fffffff) < iVar1) {
      FUN_02f5f190(param_1 + 0x14,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x14],pvVar11,(long)iVar1 << 2);
    *(int *)(param_1 + 0x15) = iVar1;
    iVar1 = *piVar13;
    lVar8 = *(long *)(lVar10 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar8;
    }
    if (*(long *)(lVar8 + (long)iVar1 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    iVar1 = (int)param_2[0x17];
    pvVar11 = (void *)param_2[0x16];
    if ((int)(*(uint *)((long)param_1 + 0xbc) & 0x7fffffff) < iVar1) {
      FUN_0308f388(param_1 + 0x16,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x16],pvVar11,(long)iVar1 << 4);
    *(int *)(param_1 + 0x17) = iVar1;
    iVar1 = (int)param_2[0x19];
    pvVar11 = (void *)param_2[0x18];
    if ((int)(*(uint *)((long)param_1 + 0xcc) & 0x7fffffff) < iVar1) {
      FUN_0308f434(param_1 + 0x18,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x18],pvVar11,(long)iVar1 * 0x14);
    *(int *)(param_1 + 0x19) = iVar1;
    iVar1 = *piVar13;
    lVar8 = *(long *)(lVar10 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar8;
    }
    if (*(long *)(lVar8 + (long)iVar1 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    iVar1 = (int)param_2[0x1b];
    pvVar11 = (void *)param_2[0x1a];
    if ((int)(*(uint *)((long)param_1 + 0xdc) & 0x7fffffff) < iVar1) {
      FUN_0308f388(param_1 + 0x1a,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x1a],pvVar11,(long)iVar1 << 4);
    *(int *)(param_1 + 0x1b) = iVar1;
  }
  if ((int)param_2[0x1d] != 0) {
    iVar1 = *piVar13;
    lVar8 = *(long *)(lVar10 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar8;
    }
    if (*(long *)(lVar8 + (long)iVar1 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    iVar1 = (int)param_2[0x1d];
    if ((int)(*(uint *)((long)param_1 + 0xec) & 0x7fffffff) < iVar1) {
      FUN_0309515c(plVar12,PTR_PTR_047d1a50,(long)iVar1);
    }
    if ((int)param_1[0x1d] != iVar1) {
      *(int *)(param_1 + 0x1d) = iVar1;
    }
    iVar1 = *piVar13;
    local_70[0] = 0;
    lVar8 = *(long *)(lVar10 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar8;
    }
    if (*(long *)(lVar8 + (long)iVar1 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    FUN_031c01e0(*plVar12,param_2[0x1c],(int)param_2[0x1d] * 0x14,local_70);
  }
  iVar1 = *piVar13;
  lVar8 = *(long *)(lVar10 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar8;
  }
  if (*(long *)(lVar8 + (long)iVar1 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (param_2 == param_1) {
    iVar1 = *piVar13;
    lVar8 = *(long *)(lVar10 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar8;
    }
    if (*(long *)(lVar8 + (long)iVar1 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
  }
  else {
    iVar1 = (int)param_2[0x1f];
    pvVar11 = (void *)param_2[0x1e];
    if ((int)(*(uint *)((long)param_1 + 0xfc) & 0x7fffffff) < iVar1) {
      FUN_02f0842c(param_1 + 0x1e,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x1e],pvVar11,(long)iVar1 << 4);
    *(int *)(param_1 + 0x1f) = iVar1;
    iVar1 = *piVar13;
    lVar8 = *(long *)(lVar10 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar8;
    }
    if (*(long *)(lVar8 + (long)iVar1 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    iVar1 = (int)param_2[0x21];
    pvVar11 = (void *)param_2[0x20];
    if ((int)(*(uint *)((long)param_1 + 0x10c) & 0x7fffffff) < iVar1) {
      FUN_030952fc(param_1 + 0x20,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x20],pvVar11,(long)iVar1);
    *(int *)(param_1 + 0x21) = iVar1;
    iVar1 = (int)param_2[0x23];
    pvVar11 = (void *)param_2[0x22];
    if ((int)(*(uint *)((long)param_1 + 0x11c) & 0x7fffffff) < iVar1) {
      FUN_030953a4(param_1 + 0x22,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x22],pvVar11,(long)iVar1 << 1);
    *(int *)(param_1 + 0x23) = iVar1;
    iVar1 = (int)param_2[0x25];
    pvVar11 = (void *)param_2[0x24];
    if ((int)(*(uint *)((long)param_1 + 300) & 0x7fffffff) < iVar1) {
      FUN_02f5f190(param_1 + 0x24,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x24],pvVar11,(long)iVar1 << 2);
    *(int *)(param_1 + 0x25) = iVar1;
    iVar1 = (int)param_2[0x27];
    pvVar11 = (void *)param_2[0x26];
    if ((int)(*(uint *)((long)param_1 + 0x13c) & 0x7fffffff) < iVar1) {
      FUN_02f5f190(param_1 + 0x26,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x26],pvVar11,(long)iVar1 << 2);
    *(int *)(param_1 + 0x27) = iVar1;
    iVar1 = (int)param_2[0x29];
    pvVar11 = (void *)param_2[0x28];
    if ((int)(*(uint *)((long)param_1 + 0x14c) & 0x7fffffff) < iVar1) {
      FUN_02f5f190(param_1 + 0x28,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x28],pvVar11,(long)iVar1 << 2);
    *(int *)(param_1 + 0x29) = iVar1;
    iVar1 = (int)param_2[0x2b];
    pvVar11 = (void *)param_2[0x2a];
    if ((int)(*(uint *)((long)param_1 + 0x15c) & 0x7fffffff) < iVar1) {
      FUN_02f5f190(param_1 + 0x2a,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x2a],pvVar11,(long)iVar1 << 2);
    *(int *)(param_1 + 0x2b) = iVar1;
    iVar1 = (int)param_2[0x2e];
    pvVar11 = (void *)param_2[0x2d];
    if ((int)(*(uint *)((long)param_1 + 0x174) & 0x7fffffff) < iVar1) {
      FUN_02f5f190(param_1 + 0x2d,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x2d],pvVar11,(long)iVar1 << 2);
    *(int *)(param_1 + 0x2e) = iVar1;
  }
  iVar1 = *piVar13;
  lVar8 = *(long *)(lVar10 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar8;
  }
  if (*(long *)(lVar8 + (long)iVar1 * 8 + 1000) != 0) {
    FUN_03231bdc();
    lVar8 = *(long *)(lVar10 + 0x1000b8);
  }
  *(int *)(param_1 + 0x2c) = (int)param_2[0x2c];
  *(undefined4 *)((long)param_1 + 0x164) = *(undefined4 *)((long)param_2 + 0x164);
  *(int *)(param_1 + 0x2f) = (int)param_2[0x2f];
  *(undefined4 *)((long)param_1 + 0x17c) = *(undefined4 *)((long)param_2 + 0x17c);
  *(int *)(param_1 + 0x30) = (int)param_2[0x30];
  iVar1 = *piVar13;
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar8;
  }
  if (*(long *)(lVar8 + (long)iVar1 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  FUN_03094834(param_1 + 0x31,param_2 + 0x31);
  puVar4 = PTR_DAT_047d1a08;
  local_68 = 0x20;
  pMVar6 = (MutexType *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(pMVar6,"hkCriticalSection");
  }
  nn::os::InitializeMutex(pMVar6,true,0);
  param_1[0x35] = (long)pMVar6;
  return;
}


