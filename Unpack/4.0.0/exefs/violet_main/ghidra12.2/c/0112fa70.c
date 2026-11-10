/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0112fa70; name: FUN_0112fa70
 */


undefined8 FUN_0112fa70(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  bool bVar7;
  
  plVar1 = (long *)(param_1 + 0x300);
  lVar6 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar6) {
    lVar3 = nn::os::GetCurrentThread();
LAB_0112faa8:
    if (*plVar1 == 0) goto code_r0x0112fab0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_0112fab8;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_0112fab8:
    bVar7 = false;
    goto LAB_0112fabc;
  }
  bVar7 = true;
LAB_0112fabc:
  if ((*(byte *)(param_1 + 0x629) & 1) == 0) {
    plVar1 = (long *)(param_1 + 0x318);
    lVar6 = *plVar1;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar6) {
      lVar3 = nn::os::GetCurrentThread();
LAB_0112fae4:
      if (*plVar1 == 0) goto code_r0x0112faec;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar3;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_0112faf4;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0112faf4:
      bVar5 = false;
      goto LAB_0112faf8;
    }
    bVar5 = true;
LAB_0112faf8:
    if ((param_2 < *(ulong *)(param_1 + 0x290)) &&
       ((*(ulong *)(param_1 + 0x228) <= param_2 ||
        ((*(ulong *)(*(long *)(param_1 + 0x220) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
          (param_2 & 0x3f) & 1) == 0)))) {
      lVar3 = *(long *)(param_1 + 0x1e8) + param_2 * 0x20;
      uVar4 = FUN_01098dd0(*(undefined4 *)(lVar3 + 0x14),
                           *(undefined8 *)(*(long *)(param_1 + 0x28) + *(long *)(lVar3 + 0x18) * 8),
                           *(undefined8 *)(lVar3 + 8),*(undefined1 *)(lVar3 + 0x10));
    }
    else {
      uVar4 = 0xffffffffffffffff;
    }
    if (!bVar5) {
      *(undefined8 *)(param_1 + 0x318) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 800));
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
  }
  if (!bVar7) {
    *(undefined8 *)(param_1 + 0x300) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x308));
  }
  return uVar4;
code_r0x0112fab0:
  cVar2 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar7) {
    *plVar1 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_0112fab8;
  goto LAB_0112faa8;
code_r0x0112faec:
  cVar2 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar5) {
    *plVar1 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_0112faf4;
  goto LAB_0112fae4;
}


