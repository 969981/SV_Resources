/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031def88; name: FUN_031def88
 */


void FUN_031def88(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_LAB_046a5bb0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x18));
  lVar3 = param_1[0x16];
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    param_1[0x16] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
  puVar2 = PTR_PTR_047d1a50;
  if ((int)param_1[0x15] != 0) {
    lVar4 = param_1[0x14];
    lVar3 = (long)(int)param_1[0x15] * 0x18;
    do {
      lVar1 = lVar4 + lVar3;
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
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x14],(ulong)*(uint *)((long)param_1 + 0xac) * 0x18);
  }
  lVar3 = param_1[0x12];
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    param_1[0x12] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x10],(ulong)*(uint *)((long)param_1 + 0x8c) << 4);
  }
  lVar3 = param_1[0xd];
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    param_1[0xd] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xb],(ulong)*(uint *)((long)param_1 + 100) << 4);
  }
  lVar3 = param_1[9];
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    param_1[9] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 10) = 0;
  }
  puVar2 = PTR_PTR_047d1a50;
  if ((int)param_1[8] != 0) {
    lVar4 = param_1[7];
    lVar3 = (long)(int)param_1[8] * 0x18;
    do {
      lVar1 = lVar4 + lVar3;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar1 + -0x10),(ulong)*(uint *)(lVar1 + -4) << 4);
      }
      lVar3 = lVar3 + -0x18;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) * 0x18);
  }
  lVar3 = param_1[5];
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    param_1[5] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  puVar2 = PTR_PTR_047d1a50;
  if ((int)param_1[4] != 0) {
    lVar4 = param_1[3];
    lVar3 = (long)(int)param_1[4] * 0x18;
    do {
      lVar1 = lVar4 + lVar3;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar1 + -0x10),(ulong)*(uint *)(lVar1 + -4) << 4);
      }
      lVar3 = lVar3 + -0x18;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) * 0x18);
  }
  param_1[3] = 0;
  puVar2 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


