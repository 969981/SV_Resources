/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03091a3c; name: FUN_03091a3c
 */


void FUN_03091a3c(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  MutexType *pMVar11;
  
  *param_1 = (long)(PTR_DAT_047e5008 + 0x10);
  plVar8 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar1 = plVar8 + 2;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  puVar7 = PTR_DAT_047e4f38;
  iVar3 = *(int *)PTR_DAT_047e4f38;
  lVar10 = tpidr_el0;
  lVar9 = *(long *)(lVar10 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  puVar6 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xe],(ulong)*(uint *)((long)param_1 + 0x7c) << 2);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x10],(ulong)*(uint *)((long)param_1 + 0x8c) << 2);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x12],(ulong)*(uint *)((long)param_1 + 0x9c) << 2);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x14],(ulong)*(uint *)((long)param_1 + 0xac) << 2);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  iVar3 = *(int *)puVar7;
  lVar9 = *(long *)(lVar10 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x16],(ulong)*(uint *)((long)param_1 + 0xbc) << 4);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x18],(ulong)*(uint *)((long)param_1 + 0xcc) * 0x14);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x1a],(ulong)*(uint *)((long)param_1 + 0xdc) << 4);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xec)) && (param_1[0x1c] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x1c],(ulong)*(uint *)((long)param_1 + 0xec) * 0x14);
  }
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0x80000000;
  iVar3 = *(int *)puVar7;
  lVar9 = *(long *)(lVar10 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x1e],(ulong)*(uint *)((long)param_1 + 0xfc) << 4);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x11c)) && (param_1[0x22] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x22],(ulong)*(uint *)((long)param_1 + 0x11c) << 1);
  }
  param_1[0x22] = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x24],(ulong)*(uint *)((long)param_1 + 300) << 2);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  iVar3 = *(int *)puVar7;
  lVar9 = *(long *)(lVar10 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x26],(ulong)*(uint *)((long)param_1 + 0x13c) << 2);
  }
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14c)) && (param_1[0x28] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x28],(ulong)*(uint *)((long)param_1 + 0x14c) << 2);
  }
  param_1[0x28] = 0;
  *(undefined4 *)((long)param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x15c)) && (param_1[0x2a] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x2a],(ulong)*(uint *)((long)param_1 + 0x15c) << 2);
  }
  param_1[0x2a] = 0;
  *(undefined4 *)((long)param_1 + 0x15c) = 0x80000000;
  iVar3 = *(int *)puVar7;
  lVar9 = *(long *)(lVar10 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  FUN_030924a0(param_1 + 0x31);
  pMVar11 = (MutexType *)param_1[0x35];
  if (pMVar11 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar11);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,pMVar11,0);
  }
  iVar3 = *(int *)puVar7;
  lVar9 = *(long *)(lVar10 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  lVar10 = param_1[0x33];
  if ((lVar10 != 0) && (*(int *)(lVar10 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar6[8],lVar10,0);
    param_1[0x33] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if ((int)param_1[0x32] != 0) {
    lVar10 = (long)(int)param_1[0x32] * 0x38;
    lVar9 = param_1[0x31];
    do {
      lVar2 = lVar9 + lVar10;
      *(undefined4 *)(lVar2 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar2 + -4)) && (*(long *)(lVar2 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))
                  (puVar6,*(long *)(lVar2 + -0x10),(ulong)*(uint *)(lVar2 + -4) << 2);
      }
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined4 *)(lVar2 + -4) = 0x80000000;
      *(undefined4 *)(lVar2 + -0x18) = 0;
      if ((-1 < (int)*(uint *)(lVar2 + -0x14)) && (*(long *)(lVar2 + -0x20) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))
                  (puVar6,*(long *)(lVar2 + -0x20),(ulong)*(uint *)(lVar2 + -0x14) << 2);
      }
      *(undefined8 *)(lVar2 + -0x20) = 0;
      *(undefined4 *)(lVar2 + -0x14) = 0x80000000;
      *(undefined4 *)(lVar2 + -0x28) = 0;
      if ((-1 < (int)*(uint *)(lVar2 + -0x24)) && (*(long *)(lVar2 + -0x30) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))
                  (puVar6,*(long *)(lVar2 + -0x30),(ulong)*(uint *)(lVar2 + -0x24) * 0x14);
      }
      lVar10 = lVar10 + -0x38;
      *(undefined8 *)(lVar2 + -0x30) = 0;
      *(undefined4 *)(lVar2 + -0x24) = 0x80000000;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x194)) && (lVar10 = param_1[0x31], lVar10 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,lVar10,(ulong)*(uint *)((long)param_1 + 0x194) * 0x38);
  }
  param_1[0x31] = 0;
  *(undefined4 *)((long)param_1 + 0x194) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x174)) && (param_1[0x2d] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x2d],(ulong)*(uint *)((long)param_1 + 0x174) << 2);
  }
  param_1[0x2d] = 0;
  *(undefined4 *)((long)param_1 + 0x174) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x15c)) && (param_1[0x2a] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x2a],(ulong)*(uint *)((long)param_1 + 0x15c) << 2);
  }
  param_1[0x2a] = 0;
  *(undefined4 *)((long)param_1 + 0x15c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14c)) && (param_1[0x28] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x28],(ulong)*(uint *)((long)param_1 + 0x14c) << 2);
  }
  param_1[0x28] = 0;
  *(undefined4 *)((long)param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x26],(ulong)*(uint *)((long)param_1 + 0x13c) << 2);
  }
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x24],(ulong)*(uint *)((long)param_1 + 300) << 2);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x11c)) && (param_1[0x22] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x22],(ulong)*(uint *)((long)param_1 + 0x11c) << 1);
  }
  param_1[0x22] = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x1e],(ulong)*(uint *)((long)param_1 + 0xfc) << 4);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xec)) && (param_1[0x1c] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x1c],(ulong)*(uint *)((long)param_1 + 0xec) * 0x14);
  }
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x1a],(ulong)*(uint *)((long)param_1 + 0xdc) << 4);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x18],(ulong)*(uint *)((long)param_1 + 0xcc) * 0x14);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x16],(ulong)*(uint *)((long)param_1 + 0xbc) << 4);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x14],(ulong)*(uint *)((long)param_1 + 0xac) << 2);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x12],(ulong)*(uint *)((long)param_1 + 0x9c) << 2);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x10],(ulong)*(uint *)((long)param_1 + 0x8c) << 2);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0xe],(ulong)*(uint *)((long)param_1 + 0x7c) << 2);
  }
  plVar8 = (long *)param_1[0xd];
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar1 = plVar8 + 2;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


