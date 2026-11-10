/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0171d68c; name: FUN_0171d68c
 */


void FUN_0171d68c(long *param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_1;
  plVar3 = (long *)(lVar6 + 0x110);
  lVar5 = *plVar3;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar5) {
    bVar4 = true;
LAB_0171d6d8:
    plVar3 = (long *)FUN_010f5b40(*(undefined8 *)(lVar6 + 0x128),*(undefined8 *)(lVar6 + 0x130));
    if ((*(long **)(lVar6 + 0x130) == plVar3) || (*plVar3 == 0)) {
      plVar3 = (long *)FUN_010f5b40(*(undefined8 *)(lVar6 + 0x160),*(undefined8 *)(lVar6 + 0x168));
      if (*(long **)(lVar6 + 0x168) == plVar3) {
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
      *(undefined8 *)(lVar6 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x118));
    }
    if (lVar2 == 0) {
      FUN_010f5c50(*param_1,*(undefined8 *)(*param_1 + 8));
      return;
    }
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar3 == 0) {
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar4) {
      *plVar3 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0171d6d4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x118));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x118));
        while (*plVar3 == 0) {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar4) {
            *plVar3 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0171d6d4;
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
LAB_0171d6d4:
  bVar4 = false;
  goto LAB_0171d6d8;
}


