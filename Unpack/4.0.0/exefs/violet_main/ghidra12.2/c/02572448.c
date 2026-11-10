/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02572448; name: FUN_02572448
 */


long FUN_02572448(long *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return 0;
  }
  plVar1 = (long *)(lVar5 + 0x110);
  lVar6 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar6) {
    bVar7 = true;
LAB_025724a8:
    lVar3 = *(long *)(lVar5 + 0x128);
    lVar6 = *(long *)(lVar5 + 0x130);
    if (lVar3 == lVar6) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      do {
        uVar4 = FUN_0257258c(lVar3);
        lVar3 = lVar3 + 8;
        lVar8 = lVar8 + (uVar4 & 1);
      } while (lVar6 != lVar3);
    }
    lVar3 = *(long *)(lVar5 + 0x160);
    lVar6 = *(long *)(lVar5 + 0x168);
    if (lVar3 == lVar6) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      do {
        uVar4 = FUN_0257258c(lVar3);
        lVar3 = lVar3 + 8;
        lVar9 = lVar9 + (uVar4 & 1);
      } while (lVar6 != lVar3);
    }
    if (!bVar7) {
      *(undefined8 *)(lVar5 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x118));
    }
    return lVar9 + lVar8;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_025724a4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x118));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x118));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_025724a4;
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
LAB_025724a4:
  bVar7 = false;
  goto LAB_025724a8;
}


