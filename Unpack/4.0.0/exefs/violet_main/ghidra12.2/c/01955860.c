/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01955860; name: FUN_01955860
 */


bool FUN_01955860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  long local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_68 [4];
  undefined1 local_64 [4];
  
  local_64[0] = 0;
  local_68[0] = '\0';
  plVar1 = (long *)(param_1 + 0x120);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x128);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x128) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_019558bc:
  while ((lVar7 != 0 && (lVar6 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x128);
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x128) = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_1 + 0x128) != lVar8) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_019558ec;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x124) = lVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar5 = true;
LAB_019558ec:
  if (!bVar5) {
    lVar7 = lVar2;
    lVar8 = *(long *)(param_1 + 0x128);
    goto LAB_019558bc;
  }
  bVar5 = local_68[0] != '\0';
  lVar6 = *(long *)(param_1 + 0x118);
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x128);
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x128) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x128);
    if (lVar2 != lVar7 || lVar3 != lVar8) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto joined_r0x01955958;
    }
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x124) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar9 = true;
joined_r0x01955958:
  if (!bVar9) {
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x128);
      if (lVar7 != lVar2 || lVar8 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        lVar2 = lVar7;
        lVar3 = lVar8;
        goto joined_r0x01955958;
      }
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar2;
        *(long *)(param_1 + 0x124) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar9 = true;
    lVar2 = lVar7;
    lVar3 = lVar8;
    goto joined_r0x01955958;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x130));
  if (lVar6 != 0) {
    plVar1 = (long *)(param_1 + 0x80);
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 == lVar6) {
      bVar9 = true;
    }
    else {
      lVar6 = nn::os::GetCurrentThread();
      do {
        lVar7 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x88);
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x88) = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        while ((lVar7 != 0 && (lVar6 != lVar7))) {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x90));
          do {
            lVar7 = *plVar1;
            lVar8 = *(long *)(param_1 + 0x88);
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar7;
              *(long *)(param_1 + 0x88) = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        do {
          lVar2 = *plVar1;
          if (lVar2 != lVar7 || *(long *)(param_1 + 0x88) != lVar8) {
            bVar5 = false;
            ClearExclusiveLocal();
            goto LAB_01955a10;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            *(long *)(param_1 + 0x84) = lVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar5 = true;
LAB_01955a10:
        lVar7 = lVar2;
        lVar8 = *(long *)(param_1 + 0x88);
      } while (!bVar5);
      bVar9 = false;
    }
    local_98 = local_64;
    pcStack_90 = local_68;
    local_a8 = param_1;
    uStack_a0 = param_2;
    local_88 = param_3;
    uStack_80 = param_4;
    local_78 = param_5;
    uStack_70 = param_6;
    FUN_01955b3c(*(undefined8 *)(param_1 + 0x100),&local_a8);
    bVar5 = local_68[0] != '\0';
    if (!bVar9) {
      do {
        lVar6 = *plVar1;
        lVar7 = *(long *)(param_1 + 0x88);
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar6;
          *(long *)(param_1 + 0x88) = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        lVar8 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x88);
        if (lVar8 != lVar6 || lVar2 != lVar7) {
          bVar9 = false;
          ClearExclusiveLocal();
          goto joined_r0x01955a98;
        }
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar6;
          *(long *)(param_1 + 0x84) = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar9 = true;
joined_r0x01955a98:
      if (!bVar9) {
        do {
          lVar6 = *plVar1;
          lVar7 = *(long *)(param_1 + 0x88);
          if (lVar6 != lVar8 || lVar7 != lVar2) {
            bVar9 = false;
            ClearExclusiveLocal();
            lVar8 = lVar6;
            lVar2 = lVar7;
            goto joined_r0x01955a98;
          }
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar8;
            *(long *)(param_1 + 0x84) = lVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar9 = true;
        lVar8 = lVar6;
        lVar2 = lVar7;
        goto joined_r0x01955a98;
      }
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x90));
    }
  }
  return bVar5;
}


