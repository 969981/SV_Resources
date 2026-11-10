/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02df9ea8; name: FUN_02df9ea8
 */


long FUN_02df9ea8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long *plVar6;
  long *plVar5;
  long lVar7;
  
  plVar5 = (long *)(param_1 + 0x40);
  lVar7 = *plVar5;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar7) {
    bVar4 = true;
  }
  else {
    lVar3 = nn::os::GetCurrentThread();
    do {
      if (*plVar5 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
        do {
          if (*plVar5 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
              while (*plVar5 == 0) {
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar4) {
                  *plVar5 = lVar3;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  bVar4 = false;
                  goto LAB_02df9ef8;
                }
              }
            } while( true );
          }
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        bVar4 = false;
        goto LAB_02df9ef8;
      }
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar4 = false;
  }
LAB_02df9ef8:
  lVar3 = *(long *)(*(long *)(param_1 + 0x168) + param_2 * 8);
  plVar5 = *(long **)(lVar3 + 0x48);
  plVar1 = *(long **)(lVar3 + 0x50);
  if (plVar5 == plVar1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      plVar6 = plVar5 + 7;
      lVar3 = lVar3 + (plVar5[1] - *plVar5 >> 3) * 0x4ec4ec4ec4ec4ec5;
      plVar5 = plVar6;
    } while (plVar1 != plVar6);
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
  }
  return lVar3;
}


