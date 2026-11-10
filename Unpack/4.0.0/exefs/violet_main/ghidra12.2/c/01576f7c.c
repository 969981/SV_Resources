/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01576f7c; name: FUN_01576f7c
 */


void FUN_01576f7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x40);
  uVar6 = FUN_00e48eec(lVar8);
  if ((((uVar6 & 0xff) != 0) || (uVar6 = FUN_00e4b87c(lVar8), (uVar6 & 0xff) != 0)) &&
     (uVar6 = FUN_01577134(lVar8 + (uVar6 >> 0x20) * 0x78 + 0x38,param_2,param_3), (uVar6 & 1) != 0)
     ) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x70);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x78) == 0) {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x78) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01577014;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x78) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x78) == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_1 + 0x78) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01577014;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x78) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01577014:
  FUN_015772b4(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  do {
    lVar8 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x78);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x78) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar2 != lVar8 || lVar3 != lVar4) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_015770ac;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x74) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_015770ac:
  if (!bVar7) {
    do {
      lVar8 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x78);
      if (lVar8 != lVar2 || lVar4 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x015770f4;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x74) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x015770f4:
    if (!bVar7) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x78);
        if (lVar2 != lVar8 || lVar3 != lVar4) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar8 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x015770f4;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x74) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar8 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x015770f4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


