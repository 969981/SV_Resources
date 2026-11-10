/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02201a08; name: FUN_02201a08
 */


void FUN_02201a08(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  *param_1 = &PTR_FUN_045a9cc8;
  param_1[4] = &PTR_LAB_045a9d78;
  param_1[5] = &DAT_045a9dc8;
  puVar1 = PTR_DAT_047ddb00 + 0x10;
  param_1[0x14e] = puVar1;
  FUN_00c7a7ac(param_1 + 0x14e);
  *(undefined4 *)(param_1 + 0x153) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa9c)) && (param_1[0x152] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x152],(ulong)*(uint *)((long)param_1 + 0xa9c) << 7);
  }
  param_1[0x152] = 0;
  *(undefined4 *)((long)param_1 + 0xa9c) = 0x80000000;
  param_1[0xa6] = puVar1;
  FUN_00c7a7ac(param_1 + 0xa6);
  *(undefined4 *)(param_1 + 0xab) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x55c)) && (param_1[0xaa] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xaa],(ulong)*(uint *)((long)param_1 + 0x55c) << 7);
  }
  puVar12 = (undefined8 *)param_1[0x7b];
  param_1[0xaa] = 0;
  *(undefined4 *)((long)param_1 + 0x55c) = 0x80000000;
  if (puVar12 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)param_1[0x7c];
    puVar11 = puVar12;
    if (puVar9 != puVar12) {
      pcVar8 = (code *)puVar9[-0xf];
      puVar11 = puVar9 + -0x10;
      if (pcVar8 != (code *)0x0) {
        puVar9[-0xe] = 0;
        puVar9[-0xd] = 0;
        *puVar11 = 0;
        puVar9[-0xf] = 0;
        (*pcVar8)(puVar9 + -0xc);
      }
      while (puVar9 = puVar11, puVar9 != puVar12) {
        pcVar8 = (code *)puVar9[-0xf];
        puVar11 = puVar9 + -0x10;
        if (pcVar8 != (code *)0x0) {
          puVar9[-0xe] = 0;
          puVar9[-0xd] = 0;
          puVar9[-0x10] = 0;
          puVar9[-0xf] = 0;
          (*pcVar8)(puVar9 + -0xc);
        }
      }
      puVar11 = (undefined8 *)param_1[0x7b];
    }
    lVar10 = param_1[0x7d];
    param_1[0x7c] = puVar12;
    plVar5 = (long *)param_1[0x7e];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar11,lVar10 - (long)puVar11,0x10);
    }
    else {
      FUN_00c48fe8(plVar5,puVar11,lVar10 - (long)puVar11,0x10);
    }
  }
  pcVar8 = (code *)param_1[0x6b];
  if (pcVar8 != (code *)0x0) {
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    (*pcVar8)(param_1 + 0x6e);
  }
  plVar5 = (long *)param_1[0x61];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar2 = plVar5 + 2;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  plVar5 = (long *)param_1[0x60];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar2 = plVar5 + 2;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  pcVar8 = (code *)param_1[0x3f];
  if (pcVar8 != (code *)0x0) {
    param_1[0x41] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    (*pcVar8)(param_1 + 0x42);
  }
  pcVar8 = (code *)param_1[0x2f];
  if (pcVar8 != (code *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    (*pcVar8)(param_1 + 0x32);
  }
  plVar5 = (long *)param_1[0x18];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar2 = plVar5 + 2;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  plVar5 = (long *)param_1[0x17];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar2 = plVar5 + 2;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  plVar5 = (long *)param_1[0x16];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar2 = plVar5 + 2;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  FUN_010830ac(param_1);
  return;
}


