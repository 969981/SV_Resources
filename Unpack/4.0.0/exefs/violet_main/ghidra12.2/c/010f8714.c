/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f8714; name: FUN_010f8714
 */


ulong FUN_010f8714(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x1b8);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x1b8) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_010f874c:
  while ((lVar6 != 0 && (lVar4 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
    do {
      lVar6 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x1b8);
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x1b8) = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar6 || *(long *)(param_1 + 0x1b8) != lVar7) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_010f877c;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x1b4) = lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_010f877c:
  if (!bVar5) {
    lVar6 = lVar2;
    lVar7 = *(long *)(param_1 + 0x1b8);
    goto LAB_010f874c;
  }
  lVar4 = *(long *)(param_1 + 0xf0);
  lVar6 = *(long *)(param_1 + 0xf8) - lVar4;
  if (lVar6 != 0) {
    uVar8 = 0;
    uVar9 = 1;
    do {
      if (*(long *)(lVar4 + uVar8 * 0x38 + 0x10) == *param_2) {
        uVar9 = (ulong)*(byte *)(lVar4 + uVar8 * 0x38 + 0x30) << 8;
        uVar8 = 1;
        goto LAB_010f8804;
      }
      bVar5 = uVar9 < (ulong)((lVar6 >> 3) * 0x6db6db6db6db6db7);
      uVar8 = uVar9;
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (bVar5);
  }
  uVar8 = 0;
  uVar9 = 0;
LAB_010f8804:
  do {
    lVar4 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x1b8);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x1b8) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar7 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x1b8);
    if (lVar7 != lVar4 || lVar2 != lVar6) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_010f8840;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x1b4) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_010f8840:
  if (!bVar5) {
    do {
      lVar4 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x1b8);
      if (lVar4 != lVar7 || lVar6 != lVar2) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto joined_r0x010f88ac;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x1b4) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
joined_r0x010f88ac:
    if (!bVar5) {
      do {
        lVar7 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x1b8);
        if (lVar7 != lVar4 || lVar2 != lVar6) {
          bVar5 = false;
          ClearExclusiveLocal();
          lVar4 = lVar7;
          lVar6 = lVar2;
          goto joined_r0x010f88ac;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          *(long *)(param_1 + 0x1b4) = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar5 = true;
      lVar4 = lVar7;
      lVar6 = lVar2;
      goto joined_r0x010f88ac;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  return uVar9 | uVar8;
}


