/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349a644; name: FUN_0349a644
 */


void FUN_0349a644(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  
  *param_1 = &PTR_FUN_047c39c8;
  puVar6 = PTR_DAT_047e2fd0;
  puVar1 = (undefined8 *)param_1[0x16];
  while (puVar1 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)puVar1[1];
    (**(code **)*puVar1)(puVar1);
    (**(code **)(puVar6 + 0x30))(5,puVar1);
    puVar1 = puVar7;
  }
  puVar1 = param_1 + 0x2a;
  (**(code **)(param_1[0x2a] + 0x28))(puVar1);
  puVar7 = param_1 + 0x37;
  (**(code **)(param_1[0x37] + 0x28))(puVar7);
  puVar2 = param_1 + 0x44;
  (**(code **)(param_1[0x44] + 0x28))(puVar2);
  puVar3 = param_1 + 0x51;
  (**(code **)(param_1[0x51] + 0x28))(puVar3);
  FUN_0349aa74(param_1);
  if (param_1[0xd] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
  }
  puVar4 = PTR_PTR_047e6fa8;
  puVar6 = PTR_DAT_047e2fd0;
  lVar12 = param_1[0x17];
  lVar10 = lVar12;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      uVar13 = *(undefined8 *)(lVar10 + 8);
      if ((*(ushort *)(lVar10 + 2) & 0xff9c) == 0) {
        (**(code **)(puVar6 + 0x30))(0,uVar13);
      }
      else {
        FUN_034e9a70(uVar13,puVar4);
        (**(code **)(*(long *)puVar4 + 0x18))(puVar4,uVar13);
      }
      lVar12 = param_1[0x17];
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != lVar12 + (ulong)*(uint *)(param_1 + 0x18) * 0x10);
  }
  if (lVar12 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar12);
    param_1[0x17] = 0;
    *(undefined4 *)((long)param_1 + 0xc4) = 0;
  }
  puVar6 = PTR_DAT_047e2fd0;
  lVar12 = param_1[0x12];
  lVar10 = lVar12;
  if (*(int *)(param_1 + 0x13) != 0) {
    do {
      (**(code **)(puVar6 + 0x30))(0,*(undefined8 *)(lVar10 + 8));
      lVar12 = param_1[0x12];
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != lVar12 + (ulong)*(uint *)(param_1 + 0x13) * 0x10);
  }
  if (lVar12 != 0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar12);
    param_1[0x12] = 0;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
  }
  puVar6 = PTR_DAT_047e2fd0;
  lVar10 = param_1[0x1d];
  uVar11 = *(uint *)(param_1 + 0x1e);
  if (uVar11 != 0) {
    lVar12 = lVar10;
    do {
      if (*(long *)(lVar12 + 8) != 0) {
        *(undefined4 *)(lVar12 + 0x10) = 0;
        (**(code **)(puVar6 + 0x30))(0,*(long *)(lVar12 + 8));
        *(undefined8 *)(lVar12 + 8) = 0;
        *(undefined4 *)(lVar12 + 0x14) = 0;
        lVar10 = param_1[0x1d];
        uVar11 = *(uint *)(param_1 + 0x1e);
      }
      lVar12 = lVar12 + 0x18;
    } while (lVar12 != lVar10 + (ulong)uVar11 * 0x18);
  }
  if (lVar10 != 0) {
    *(undefined4 *)(param_1 + 0x1e) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0x1d] = 0;
    *(undefined4 *)((long)param_1 + 0xf4) = 0;
  }
  if ((undefined8 *)param_1[10] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (param_1 + 8 != (undefined8 *)param_1[10]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
    }
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  plVar9 = (long *)param_1[0x7e];
  param_1[0x72] = PTR_DAT_047e7240 + 0x10;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9,PTR_PTR_047e71e0);
    param_1[0x7e] = 0;
  }
  FUN_03480ed4(param_1 + 0x72);
  puVar6 = PTR_DAT_047e7170;
  param_1[0x72] = PTR_DAT_047e7170 + 0x10;
  FUN_03480ed4(param_1 + 0x72);
  if ((long *)param_1[0x71] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x71] + 0x18))();
    param_1[0x71] = 0;
  }
  puVar8 = PTR_DAT_047e7238;
  plVar9 = (long *)param_1[0x5d];
  puVar4 = PTR_DAT_047e7238 + 0x10;
  param_1[0x51] = puVar4;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9,PTR_PTR_047e71e0);
    param_1[0x5d] = 0;
  }
  FUN_03480ed4(puVar3);
  puVar5 = puVar6 + 0x10;
  param_1[0x51] = puVar5;
  FUN_03480ed4(puVar3);
  plVar9 = (long *)param_1[0x50];
  param_1[0x44] = puVar4;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9,PTR_PTR_047e71e0);
    param_1[0x50] = 0;
  }
  FUN_03480ed4(puVar2);
  param_1[0x44] = puVar5;
  FUN_03480ed4(puVar2);
  plVar9 = (long *)param_1[0x43];
  param_1[0x37] = puVar8 + 0x10;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9,PTR_PTR_047e71e0);
    param_1[0x43] = 0;
  }
  FUN_03480ed4(puVar7);
  puVar6 = puVar6 + 0x10;
  param_1[0x37] = puVar6;
  FUN_03480ed4(puVar7);
  plVar9 = (long *)param_1[0x36];
  param_1[0x2a] = puVar8 + 0x10;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9,PTR_PTR_047e71e0);
    param_1[0x36] = 0;
  }
  FUN_03480ed4(puVar1);
  param_1[0x2a] = puVar6;
  FUN_03480ed4(puVar1);
  FUN_034a0dc8(param_1 + 0x25);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1f));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x19));
  return;
}


