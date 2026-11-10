/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02192df0; name: FUN_02192df0
 */


long FUN_02192df0(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long *plVar10;
  long *plVar9;
  
  plVar1 = (long *)(param_1 + 0xe0);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0xe8);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xe8) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02192e2c:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf0));
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0xe8);
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0xe8) = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_1 + 0xe8) != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_02192e5c;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xe4) = lVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_02192e5c:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar8 = *(long *)(param_1 + 0xe8);
    goto LAB_02192e2c;
  }
  lVar5 = FUN_02192fc4(param_1 + 8,param_2);
  if (lVar5 != 0) {
    if (*(char *)param_3[1] == '\0') {
      lVar5 = lVar5 + 0x58;
      goto LAB_02192ebc;
    }
    if (*(long **)(lVar5 + 0x78) != *(long **)(lVar5 + 0x80)) {
      plVar9 = *(long **)(lVar5 + 0x78);
      do {
        plVar10 = plVar9 + 6;
        if (*plVar9 == *param_3) {
          lVar5 = (long)plVar9 + 0xc;
          goto LAB_02192ebc;
        }
        plVar9 = plVar10;
      } while (*(long **)(lVar5 + 0x80) != plVar10);
    }
  }
  lVar5 = 0;
LAB_02192ebc:
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0xe8);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xe8) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0xe8);
    if (lVar2 != lVar7 || lVar3 != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_02192ef8;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xe4) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_02192ef8:
  if (!bVar6) {
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0xe8);
      if (lVar7 != lVar2 || lVar8 != lVar3) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x02192f74;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar2;
        *(long *)(param_1 + 0xe4) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x02192f74:
    if (!bVar6) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0xe8);
        if (lVar2 != lVar7 || lVar3 != lVar8) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar7 = lVar2;
          lVar8 = lVar3;
          goto joined_r0x02192f74;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0xe4) = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar7 = lVar2;
      lVar8 = lVar3;
      goto joined_r0x02192f74;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf0));
  return lVar5;
}


