/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bc8ff0; name: FUN_02bc8ff0
 */


bool FUN_02bc8ff0(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  plVar1 = (long *)(param_1 + 0x2e0);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x2e8);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x2e8) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02bc9020:
  while ((lVar9 != 0 && (lVar6 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f0));
    do {
      lVar9 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x2e8);
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x2e8) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar9 || *(long *)(param_1 + 0x2e8) != lVar10) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_02bc9050;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x2e4) = lVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar5 = true;
LAB_02bc9050:
  if (!bVar5) {
    lVar9 = lVar2;
    lVar10 = *(long *)(param_1 + 0x2e8);
    goto LAB_02bc9020;
  }
  uVar11 = *(ulong *)(param_1 + 0x168);
  uVar8 = (uint)(uVar11 >> 0x20);
  if ((uVar8 < (uint)((ulong)(*(long *)(DAT_0485a0e0 + 0xe0) - *(long *)(DAT_0485a0e0 + 0xd8)) >> 2)
      ) && (uVar3 = *(uint *)(*(long *)(DAT_0485a0e0 + 0xd8) + (uVar11 >> 0x20) * 4),
           -1 < (int)uVar3)) {
    lVar6 = *(long *)(*(long *)(DAT_0485a0e0 + 0x38) + (ulong)uVar3 * 0x20);
    cVar4 = *(char *)(lVar6 + 0xd0);
    if (((uVar11 & 0xff) == 0) || (cVar4 == '\0')) {
      bVar5 = cVar4 == '\0' && (uVar11 & 0xff) == 0;
    }
    else {
      bVar5 = *(uint *)(lVar6 + 0xd4) == uVar8;
    }
  }
  else {
    bVar5 = false;
  }
  do {
    lVar6 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x2e8);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x2e8) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar10 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x2e8);
    if (lVar10 != lVar6 || lVar2 != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_02bc90f4;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x2e4) = lVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_02bc90f4:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x2e8);
      if (lVar6 != lVar10 || lVar9 != lVar2) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x02bc9168;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x2e4) = lVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x02bc9168:
    if (!bVar7) {
      do {
        lVar10 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x2e8);
        if (lVar10 != lVar6 || lVar2 != lVar9) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar10;
          lVar9 = lVar2;
          goto joined_r0x02bc9168;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar6;
          *(long *)(param_1 + 0x2e4) = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar6 = lVar10;
      lVar9 = lVar2;
      goto joined_r0x02bc9168;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f0));
  return bVar5;
}


