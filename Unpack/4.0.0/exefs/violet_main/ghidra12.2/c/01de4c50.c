/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01de4c50; name: FUN_01de4c50
 */


ushort FUN_01de4c50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  ushort uVar9;
  long local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  ushort *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ushort local_48 [2];
  undefined1 local_44 [4];
  
  local_44[0] = 0;
  local_48[0] = local_48[0] & 0xff00;
  plVar1 = (long *)(param_1 + 0x120);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x128);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x128) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01de4ca8:
  while ((uVar9 = local_48[0], lVar6 != 0 && (lVar5 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x128);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x128) = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar6 || *(long *)(param_1 + 0x128) != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_01de4cd8;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x124) = lVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_01de4cd8:
  if (!bVar7) {
    lVar6 = lVar2;
    lVar8 = *(long *)(param_1 + 0x128);
    goto LAB_01de4ca8;
  }
  lVar5 = *(long *)(param_1 + 0x118);
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x128);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x128) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x128);
    if (lVar2 != lVar6 || lVar3 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto joined_r0x01de4d3c;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x124) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
joined_r0x01de4d3c:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x128);
      if (lVar6 != lVar2 || lVar8 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        lVar2 = lVar6;
        lVar3 = lVar8;
        goto joined_r0x01de4d3c;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar2;
        *(long *)(param_1 + 0x124) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
    lVar2 = lVar6;
    lVar3 = lVar8;
    goto joined_r0x01de4d3c;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x130));
  if (lVar5 != 0) {
    plVar1 = (long *)(param_1 + 0x80);
    do {
      lVar5 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar5;
        *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 == lVar5) {
      bVar7 = true;
    }
    else {
      lVar5 = nn::os::GetCurrentThread();
      do {
        lVar6 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x88);
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar6;
          *(long *)(param_1 + 0x88) = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        while ((lVar6 != 0 && (lVar5 != lVar6))) {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x90));
          do {
            lVar6 = *plVar1;
            lVar8 = *(long *)(param_1 + 0x88);
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar6;
              *(long *)(param_1 + 0x88) = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        do {
          lVar2 = *plVar1;
          if (lVar2 != lVar6 || *(long *)(param_1 + 0x88) != lVar8) {
            bVar7 = false;
            ClearExclusiveLocal();
            goto LAB_01de4df4;
          }
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar6;
            *(long *)(param_1 + 0x84) = lVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar7 = true;
LAB_01de4df4:
        lVar6 = lVar2;
        lVar8 = *(long *)(param_1 + 0x88);
      } while (!bVar7);
      bVar7 = false;
    }
    local_88 = local_44;
    puStack_80 = local_48;
    local_98 = param_1;
    uStack_90 = param_2;
    local_78 = param_3;
    uStack_70 = param_4;
    local_68 = param_5;
    FUN_01de4f18(*(undefined8 *)(param_1 + 0x100),&local_98);
    uVar9 = local_48[0];
    if (!bVar7) {
      do {
        lVar5 = *plVar1;
        lVar6 = *(long *)(param_1 + 0x88);
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0x88) = lVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        lVar8 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x88);
        if (lVar8 != lVar5 || lVar2 != lVar6) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto joined_r0x01de4e80;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0x84) = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
joined_r0x01de4e80:
      if (!bVar7) {
        do {
          lVar5 = *plVar1;
          lVar6 = *(long *)(param_1 + 0x88);
          if (lVar5 != lVar8 || lVar6 != lVar2) {
            bVar7 = false;
            ClearExclusiveLocal();
            lVar8 = lVar5;
            lVar2 = lVar6;
            goto joined_r0x01de4e80;
          }
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar8;
            *(long *)(param_1 + 0x84) = lVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar7 = true;
        lVar8 = lVar5;
        lVar2 = lVar6;
        goto joined_r0x01de4e80;
      }
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x90));
    }
  }
  return uVar9;
}


