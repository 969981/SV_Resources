/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d4a9b4; name: FUN_00d4a9b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00d4a9b4(long param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  if (((DAT_04859f40 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859f40), iVar4 != 0)) {
    DAT_04859f38 = 0;
    DAT_04859f30 = 0;
    uRam0000000004859f18 = _UNK_03caa988;
    _DAT_04859f10 = _DAT_03caa980;
    uRam0000000004859f28 = _UNK_03cabe58;
    _DAT_04859f20 = _DAT_03cabe50;
    __cxa_guard_release(&DAT_04859f40);
  }
  if (*param_2 == '\0') {
    puVar9 = &DAT_04859f10;
  }
  else {
    plVar1 = (long *)(param_1 + 0xd70);
    lVar5 = nn::os::GetCurrentThread();
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0xd78);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0xd78) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00d4aa04:
    while ((lVar7 != 0 && (lVar5 != lVar7))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd80));
      do {
        lVar7 = *plVar1;
        lVar8 = *(long *)(param_1 + 0xd78);
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0xd78) = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar7 || *(long *)(param_1 + 0xd78) != lVar8) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_00d4aa34;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0xd74) = lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
LAB_00d4aa34:
    if (!bVar6) {
      lVar7 = lVar2;
      lVar8 = *(long *)(param_1 + 0xd78);
      goto LAB_00d4aa04;
    }
    puVar9 = (undefined *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_2 + 4) * 0x1d0 + 0x50);
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0xd78);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0xd78) = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      lVar2 = *(long *)(param_1 + 0xd78);
      if (lVar8 != lVar5 || lVar2 != lVar7) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_00d4aa98;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0xd74) = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
LAB_00d4aa98:
    if (!bVar6) {
      do {
        lVar5 = *plVar1;
        lVar7 = *(long *)(param_1 + 0xd78);
        if (lVar5 != lVar8 || lVar7 != lVar2) {
          bVar6 = false;
          ClearExclusiveLocal();
          goto joined_r0x00d4ab04;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0xd74) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
joined_r0x00d4ab04:
      if (!bVar6) {
        do {
          lVar8 = *plVar1;
          lVar2 = *(long *)(param_1 + 0xd78);
          if (lVar8 != lVar5 || lVar2 != lVar7) {
            bVar6 = false;
            ClearExclusiveLocal();
            lVar5 = lVar8;
            lVar7 = lVar2;
            goto joined_r0x00d4ab04;
          }
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar5;
            *(long *)(param_1 + 0xd74) = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar6 = true;
        lVar5 = lVar8;
        lVar7 = lVar2;
        goto joined_r0x00d4ab04;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd80));
  }
  return puVar9;
}


