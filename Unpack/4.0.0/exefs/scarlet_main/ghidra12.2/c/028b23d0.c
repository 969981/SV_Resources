/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b23d0; name: FUN_028b23d0
 */


int FUN_028b23d0(int *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  
  plVar1 = (long *)(param_1 + 0x218);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x21a) == 0) {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      param_1[0x21a] = 0;
      param_1[0x21b] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_028b2404;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x21c));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x21a) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x21c));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x21a) == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar6;
            param_1[0x21a] = 0;
            param_1[0x21b] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_028b2404;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      param_1[0x21a] = 0;
      param_1[0x21b] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_028b2404:
  lVar6 = *(long *)(param_1 + 0x204);
  if (lVar6 == 0) {
    iVar9 = param_1[2];
    param_1[2] = iVar9 + 1;
  }
  else {
    iVar9 = param_1[lVar6 + 3];
    *(long *)(param_1 + 0x204) = lVar6 + -1;
  }
  uVar8 = (ulong)((uint)(iVar9 - *param_1) >> 3) & 0x1ffffff8;
  *(ulong *)((long)param_1 + uVar8 + 0x818) =
       1L << ((ulong)(uint)(iVar9 - *param_1) & 0x3f) | *(ulong *)((long)param_1 + uVar8 + 0x818);
  param_1[3] = param_1[3] + 1;
  do {
    lVar6 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x21a);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x21a) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x21a);
    if (lVar2 != lVar6 || lVar3 != lVar4) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_028b24d8;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x219) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_028b24d8:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x21a);
      if (lVar6 != lVar2 || lVar4 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x028b2534;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x219) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x028b2534:
    if (!bVar7) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x21a);
        if (lVar2 != lVar6 || lVar3 != lVar4) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x028b2534;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x219) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar6 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x028b2534;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x21c));
  return iVar9;
}


