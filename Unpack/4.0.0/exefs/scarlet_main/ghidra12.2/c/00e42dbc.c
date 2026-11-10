/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e42dbc; name: FUN_00e42dbc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00e42dbc(long param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined1 auVar4 [16];
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*param_2 == '\0') {
    uStack_48 = _UNK_03cabe58;
    local_50 = _DAT_03cabe50;
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
LAB_00e42e00:
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
        goto LAB_00e42e30;
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
LAB_00e42e30:
    if (!bVar6) {
      lVar7 = lVar2;
      lVar8 = *(long *)(param_1 + 0xd78);
      goto LAB_00e42e00;
    }
    lVar5 = *(long *)(param_1 + 0x38) + (long)*(int *)(param_2 + 4) * 0x1d0;
    uStack_48 = *(undefined8 *)(lVar5 + 0x68);
    local_50 = *(undefined8 *)(lVar5 + 0x60);
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
        goto LAB_00e42e98;
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
LAB_00e42e98:
    if (!bVar6) {
      do {
        lVar5 = *plVar1;
        lVar7 = *(long *)(param_1 + 0xd78);
        if (lVar5 != lVar8 || lVar7 != lVar2) {
          bVar6 = false;
          ClearExclusiveLocal();
          goto joined_r0x00e42f08;
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
joined_r0x00e42f08:
      if (!bVar6) {
        do {
          lVar8 = *plVar1;
          lVar2 = *(long *)(param_1 + 0xd78);
          if (lVar8 != lVar5 || lVar2 != lVar7) {
            bVar6 = false;
            ClearExclusiveLocal();
            lVar5 = lVar8;
            lVar7 = lVar2;
            goto joined_r0x00e42f08;
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
        goto joined_r0x00e42f08;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd80));
  }
  auVar4._8_8_ = uStack_48;
  auVar4._0_8_ = local_50;
  return auVar4;
}


