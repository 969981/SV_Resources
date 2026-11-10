/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e4764c; name: FUN_00e4764c
 */


uint FUN_00e4764c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  
  uVar5 = FUN_00e477e4(*(undefined8 *)(param_1 + 0x40));
  if ((uVar5 & 1) == 0) {
    plVar1 = (long *)(param_1 + 0x70);
    lVar6 = nn::os::GetCurrentThread();
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x78);
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x78) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00e476ac:
    while ((lVar8 != 0 && (lVar6 != lVar8))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
      do {
        lVar8 = *plVar1;
        lVar9 = *(long *)(param_1 + 0x78);
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0x78) = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar8 || *(long *)(param_1 + 0x78) != lVar9) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00e476dc;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x74) = lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
LAB_00e476dc:
    if (!bVar7) {
      lVar8 = lVar2;
      lVar9 = *(long *)(param_1 + 0x78);
      goto LAB_00e476ac;
    }
    uVar4 = FUN_00e477e4(*(undefined8 *)(param_1 + 0x48),param_2);
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x78);
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x78) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar9 = *plVar1;
      lVar2 = *(long *)(param_1 + 0x78);
      if (lVar9 != lVar6 || lVar2 != lVar8) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00e4773c;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x74) = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
LAB_00e4773c:
    if (!bVar7) {
      do {
        lVar6 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x78);
        if (lVar6 != lVar9 || lVar8 != lVar2) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto joined_r0x00e47794;
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x74) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar7 = true;
joined_r0x00e47794:
      if (!bVar7) {
        do {
          lVar9 = *plVar1;
          lVar2 = *(long *)(param_1 + 0x78);
          if (lVar9 != lVar6 || lVar2 != lVar8) {
            bVar7 = false;
            ClearExclusiveLocal();
            lVar6 = lVar9;
            lVar8 = lVar2;
            goto joined_r0x00e47794;
          }
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar6;
            *(long *)(param_1 + 0x74) = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar7 = true;
        lVar6 = lVar9;
        lVar8 = lVar2;
        goto joined_r0x00e47794;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  }
  else {
    uVar4 = 1;
  }
  return uVar4 & 1;
}


