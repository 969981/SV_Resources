/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01313208; name: FUN_01313208
 */


void FUN_01313208(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,uint param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  char cVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *plStack_68;
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar12 = *plVar1;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar12) {
    bVar10 = true;
LAB_01313278:
    uVar2 = *param_4;
    uVar6 = param_4[1];
    uVar3 = param_4[2];
    plVar1 = (long *)param_4[3];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    uVar4 = *param_5;
    uVar7 = param_5[1];
    uVar5 = param_5[2];
    plVar8 = (long *)param_5[3];
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x168) + param_2 * 8);
    local_80 = uVar2;
    uStack_78 = uVar6;
    local_70 = uVar3;
    plStack_68 = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    local_a0 = uVar4;
    uStack_98 = uVar7;
    local_90 = uVar5;
    plStack_88 = plVar8;
    if (plVar8 == (long *)0x0) {
      FUN_012d8f14(uVar13,param_3,&local_80,2,&local_a0,0,param_6 & 1);
    }
    else {
      (**(code **)(*plVar8 + 0x18))(plVar8);
      FUN_012d8f14(uVar13,param_3,&local_80,2,&local_a0,0,param_6 & 1);
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if (bVar10) {
      return;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
    return;
  }
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar11;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB_01313274;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
        while (*plVar1 == 0) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar11;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_01313274;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar11;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_01313274:
  bVar10 = false;
  goto LAB_01313278;
}


