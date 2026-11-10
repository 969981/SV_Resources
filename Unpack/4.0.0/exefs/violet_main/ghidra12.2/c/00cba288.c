/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cba288; name: FUN_00cba288
 */


void FUN_00cba288(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  *param_1 = &DAT_045ea840;
  plVar8 = param_1 + 0x27;
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00cba2c4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00cba2c4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00cba2c4:
  plVar8 = (long *)param_1[1];
  plVar2 = (long *)param_1[2];
  if (plVar8 != plVar2) {
    *(undefined8 *)(*plVar8 + 0x10) = 0;
    while (plVar8 = plVar8 + 1, plVar8 != plVar2) {
      *(undefined8 *)(*plVar8 + 0x10) = 0;
    }
    plVar8 = (long *)param_1[1];
  }
  param_1[2] = plVar8;
  param_1[9] = param_1[8];
  param_1[0x1e] = param_1[0x1d];
  *(undefined2 *)(param_1 + 0x26) = 0;
  param_1[0x10] = param_1[0xf];
  param_1[0x17] = param_1[0x16];
  param_1[0x27] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x28));
  lVar5 = param_1[0x1d];
  if (lVar5 != 0) {
    lVar1 = param_1[0x1f];
    plVar8 = (long *)param_1[0x20];
    param_1[0x1e] = lVar5;
    uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,lVar1 - lVar5,1);
    }
    else {
      FUN_00c48fe8(plVar8,lVar5,lVar1 - lVar5,1);
    }
  }
  lVar5 = param_1[0x16];
  if (lVar5 != 0) {
    lVar1 = param_1[0x18];
    plVar8 = (long *)param_1[0x19];
    param_1[0x17] = lVar5;
    uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,lVar1 - lVar5,1);
    }
    else {
      FUN_00c48fe8(plVar8,lVar5,lVar1 - lVar5,1);
    }
  }
  lVar5 = param_1[0xf];
  if (lVar5 != 0) {
    lVar1 = param_1[0x11];
    plVar8 = (long *)param_1[0x12];
    param_1[0x10] = lVar5;
    uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,lVar1 - lVar5,1);
    }
    else {
      FUN_00c48fe8(plVar8,lVar5,lVar1 - lVar5,1);
    }
  }
  lVar5 = param_1[8];
  if (lVar5 != 0) {
    lVar1 = param_1[10];
    plVar8 = (long *)param_1[0xb];
    param_1[9] = lVar5;
    uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,lVar1 - lVar5,1);
    }
    else {
      FUN_00c48fe8(plVar8,lVar5,lVar1 - lVar5,1);
    }
  }
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    return;
  }
  lVar1 = param_1[3];
  plVar8 = (long *)param_1[4];
  param_1[2] = lVar5;
  uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00cba470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,lVar1 - lVar5,1);
    return;
  }
  FUN_00c48fe8(plVar8,lVar5,lVar1 - lVar5,1);
  return;
}


