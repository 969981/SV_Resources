/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e48c4; name: FUN_011e48c4
 */


void FUN_011e48c4(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  plVar1 = (long *)(param_1 + 0x200);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x208) == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x208) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_011e4900;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x210));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x208) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x210));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x208) == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar6;
            *(undefined8 *)(param_1 + 0x208) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_011e4900;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x208) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_011e4900:
  if (*(int *)(param_1 + 0x230) != 1) {
    if ((param_2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x230) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x230) = 2;
      if (*(long *)(param_1 + 0x130) != 0) {
        FUN_011eb858(DAT_0485a0e8,param_1 + 0x128);
      }
    }
    lVar6 = DAT_0485a0e8;
    if (*(long *)(param_1 + 0x130) != 0) {
      plVar2 = (long *)(DAT_0485a0e8 + 0xe08);
      lVar7 = nn::os::GetCurrentThread();
LAB_011e4948:
      if (*plVar2 == 0) goto code_r0x011e4950;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xe10));
      do {
        if (*plVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xe10));
            while (*plVar2 == 0) {
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_011e4958;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_011e4958:
      if (1 < (ulong)(*(long *)(lVar6 + 0xdd0) - *(long *)(lVar6 + 0xdc8) >> 3)) {
        FUN_011e4ae0();
      }
      *(undefined8 *)(lVar6 + 0xe08) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xe10));
    }
  }
  do {
    lVar6 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x208);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x208) = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x208);
    if (lVar3 != lVar6 || lVar4 != lVar7) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_011e4a0c;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x204) = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_011e4a0c:
  if (!bVar8) {
    do {
      lVar6 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x208);
      if (lVar6 != lVar3 || lVar7 != lVar4) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x011e4aa0;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x204) = lVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x011e4aa0:
    if (!bVar8) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x208);
        if (lVar3 != lVar6 || lVar4 != lVar7) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar6 = lVar3;
          lVar7 = lVar4;
          goto joined_r0x011e4aa0;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x204) = lVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar6 = lVar3;
      lVar7 = lVar4;
      goto joined_r0x011e4aa0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x210));
  return;
code_r0x011e4950:
  cVar5 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar8) {
    *plVar2 = lVar7;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_011e4958;
  goto LAB_011e4948;
}


