/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010113c4; name: FUN_010113c4
 */


bool FUN_010113c4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 long param_5)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *param_3;
  plVar5 = *(long **)(param_5 + 0x18);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(lVar7 + 0x110);
    lVar6 = *plVar5;
    lVar2 = nn::os::GetCurrentThread();
    if (lVar2 != lVar6) {
      lVar2 = nn::os::GetCurrentThread();
LAB_01011400:
      if (*plVar5 == 0) goto code_r0x01011408;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
      do {
        if (*plVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
            while (*plVar5 == 0) {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *plVar5 = lVar2;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_01011410;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_01011410:
      bVar4 = false;
      goto LAB_01011414;
    }
    bVar4 = true;
LAB_01011414:
    plVar5 = (long *)FUN_010115f0(*(undefined8 *)(lVar7 + 0x128),*(undefined8 *)(lVar7 + 0x130));
    if ((*(long **)(lVar7 + 0x130) == plVar5) || (*plVar5 == 0)) {
      plVar5 = (long *)FUN_010115f0(*(undefined8 *)(lVar7 + 0x160),*(undefined8 *)(lVar7 + 0x168));
      if (*(long **)(lVar7 + 0x168) == plVar5) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        if (*plVar5 != 0) {
          lVar2 = *plVar5 + -0x20;
        }
      }
    }
    else {
      lVar2 = *plVar5 + -0x20;
    }
    if (!bVar4) {
      *(undefined8 *)(lVar7 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x118));
    }
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    plVar3 = (long *)(lVar7 + 0x110);
    lVar6 = *plVar3;
    lVar2 = nn::os::GetCurrentThread();
    if (lVar2 != lVar6) {
      lVar2 = nn::os::GetCurrentThread();
LAB_01011484:
      if (*plVar3 == 0) goto code_r0x0101148c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
      do {
        if (*plVar3 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
            while (*plVar3 == 0) {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar4) {
                *plVar3 = lVar2;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_01011494;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar4) {
          *plVar3 = lVar2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_01011494:
      bVar4 = false;
      goto LAB_01011498;
    }
    bVar4 = true;
LAB_01011498:
    plVar3 = (long *)FUN_010115f0(*(undefined8 *)(lVar7 + 0x128),*(undefined8 *)(lVar7 + 0x130));
    if ((*(long **)(lVar7 + 0x130) == plVar3) || (*plVar3 == 0)) {
      plVar3 = (long *)FUN_010115f0(*(undefined8 *)(lVar7 + 0x160),*(undefined8 *)(lVar7 + 0x168));
      if (*(long **)(lVar7 + 0x168) == plVar3) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        if (*plVar3 != 0) {
          lVar2 = *plVar3 + -0x20;
        }
      }
    }
    else {
      lVar2 = *plVar3 + -0x20;
    }
    if (!bVar4) {
      *(undefined8 *)(lVar7 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x118));
    }
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return lVar2 != 0;
code_r0x01011408:
  cVar1 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar4) {
    *plVar5 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01011410;
  goto LAB_01011400;
code_r0x0101148c:
  cVar1 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar3,0x10);
  if (bVar4) {
    *plVar3 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01011494;
  goto LAB_01011484;
}


