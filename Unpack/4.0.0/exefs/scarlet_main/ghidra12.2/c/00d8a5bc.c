/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d8a5bc; name: FUN_00d8a5bc
 */


bool FUN_00d8a5bc(long param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  
  if (*param_2 == '\0') {
    bVar6 = false;
  }
  else {
    iVar3 = *(int *)(param_2 + 4);
    plVar1 = (long *)(param_1 + 0xd70);
    lVar5 = nn::os::GetCurrentThread();
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0xd78);
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0xd78) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00d8a5fc:
    while ((lVar8 != 0 && (lVar5 != lVar8))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd80));
      do {
        lVar8 = *plVar1;
        lVar9 = *(long *)(param_1 + 0xd78);
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0xd78) = lVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar8 || *(long *)(param_1 + 0xd78) != lVar9) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_00d8a62c;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0xd74) = lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
LAB_00d8a62c:
    if (!bVar6) {
      lVar8 = lVar2;
      lVar9 = *(long *)(param_1 + 0xd78);
      goto LAB_00d8a5fc;
    }
    bVar6 = (ulong)(long)iVar3 <
            (ulong)((*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 4) *
                   0x34f72c234f72c235);
    do {
      lVar5 = *plVar1;
      lVar8 = *(long *)(param_1 + 0xd78);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0xd78) = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar9 = *plVar1;
      lVar2 = *(long *)(param_1 + 0xd78);
      if (lVar9 != lVar5 || lVar2 != lVar8) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00d8a6a4;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0xd74) = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
LAB_00d8a6a4:
    if (!bVar7) {
      do {
        lVar5 = *plVar1;
        lVar8 = *(long *)(param_1 + 0xd78);
        if (lVar5 != lVar9 || lVar8 != lVar2) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto joined_r0x00d8a710;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0xd74) = lVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
joined_r0x00d8a710:
      if (!bVar7) {
        do {
          lVar9 = *plVar1;
          lVar2 = *(long *)(param_1 + 0xd78);
          if (lVar9 != lVar5 || lVar2 != lVar8) {
            bVar7 = false;
            ClearExclusiveLocal();
            lVar5 = lVar9;
            lVar8 = lVar2;
            goto joined_r0x00d8a710;
          }
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar5;
            *(long *)(param_1 + 0xd74) = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar7 = true;
        lVar5 = lVar9;
        lVar8 = lVar2;
        goto joined_r0x00d8a710;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd80));
  }
  return bVar6;
}


