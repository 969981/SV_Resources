/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1baf4; name: FUN_01e1baf4
 */


void FUN_01e1baf4(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  short sVar8;
  long *plVar9;
  
  plVar7 = (long *)(param_1 + 0xa0);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01e1bb30;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e1bb30;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e1bb30:
  plVar7 = *(long **)(param_1 + 0x1b0);
  if (plVar7 != *(long **)(param_1 + 0x1b8)) {
    do {
      lVar5 = *plVar7;
      if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar5 + 0x1a);
        sVar8 = *(short *)(lVar5 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar8) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_01e1bbfc;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01e1bbfc:
            bVar4 = false;
          }
          if (bVar4) {
            lVar5 = *(long *)(lVar5 + 0x10);
            if (lVar5 != 0) {
              plVar9 = (long *)(lVar5 + -0x28);
              lVar6 = 0;
              if (*(long **)(lVar5 + 8) != (long *)0x0) {
                lVar6 = **(long **)(lVar5 + 8);
              }
              if (lVar6 == param_2) {
                FUN_01904894(param_1 + 0x1b0,plVar7);
                (**(code **)(*plVar9 + 0x60))(plVar9);
                goto LAB_01e1bb58;
              }
              (**(code **)(*plVar9 + 0x60))(plVar9);
            }
            break;
          }
          sVar8 = sVar2;
        } while (sVar2 != 0);
      }
      plVar7 = plVar7 + 3;
    } while (plVar7 != *(long **)(param_1 + 0x1b8));
  }
LAB_01e1bb58:
  *(undefined8 *)(param_1 + 0xa0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa8));
  return;
}


