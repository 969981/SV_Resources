/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01284cd0; name: FUN_01284cd0
 */


void FUN_01284cd0(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  LightEventType *pLVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_28;
  
  plVar1 = (long *)(param_1 + 0xf8);
  lVar7 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar7) {
    lVar4 = nn::os::GetCurrentThread();
LAB_01284d08:
    if (*plVar1 == 0) goto code_r0x01284d10;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x100));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x100));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01284d18;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01284d18:
    bVar3 = false;
    goto LAB_01284d1c;
  }
  bVar3 = true;
LAB_01284d1c:
  if ((param_2 < *(ulong *)(param_1 + 0xf0)) &&
     ((*(ulong *)(param_1 + 0x88) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x80) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x48) + param_2 * 0x10 + 8);
    if (param_2 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 4)) {
      FUN_01285250(param_1 + 0x48,param_2);
    }
    if (!bVar3) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x100));
    }
    lVar7 = *(long *)(param_1 + 0x40);
    plVar1 = (long *)(lVar7 + 0x30);
    lVar6 = *plVar1;
    local_28 = uVar8;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar6) {
      lVar4 = nn::os::GetCurrentThread();
      while (*plVar1 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_01284da0;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x38));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x38));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01284da0;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01284da0:
      FUN_01284f38(lVar7,local_28);
      pLVar5 = (LightEventType *)(lVar7 + 0x38);
      *(undefined8 *)(lVar7 + 0x30) = 0;
      goto LAB_01284db8;
    }
    plVar1 = (long *)(lVar7 + 0x98);
    lVar6 = *plVar1;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar6) {
      lVar4 = nn::os::GetCurrentThread();
      while (*plVar1 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_01284ec0;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xa0));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xa0));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01284ec0;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01284ec0:
      FUN_012856d8(lVar7 + 0xb0,&local_28);
      pLVar5 = (LightEventType *)(lVar7 + 0xa0);
      *(undefined8 *)(lVar7 + 0x98) = 0;
LAB_01284db8:
      nn::os::SignalLightEvent(pLVar5);
      return;
    }
    FUN_012856d8(lVar7 + 0xb0,&local_28);
  }
  else if (!bVar3) {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x100));
    return;
  }
  return;
code_r0x01284d10:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01284d18;
  goto LAB_01284d08;
}


