/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0119743c; name: FUN_0119743c
 */


undefined8 FUN_0119743c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0xe8);
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x48);
  }
  plVar5 = (long *)(lVar7 + 0x110);
  lVar9 = *plVar5;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar9) {
    bVar8 = true;
LAB_01197490:
    plVar5 = (long *)FUN_01197610(*(undefined8 *)(lVar7 + 0x128),*(undefined8 *)(lVar7 + 0x130));
    if ((*(long **)(lVar7 + 0x130) == plVar5) || (*plVar5 == 0)) {
      plVar5 = (long *)FUN_01197610(*(undefined8 *)(lVar7 + 0x160),*(undefined8 *)(lVar7 + 0x168));
      if (*(long **)(lVar7 + 0x168) == plVar5) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        if (*plVar5 != 0) {
          lVar4 = *plVar5 + -0x20;
        }
      }
    }
    else {
      lVar4 = *plVar5 + -0x20;
    }
    if (!bVar8) {
      *(undefined8 *)(lVar7 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x118));
    }
    if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x278) & 1) == 0)) {
LAB_011975f0:
      uVar6 = 0;
    }
    else {
      plVar2 = *(long **)(lVar4 + 0x180);
      for (plVar5 = *(long **)(lVar4 + 0x178); plVar5 != plVar2; plVar5 = plVar5 + 1) {
        lVar4 = *plVar5;
        plVar1 = (long *)(lVar4 + 0x60);
        lVar7 = nn::os::GetCurrentThread();
LAB_011974fc:
        if (*plVar1 == 0) goto code_r0x01197504;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x68));
        do {
          if (*plVar1 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x68));
              while (*plVar1 == 0) {
                cVar3 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar8) {
                  *plVar1 = lVar7;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_0119750c;
              }
            } while( true );
          }
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_0119750c:
        cVar3 = *(char *)(lVar4 + 0xeb);
        *(undefined8 *)(lVar4 + 0x60) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0x68));
        if (cVar3 == '\0') goto LAB_011975f0;
      }
      uVar6 = 1;
    }
    return uVar6;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar8) {
      *plVar5 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0119748c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
        while (*plVar5 == 0) {
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar8) {
            *plVar5 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0119748c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar8) {
      *plVar5 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0119748c:
  bVar8 = false;
  goto LAB_01197490;
code_r0x01197504:
  cVar3 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar8) {
    *plVar1 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0119750c;
  goto LAB_011974fc;
}


