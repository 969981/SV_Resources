/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015d3338; name: FUN_015d3338
 */


undefined8 FUN_015d3338(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  byte bVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  float fVar11;
  
  plVar1 = (long *)(param_1 + 0x240);
  lVar8 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar8) {
    lVar4 = nn::os::GetCurrentThread();
LAB_015d3434:
    if (*plVar1 == 0) goto code_r0x015d343c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x248));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x248));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_015d3444;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_015d3444:
    bVar10 = false;
    plVar9 = plVar1;
    goto LAB_015d3370;
  }
  bVar10 = true;
  plVar9 = (long *)0x0;
LAB_015d3370:
  lVar8 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar8) {
    lVar4 = nn::os::GetCurrentThread();
LAB_015d3458:
    if (*plVar1 == 0) goto code_r0x015d3460;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x248));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x248));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_015d3468;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_015d3468:
    bVar3 = false;
    plVar5 = plVar1;
    goto LAB_015d3388;
  }
  bVar3 = true;
  plVar5 = (long *)0x0;
LAB_015d3388:
  if (*(long *)(param_1 + 0x208) == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = *(byte *)(*(long *)(param_1 + 0x208) + 0x1e8) & 1;
  }
  if (!bVar3) {
    *plVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar5 + 1));
  }
  if (bVar7 == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = *plVar1;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar8) {
      lVar4 = nn::os::GetCurrentThread();
LAB_015d347c:
      if (*plVar1 == 0) goto code_r0x015d3484;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x248));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x248));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_015d348c;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_015d348c:
      fVar11 = *(float *)(param_1 + 0x180);
      *(undefined8 *)(param_1 + 0x240) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x248));
      goto LAB_015d33bc;
    }
    fVar11 = *(float *)(param_1 + 0x180);
LAB_015d33bc:
    if (fVar11 == 0.0) {
      FUN_015d38b0(param_1);
    }
    FUN_015d3570(param_1 + 0x130,param_1 + 0x200);
    uVar6 = 1;
  }
  if (!bVar10) {
    *plVar9 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
  }
  return uVar6;
code_r0x015d343c:
  cVar2 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar10) {
    *plVar1 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_015d3444;
  goto LAB_015d3434;
code_r0x015d3460:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_015d3468;
  goto LAB_015d3458;
code_r0x015d3484:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_015d348c;
  goto LAB_015d347c;
}


