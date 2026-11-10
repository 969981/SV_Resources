/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01065e30; name: FUN_01065e30
 */


int FUN_01065e30(int *param_1)

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
    if (cVar5 == '\0') goto LAB_01065e64;
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
          if (cVar5 == '\0') goto LAB_01065e64;
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
LAB_01065e64:
  lVar6 = *(long *)(param_1 + 0x204);
  if (lVar6 == 0) {
    iVar9 = param_1[2];
    param_1[2] = iVar9 + 1;
  }
  else {
    iVar9 = param_1[lVar6 + 3];
    *(long *)(param_1 + 0x204) = lVar6 + -1;
  }
  uVar8 = (ulong)((long)iVar9 - (long)*param_1) >> 3 & 0x1ffffffffffffff8;
  *(ulong *)((long)param_1 + uVar8 + 0x818) =
       1L << ((long)iVar9 - (long)*param_1 & 0x3fU) | *(ulong *)((long)param_1 + uVar8 + 0x818);
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
      goto LAB_01065f38;
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
LAB_01065f38:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x21a);
      if (lVar6 != lVar2 || lVar4 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x01065f98;
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
joined_r0x01065f98:
    if (!bVar7) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x21a);
        if (lVar2 != lVar6 || lVar3 != lVar4) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x01065f98;
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
      goto joined_r0x01065f98;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x21c));
  return iVar9;
}


