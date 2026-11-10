/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025d2b20; name: FUN_025d2b20
 */


ulong FUN_025d2b20(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  uVar5 = FUN_011ef6ec();
  if ((uVar5 & 1) == 0) {
    uVar10 = 0;
    uVar5 = 0;
  }
  else {
    plVar1 = (long *)(param_1 + 0x40);
    lVar6 = nn::os::GetCurrentThread();
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x48);
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x48) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_025d2b58:
    while ((lVar8 != 0 && (lVar6 != lVar8))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
      do {
        lVar8 = *plVar1;
        lVar9 = *(long *)(param_1 + 0x48);
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0x48) = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar8 || *(long *)(param_1 + 0x48) != lVar9) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_025d2b88;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x44) = lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
LAB_025d2b88:
    if (!bVar7) {
      lVar8 = lVar2;
      lVar9 = *(long *)(param_1 + 0x48);
      goto LAB_025d2b58;
    }
    cVar3 = *(char *)(*(long *)(param_1 + 0x38) + 0xb);
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x48);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x48) = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar9 = *plVar1;
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar9 != lVar6 || lVar2 != lVar8) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_025d2be0;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x44) = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
LAB_025d2be0:
    if (!bVar7) {
      do {
        lVar6 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x48);
        if (lVar6 != lVar9 || lVar8 != lVar2) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto joined_r0x025d2c60;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x44) = lVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
joined_r0x025d2c60:
      if (!bVar7) {
        do {
          lVar9 = *plVar1;
          lVar2 = *(long *)(param_1 + 0x48);
          if (lVar9 != lVar6 || lVar2 != lVar8) {
            bVar7 = false;
            ClearExclusiveLocal();
            lVar6 = lVar9;
            lVar8 = lVar2;
            goto joined_r0x025d2c60;
          }
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar6;
            *(long *)(param_1 + 0x44) = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar7 = true;
        lVar6 = lVar9;
        lVar8 = lVar2;
        goto joined_r0x025d2c60;
      }
    }
    uVar10 = (ulong)(cVar3 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50));
    uVar5 = 0x100;
  }
  return uVar5 | uVar10;
}


