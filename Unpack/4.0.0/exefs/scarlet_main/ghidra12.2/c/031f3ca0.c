/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f3ca0; name: FUN_031f3ca0
 */


void FUN_031f3ca0(long *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  *param_1 = (long)&PTR_LAB_046a7bb0;
  uVar5 = (ulong)*(uint *)(param_1 + 0xd);
  if (0 < (int)*(uint *)(param_1 + 0xd)) {
    do {
      FUN_031d5408(*(undefined8 *)(param_1[0xc] + (uVar5 - 1) * 8));
      bVar1 = 1 < (long)uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
  }
  lVar4 = param_1[0x14];
  if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar4,0);
    param_1[0x14] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x15) = 0;
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x12],(ulong)*(uint *)((long)param_1 + 0x9c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  param_1[0x12] = 0;
  if (-1 < (int)param_1[0x11]) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],param_1[0x10],0);
  }
  if (0 < (int)*(uint *)((long)param_1 + 0x7c)) {
    lVar6 = 0;
    lVar4 = (ulong)*(uint *)((long)param_1 + 0x7c) + 1;
    do {
      if (*(long *)(param_1[0xe] + lVar6) != -1) {
        *(undefined8 *)(param_1[0xe] + lVar6) = 0xffffffffffffffff;
      }
      lVar4 = lVar4 + -1;
      lVar6 = lVar6 + 0x10;
    } while (lVar4 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0xf);
  *(uint *)(param_1 + 0xf) = uVar2 & 0x80000000;
  if ((-1 < (int)uVar2) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xe],(long)*(int *)((long)param_1 + 0x7c) * 0x10 + 0x10);
  }
  param_1[0xe] = 0;
  param_1[0xf] = -0x100000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xc],(ulong)*(uint *)((long)param_1 + 0x6c) << 3);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[10],(ulong)*(uint *)((long)param_1 + 0x5c) << 3);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 6));
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) << 3);
  }
  param_1[4] = 0;
  puVar3 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = (long)(puVar3 + 0x10);
  return;
}


