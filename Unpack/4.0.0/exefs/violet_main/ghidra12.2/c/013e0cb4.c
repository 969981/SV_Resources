/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013e0cb4; name: FUN_013e0cb4
 */


void FUN_013e0cb4(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  lVar6 = *(long *)(param_1 + 200);
  if (lVar6 != 0) {
    plVar4 = (long *)(lVar6 + 0x110);
    lVar5 = *plVar4;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar5) {
      lVar3 = nn::os::GetCurrentThread();
      bVar7 = false;
LAB_013e0d88:
      if (*plVar4 == 0) goto code_r0x013e0d90;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x118));
      bVar7 = false;
      do {
        if (*plVar4 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x118));
            while (*plVar4 == 0) {
              cVar1 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar7) {
                *plVar4 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              bVar7 = false;
              if (cVar1 == '\0') goto LAB_013e0ce8;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_013e0ce8;
    }
    bVar7 = true;
LAB_013e0ce8:
    plVar4 = (long *)FUN_013e0df0(*(undefined8 *)(lVar6 + 0x128),*(undefined8 *)(lVar6 + 0x130));
    if ((*(long **)(lVar6 + 0x130) == plVar4) || (*plVar4 == 0)) {
      plVar4 = (long *)FUN_013e0df0(*(undefined8 *)(lVar6 + 0x160),*(undefined8 *)(lVar6 + 0x168));
      if (*(long **)(lVar6 + 0x168) == plVar4) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        if (*plVar4 != 0) {
          lVar3 = *plVar4 + -0x20;
        }
      }
    }
    else {
      lVar3 = *plVar4 + -0x20;
    }
    if (!bVar7) {
      *(undefined8 *)(lVar6 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x118));
    }
    if (lVar3 != 0) {
      FUN_013e0f3c(lVar3);
      return;
    }
  }
  return;
code_r0x013e0d90:
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar2) {
    *plVar4 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_013e0ce8;
  goto LAB_013e0d88;
}


