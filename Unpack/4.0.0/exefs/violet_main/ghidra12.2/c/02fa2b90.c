/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fa2b90; name: FUN_02fa2b90
 */


void FUN_02fa2b90(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_38;
  
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  *param_1 = &PTR_FUN_04611348;
  nn::os::InitializeMutex((MutexType *)(param_1 + 4),true,0);
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000018;
  param_1[10] = param_1 + 0xe;
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 1;
  param_1[0x28] = 0;
  param_1[0x29] = 0x8000000000000000;
  param_1[0x33] = param_1 + 0x35;
  param_1[8] = 0;
  param_1[0x2c] = 0x8000000000000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x8000000000000000;
  param_1[0x2f] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)((long)param_1 + 0x1a4) = 0x80000020;
  param_1[0x95] = param_1 + 0x97;
  *(undefined4 *)((long)param_1 + 0x4b4) = 0x80000020;
  param_1[0xa7] = param_1 + 0xa9;
  puVar3 = PTR_DAT_047e4938;
  *(undefined4 *)((long)param_1 + 0x544) = 0x80000020;
  param_1[0x30] = puVar3 + 0x10;
  *(undefined2 *)(param_1 + 0xcc) = 0xffff;
  param_1[0xcb] = 0xffffffffffffffff;
  param_1[0xca] = 0xffffffffffffffff;
  param_1[0xc9] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  memset(param_1 + 0xcd,0,0x48);
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  puVar3 = PTR_DAT_047d1a08;
  local_38 = 0x40;
  plVar4 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar4,"hkReferencedTask");
  }
  plVar4[2] = 1;
  plVar4[3] = 0;
  *plVar4 = (long)&PTR_LAB_046113b0;
  plVar4[1] = 0xffffffff;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[4] = (long)&PTR_LAB_046113f8;
  plVar4[5] = 0;
  plVar5 = (long *)param_1[0xd0];
  if (((plVar5 != plVar4) && (param_1[0xd0] = plVar4, plVar5 != (long *)0x0)) && (plVar5[1] != 0)) {
    plVar4 = plVar5 + 2;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  local_38 = 0x40;
  plVar4 = (long *)(**(code **)puVar3)(0,&local_38,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar4,"hkReferencedTask");
  }
  plVar4[2] = 1;
  plVar4[3] = 0;
  *plVar4 = (long)&PTR_LAB_04611470;
  plVar4[1] = 0xffffffff;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[4] = (long)&PTR_LAB_046114b8;
  plVar4[5] = 0;
  plVar5 = (long *)param_1[0xd1];
  if (((plVar5 != plVar4) && (param_1[0xd1] = plVar4, plVar5 != (long *)0x0)) && (plVar5[1] != 0)) {
    plVar4 = plVar5 + 2;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  local_38 = 0x40;
  plVar4 = (long *)(**(code **)puVar3)(0,&local_38,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar4,"hkReferencedTask");
  }
  plVar4[2] = 1;
  plVar4[3] = 0;
  *plVar4 = (long)&PTR_LAB_04611518;
  plVar4[1] = 0xffffffff;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[4] = (long)&PTR_LAB_04611560;
  plVar4[5] = 0;
  plVar5 = (long *)param_1[0xd3];
  if (((plVar5 != plVar4) && (param_1[0xd3] = plVar4, plVar5 != (long *)0x0)) && (plVar5[1] != 0)) {
    plVar4 = plVar5 + 2;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  local_38 = 0x920;
  plVar4 = (long *)(**(code **)puVar3)(0,&local_38,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar4,"hkReferencedTask");
  }
  memset(plVar4,0,0x920);
  *(undefined4 *)(plVar4 + 0x9b) = 0;
  *plVar4 = (long)&PTR_LAB_046115c0;
  plVar4[1] = 0xffffffff;
  plVar4[2] = 1;
  plVar4[4] = (long)&PTR_LAB_04611600;
  plVar4[0x9a] = (long)(plVar4 + 0x9c);
  plVar4[6] = 0;
  plVar4[7] = -0x8000000000000000;
  plVar4[0x10] = (long)(plVar4 + 0x12);
  *(undefined4 *)(plVar4 + 0x11) = 0;
  *(undefined4 *)((long)plVar4 + 0x8c) = 0x80000011;
  *(undefined4 *)((long)plVar4 + 0x4dc) = 0x80000011;
  plVar5 = (long *)param_1[0xd2];
  if (((plVar5 != plVar4) && (param_1[0xd2] = plVar4, plVar5 != (long *)0x0)) && (plVar5[1] != 0)) {
    plVar4 = plVar5 + 2;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  return;
}


