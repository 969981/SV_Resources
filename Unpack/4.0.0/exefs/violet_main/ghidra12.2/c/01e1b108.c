/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1b108; name: FUN_01e1b108
 */


void FUN_01e1b108(long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  short sVar9;
  long *plVar10;
  
  plVar8 = (long *)(param_1 + 0xa0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01e1b14c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01e1b14c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01e1b14c:
  plVar8 = *(long **)(param_1 + 0x40);
  plVar2 = *(long **)(param_1 + 0x48);
  do {
    if (plVar8 == plVar2) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa8));
      return;
    }
    lVar6 = *plVar8;
    if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar6 + 0x1a);
      sVar9 = *(short *)(lVar6 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01e1b208;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e1b208:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar6 + 0x10) != 0) {
            lVar7 = 0;
            if ((long *)*plVar8 != (long *)0x0) {
              lVar7 = *(long *)*plVar8;
            }
            plVar10 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
            lVar6 = 0;
            if ((long *)*param_2 != (long *)0x0) {
              lVar6 = *(long *)*param_2;
            }
            if (lVar7 != lVar6) {
              FUN_01904e28(param_2,plVar8,param_3,param_4,0);
            }
            (**(code **)(*plVar10 + 0x60))(plVar10);
          }
          break;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    plVar8 = plVar8 + 2;
  } while( true );
}


