/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f81d0; name: FUN_010f81d0
 */


void FUN_010f81d0(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  plVar1 = (long *)(param_1 + 0x70);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x78);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x78) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_010f820c:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x78);
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x78) = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar7 || *(long *)(param_1 + 0x78) != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_010f823c;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x74) = lVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_010f823c:
  if (!bVar6) {
    lVar7 = lVar3;
    lVar8 = *(long *)(param_1 + 0x78);
    goto LAB_010f820c;
  }
  if (param_3 < (uint)((ulong)(*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30)) >> 3)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + (ulong)param_3 * 8);
    uVar2 = 2;
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
    }
    *(ulong *)(lVar5 + 0x108) = *(ulong *)(lVar5 + 0x108) & 0xfffffffffffffffd | uVar2;
  }
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x78);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x78) = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar8 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar8 != lVar5 || lVar3 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_010f82c0;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x74) = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_010f82c0:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x78);
      if (lVar5 != lVar8 || lVar7 != lVar3) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x010f8324;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x74) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x010f8324:
    if (!bVar6) {
      do {
        lVar8 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x78);
        if (lVar8 != lVar5 || lVar3 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar8;
          lVar7 = lVar3;
          goto joined_r0x010f8324;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0x74) = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar5 = lVar8;
      lVar7 = lVar3;
      goto joined_r0x010f8324;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


