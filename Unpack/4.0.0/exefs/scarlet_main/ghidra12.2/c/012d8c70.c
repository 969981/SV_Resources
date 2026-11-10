/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012d8c70; name: FUN_012d8c70
 */


void FUN_012d8c70(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
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
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *plStack_68;
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar13 = *plVar1;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar13) {
    bVar10 = true;
LAB_012d8cdc:
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
    if (plVar8 == (long *)0x0) {
      plVar15 = (long *)0x0;
      local_b0 = uVar5;
      uStack_b8 = uVar7;
      local_c0 = uVar4;
    }
    else {
      (**(code **)(*plVar8 + 0x18))(plVar8);
      local_c0 = *param_5;
      uStack_b8 = param_5[1];
      local_b0 = param_5[2];
      plVar15 = (long *)param_5[3];
    }
    plStack_a8 = plVar15;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    uVar12 = FUN_00f839cc(param_1,&local_c0);
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x168) + param_2 * 8);
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
      FUN_012d8f14(uVar14,param_3,&local_80,0,&local_a0,uVar12,param_6 & 1);
    }
    else {
      (**(code **)(*plVar8 + 0x18))(plVar8);
      FUN_012d8f14(uVar14,param_3,&local_80,0,&local_a0,uVar12,param_6 & 1);
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
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
    if (cVar9 == '\0') goto LAB_012d8cd8;
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
          if (cVar9 == '\0') goto LAB_012d8cd8;
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
LAB_012d8cd8:
  bVar10 = false;
  goto LAB_012d8cdc;
}


