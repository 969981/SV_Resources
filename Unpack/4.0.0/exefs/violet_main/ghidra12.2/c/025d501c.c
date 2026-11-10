/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025d501c; name: FUN_025d501c
 */


undefined1  [16] FUN_025d501c(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar4 = FUN_011ef6ec();
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
    uVar6 = 0;
    uVar10 = 0;
  }
  else {
    plVar1 = (long *)(param_1 + 0x40);
    lVar5 = nn::os::GetCurrentThread();
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
LAB_025d5054:
    while ((lVar8 != 0 && (lVar5 != lVar8))) {
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
        goto LAB_025d5084;
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
LAB_025d5084:
    if (!bVar7) {
      lVar8 = lVar2;
      lVar9 = *(long *)(param_1 + 0x48);
      goto LAB_025d5054;
    }
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x38) + 0x1b8);
    uVar10 = uVar4 & 0xffffffffffffff00;
    do {
      lVar5 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x48);
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0x48) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar9 = *plVar1;
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar9 != lVar5 || lVar2 != lVar8) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_025d50f0;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0x44) = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
LAB_025d50f0:
    if (!bVar7) {
      do {
        lVar5 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x48);
        if (lVar5 != lVar9 || lVar8 != lVar2) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto joined_r0x025d5160;
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x44) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar7 = true;
joined_r0x025d5160:
      if (!bVar7) {
        do {
          lVar9 = *plVar1;
          lVar2 = *(long *)(param_1 + 0x48);
          if (lVar9 != lVar5 || lVar2 != lVar8) {
            bVar7 = false;
            ClearExclusiveLocal();
            lVar5 = lVar9;
            lVar8 = lVar2;
            goto joined_r0x025d5160;
          }
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar5;
            *(long *)(param_1 + 0x44) = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar7 = true;
        lVar5 = lVar9;
        lVar8 = lVar2;
        goto joined_r0x025d5160;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50));
    uVar4 = uVar4 & 0xff;
    uVar6 = 1;
  }
  auVar11._0_8_ = uVar10 | uVar4;
  auVar11._8_8_ = uVar6;
  return auVar11;
}


