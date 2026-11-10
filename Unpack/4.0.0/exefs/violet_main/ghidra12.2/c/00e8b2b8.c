/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e8b2b8; name: FUN_00e8b2b8
 */


void FUN_00e8b2b8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined4 local_58;
  long *local_48;
  
  plVar7 = (long *)(param_2 + 0x300);
  lVar8 = *plVar7;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar8) {
    lVar4 = nn::os::GetCurrentThread();
LAB_00e8b2fc:
    if (*plVar7 == 0) goto code_r0x00e8b304;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x308));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x308));
          while (*plVar7 == 0) {
            cVar1 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar9) {
              *plVar7 = lVar4;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00e8b30c;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *plVar7 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00e8b30c:
    bVar9 = false;
    goto LAB_00e8b310;
  }
  bVar9 = true;
LAB_00e8b310:
  if ((*(byte *)(param_2 + 0x629) & 1) != 0) {
    local_60 = (long *)0x0;
    pcVar6 = (char *)param_3[1];
    if (*pcVar6 == '\0') {
      plVar7 = (long *)FUN_00d44228();
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar5 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar5;
      FUN_00cf9884(&local_48,uVar5,pcVar6);
      plVar7 = local_48;
      plVar2 = local_60;
      local_60 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
    }
    local_58 = (undefined4)param_1;
    local_60 = plVar7;
    FUN_00e8de18(param_2 + 0x668,&local_68);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    goto LAB_00e8b414;
  }
  plVar7 = (long *)(param_2 + 0x318);
  lVar8 = *plVar7;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar8) {
    lVar4 = nn::os::GetCurrentThread();
LAB_00e8b338:
    if (*plVar7 == 0) goto code_r0x00e8b340;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 800));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 800));
          while (*plVar7 == 0) {
            cVar1 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar10) {
              *plVar7 = lVar4;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00e8b348;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar10) {
        *plVar7 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00e8b348:
    bVar10 = false;
    goto LAB_00e8b34c;
  }
  bVar10 = true;
LAB_00e8b34c:
  if ((*(byte *)(param_2 + 0x62a) & 1) == 0) {
    pcVar6 = (char *)param_3[1];
    local_48 = (long *)0x0;
    if (*pcVar6 == '\0') {
      plVar7 = (long *)FUN_00d44228();
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar5 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar5;
      FUN_00cf9884(&local_68,uVar5,pcVar6);
      plVar7 = local_48;
      local_48 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      plVar7 = local_68;
    }
    local_48 = plVar7;
    lVar4 = FUN_00e8b690(param_2 + 0x110,&local_48);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    if (lVar4 == 0) goto LAB_00e8b3c4;
    plVar7 = (long *)param_3[3];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar4 = *plVar7;
      goto LAB_00e8b4e4;
    }
  }
  else {
LAB_00e8b3c4:
    local_88 = *param_3;
    uStack_80 = param_3[1];
    local_78 = param_3[2];
    local_70 = (long *)param_3[3];
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
    FUN_00e8b7dc(param_1,param_2,&local_88);
    if (local_70 != (long *)0x0) {
      lVar4 = *local_70;
      plVar7 = local_70;
LAB_00e8b4e4:
      (**(code **)(lVar4 + 0x20))(plVar7);
    }
  }
  if (!bVar10) {
    *(undefined8 *)(param_2 + 0x318) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 800));
  }
LAB_00e8b414:
  if (!bVar9) {
    *(undefined8 *)(param_2 + 0x300) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x308));
  }
  return;
code_r0x00e8b304:
  cVar1 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar9) {
    *plVar7 = lVar4;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00e8b30c;
  goto LAB_00e8b2fc;
code_r0x00e8b340:
  cVar1 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar10) {
    *plVar7 = lVar4;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00e8b348;
  goto LAB_00e8b338;
}


