/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01638108; name: FUN_01638108
 */


void FUN_01638108(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  char local_38;
  
  plVar1 = (long *)(param_1 + 0x50);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x58) == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x58) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01638140;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x60));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x58) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x60));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x58) == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0x58) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01638140;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x58) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01638140:
  if (((*PTR_DAT_047dab40 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dab40);
  }
  lVar7 = *(long *)PTR_DAT_047dab48;
  *(long *)PTR_DAT_047dab50 = lVar7;
  FUN_00f8133c(&local_40,lVar7);
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  local_48 = *(undefined8 *)PTR_DAT_047d4ca0;
  *(undefined8 *)PTR_DAT_047d4ca8 = local_48;
  local_58 = param_1;
  lStack_50 = lVar7;
  FUN_01638350(&local_58,lVar7 + 0xa8);
  if (local_38 != '\0') {
    *local_40 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_40 + 1));
  }
  do {
    lVar7 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x58) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar2 != lVar7 || lVar3 != lVar4) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_01638250;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x54) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_01638250:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x58);
      if (lVar7 != lVar2 || lVar4 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x01638310;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x54) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x01638310:
    if (!bVar8) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x58);
        if (lVar2 != lVar7 || lVar3 != lVar4) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x01638310;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x54) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar7 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x01638310;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x60));
  return;
}


