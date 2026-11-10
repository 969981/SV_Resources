/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025d54e4; name: FUN_025d54e4
 */


ulong FUN_025d54e4(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  
  uVar4 = FUN_011ef6ec();
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
    uVar8 = 0;
    uVar10 = 0;
  }
  else {
    plVar1 = (long *)(param_1 + 0x40);
    lVar5 = nn::os::GetCurrentThread();
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x48);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x48) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_025d551c:
    while ((lVar7 != 0 && (lVar5 != lVar7))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
      do {
        lVar7 = *plVar1;
        lVar9 = *(long *)(param_1 + 0x48);
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x48) = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar7 || *(long *)(param_1 + 0x48) != lVar9) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_025d554c;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x44) = lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
LAB_025d554c:
    if (!bVar6) {
      lVar7 = lVar2;
      lVar9 = *(long *)(param_1 + 0x48);
      goto LAB_025d551c;
    }
    uVar8 = *(uint *)(*(long *)(param_1 + 0x38) + 0x34);
    uVar10 = uVar8 & 0xffffff00;
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x48);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0x48) = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar9 = *plVar1;
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar9 != lVar5 || lVar2 != lVar7) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_025d55b8;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0x44) = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
LAB_025d55b8:
    if (!bVar6) {
      do {
        lVar5 = *plVar1;
        lVar7 = *(long *)(param_1 + 0x48);
        if (lVar5 != lVar9 || lVar7 != lVar2) {
          bVar6 = false;
          ClearExclusiveLocal();
          goto joined_r0x025d562c;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x44) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
joined_r0x025d562c:
      if (!bVar6) {
        do {
          lVar9 = *plVar1;
          lVar2 = *(long *)(param_1 + 0x48);
          if (lVar9 != lVar5 || lVar2 != lVar7) {
            bVar6 = false;
            ClearExclusiveLocal();
            lVar5 = lVar9;
            lVar7 = lVar2;
            goto joined_r0x025d562c;
          }
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar5;
            *(long *)(param_1 + 0x44) = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar6 = true;
        lVar5 = lVar9;
        lVar7 = lVar2;
        goto joined_r0x025d562c;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50));
    uVar8 = uVar8 & 0xff;
    uVar4 = 0x100000000;
  }
  return uVar4 | (uVar10 | uVar8);
}


