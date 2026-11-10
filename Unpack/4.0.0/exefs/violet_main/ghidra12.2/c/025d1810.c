/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025d1810; name: FUN_025d1810
 */


uint FUN_025d1810(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  uVar4 = FUN_011ef6ec();
  if ((uVar4 & 1) == 0) {
    uVar10 = 0;
    uVar7 = 0;
  }
  else {
    plVar1 = (long *)(param_1 + 0x40);
    lVar5 = nn::os::GetCurrentThread();
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x48);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x48) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_025d1848:
    while ((lVar8 != 0 && (lVar5 != lVar8))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
      do {
        lVar8 = *plVar1;
        lVar9 = *(long *)(param_1 + 0x48);
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0x48) = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar8 || *(long *)(param_1 + 0x48) != lVar9) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_025d1878;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x44) = lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
LAB_025d1878:
    if (!bVar6) {
      lVar8 = lVar2;
      lVar9 = *(long *)(param_1 + 0x48);
      goto LAB_025d1848;
    }
    if (*(char *)(*(long *)(param_1 + 0x38) + 0xe) == '\0') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)(*(long *)(param_1 + 0x38) + 0x260) >> 0x1f;
    }
    do {
      lVar5 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x48);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0x48) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar9 = *plVar1;
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar9 != lVar5 || lVar2 != lVar8) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_025d18e8;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0x44) = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
LAB_025d18e8:
    if (!bVar6) {
      do {
        lVar5 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x48);
        if (lVar5 != lVar9 || lVar8 != lVar2) {
          bVar6 = false;
          ClearExclusiveLocal();
          goto joined_r0x025d195c;
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
joined_r0x025d195c:
      if (!bVar6) {
        do {
          lVar9 = *plVar1;
          lVar2 = *(long *)(param_1 + 0x48);
          if (lVar9 != lVar5 || lVar2 != lVar8) {
            bVar6 = false;
            ClearExclusiveLocal();
            lVar5 = lVar9;
            lVar8 = lVar2;
            goto joined_r0x025d195c;
          }
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar5;
            *(long *)(param_1 + 0x44) = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar6 = true;
        lVar5 = lVar9;
        lVar8 = lVar2;
        goto joined_r0x025d195c;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50));
    uVar7 = 0x100;
  }
  return uVar7 | uVar10;
}


