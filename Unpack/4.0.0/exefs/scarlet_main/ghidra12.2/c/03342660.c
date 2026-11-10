/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03342660; name: FUN_03342660
 */


void FUN_03342660(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = (long)&PTR_LAB_047aca90;
  *(undefined4 *)(param_1 + 0x36) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1b4)) && (param_1[0x35] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x35],(ulong)*(uint *)((long)param_1 + 0x1b4) << 4);
  }
  param_1[0x35] = 0;
  *(undefined4 *)((long)param_1 + 0x1b4) = 0x80000000;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x31));
  lVar3 = param_1[0x2f];
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    param_1[0x2f] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x174)) && (param_1[0x2d] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x2d],(ulong)*(uint *)((long)param_1 + 0x174) << 4);
  }
  lVar3 = param_1[0x2b];
  param_1[0x2d] = 0;
  *(undefined4 *)((long)param_1 + 0x174) = 0x80000000;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    param_1[0x2b] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  puVar2 = PTR_PTR_047d1a50;
  if ((int)param_1[0x2a] != 0) {
    lVar6 = param_1[0x29];
    lVar3 = (long)(int)param_1[0x2a] * 0x18;
    do {
      lVar1 = lVar6 + lVar3;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar1 + -0x10),(ulong)*(uint *)(lVar1 + -4) << 3);
      }
      lVar3 = lVar3 + -0x18;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x154)) && (param_1[0x29] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x29],(ulong)*(uint *)((long)param_1 + 0x154) * 0x18);
  }
  lVar3 = param_1[0x27];
  param_1[0x29] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0x80000000;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    param_1[0x27] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  puVar2 = PTR_DAT_047d1a08;
  if ((int)param_1[0x26] != 0) {
    lVar6 = param_1[0x25];
    lVar3 = (long)(int)param_1[0x26] * 0x18;
    do {
      uVar4 = *(ulong *)(lVar6 + -0x18 + lVar3);
      if ((uVar4 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,uVar4 - 1,0);
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x134)) && (param_1[0x25] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x25],(ulong)*(uint *)((long)param_1 + 0x134) * 0x18);
  }
  lVar3 = param_1[0x23];
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x134) = 0x80000000;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    param_1[0x23] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x114)) && (param_1[0x21] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x21],(ulong)*(uint *)((long)param_1 + 0x114) << 4);
  }
  lVar3 = param_1[0x1f];
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0x80000000;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    param_1[0x1f] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  puVar2 = PTR_DAT_047d1a08;
  if ((int)param_1[0x1e] != 0) {
    lVar6 = param_1[0x1d];
    lVar3 = (long)(int)param_1[0x1e] << 4;
    do {
      uVar4 = *(ulong *)(lVar6 + -0x10 + lVar3);
      if ((uVar4 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,uVar4 - 1,0);
      }
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xf4)) && (param_1[0x1d] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1d],(ulong)*(uint *)((long)param_1 + 0xf4) << 4);
  }
  lVar3 = param_1[0x1b];
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x80000000;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    param_1[0x1b] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x19],(ulong)*(uint *)((long)param_1 + 0xd4) << 4);
  }
  lVar3 = param_1[0x17];
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    param_1[0x17] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xb4)) && (param_1[0x15] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x15],(ulong)*(uint *)((long)param_1 + 0xb4) << 4);
  }
  param_1[0x15] = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x13],(ulong)*(uint *)((long)param_1 + 0xa4) << 3);
  }
  plVar5 = (long *)param_1[0x12];
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  if (plVar5 != (long *)0x0) {
    nn::os::FinalizeMutex((MutexType *)(plVar5 + 10));
    puVar2 = PTR_DAT_047d1a08;
    if ((int)plVar5[9] != 0) {
      lVar6 = plVar5[8];
      lVar3 = (long)(int)plVar5[9] << 3;
      do {
        uVar4 = *(ulong *)(lVar6 + -8 + lVar3);
        if ((uVar4 & 1) != 0) {
          (**(code **)(puVar2 + 8))(0,uVar4 - 1,0);
        }
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    *(undefined4 *)(plVar5 + 9) = 0;
    if ((-1 < (int)*(uint *)((long)plVar5 + 0x4c)) && (plVar5[8] != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,plVar5[8],(ulong)*(uint *)((long)plVar5 + 0x4c) << 3);
    }
    lVar3 = plVar5[6];
    plVar5[8] = 0;
    *(undefined4 *)((long)plVar5 + 0x4c) = 0x80000000;
    if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
      plVar5[6] = (long)&DAT_03d7702c;
      *(undefined4 *)(plVar5 + 7) = 0;
    }
    *(undefined4 *)(plVar5 + 5) = 0;
    if ((-1 < (int)*(uint *)((long)plVar5 + 0x2c)) && (plVar5[4] != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,plVar5[4],(ulong)*(uint *)((long)plVar5 + 0x2c) << 3);
    }
    lVar3 = plVar5[2];
    plVar5[4] = 0;
    *(undefined4 *)((long)plVar5 + 0x2c) = 0x80000000;
    if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
      plVar5[2] = (long)&DAT_03d7702c;
      *(undefined4 *)(plVar5 + 3) = 0;
    }
    puVar2 = PTR_DAT_047d1a08;
    if ((int)plVar5[1] != 0) {
      lVar6 = *plVar5;
      lVar3 = (long)(int)plVar5[1] << 4;
      do {
        uVar4 = *(ulong *)(lVar6 + -0x10 + lVar3);
        if ((uVar4 & 1) != 0) {
          (**(code **)(puVar2 + 8))(0,uVar4 - 1,0);
        }
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
    }
    *(undefined4 *)(plVar5 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)plVar5 + 0xc)) && (*plVar5 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,*plVar5,(ulong)*(uint *)((long)plVar5 + 0xc) << 4);
    }
    *plVar5 = 0;
    *(undefined4 *)((long)plVar5 + 0xc) = 0x80000000;
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,plVar5,0);
  }
  nn::os::FinalizeSemaphore((SemaphoreType *)(param_1 + 0xb));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 7));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 3));
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


