/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018c8f20; name: FUN_018c8f20
 */


void FUN_018c8f20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined8 *puStack_68;
  undefined8 local_60 [2];
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_28;
  
  if (((DAT_04837608 & 1) == 0) &&
     (local_50[0] = param_2, local_40 = param_3, local_28 = param_1,
     iVar5 = __cxa_guard_acquire(&DAT_04837608), param_1 = local_28, param_2 = local_50[0],
     param_3 = local_40, iVar5 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
    param_1 = local_28;
    param_2 = local_50[0];
    param_3 = local_40;
  }
  lVar4 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  local_28 = (undefined8 *)CONCAT44(param_4,param_5);
  uVar8 = *(undefined8 *)(DAT_048375f8 + 8);
  plVar7 = (long *)(DAT_048375f8 + 0x2d8);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = uVar8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0xaaaaaaaaaaaaaaa;
  param_1[5] = 0;
  puStack_78 = local_60;
  local_90 = lVar4;
  local_80 = local_50;
  local_70 = (long)&local_28 + 4;
  puStack_68 = &local_28;
  puStack_88 = param_1;
  local_60[0] = param_3;
  local_50[0] = param_2;
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_018c9044;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x2e0));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x2e0));
        while (*plVar7 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_018c9044;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_018c9044:
  if ((param_6 & 0xff) == 0) {
    plVar7 = *(long **)(lVar4 + 0x50);
    while (plVar3 = plVar7, plVar3 != (long *)(lVar4 + 0x58)) {
      FUN_018c9154(&local_90,(char)plVar3[4]);
      plVar7 = (long *)plVar3[1];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)plVar3[2];
        if (*(long **)plVar3[2] != plVar3) {
          lVar6 = plVar3[2];
          plVar7 = *(long **)(lVar6 + 0x10);
          if (**(long **)(lVar6 + 0x10) != lVar6) {
            lVar6 = *(long *)(lVar6 + 0x10);
            while( true ) {
              plVar7 = *(long **)(lVar6 + 0x10);
              if (*plVar7 == lVar6) break;
              lVar6 = *(long *)(lVar6 + 0x10);
            }
          }
        }
      }
      else {
        for (plVar3 = (long *)*plVar7; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          plVar7 = plVar3;
        }
      }
    }
  }
  else {
    FUN_018c9154(&local_90,param_6);
  }
  *(undefined8 *)(lVar4 + 0x2d8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0x2e0));
  return;
}


