/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1a9f0; name: FUN_01e1a9f0
 */


void FUN_01e1a9f0(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  short sVar8;
  long *plVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  plVar7 = (long *)(param_1 + 0xa0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01e1aa28;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
        while (*plVar7 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01e1aa28;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01e1aa28:
  if (*(char *)(param_1 + 0xc0) != '\0') {
    plVar2 = *(long **)(param_1 + 0x48);
    for (plVar7 = *(long **)(param_1 + 0x40); plVar7 != plVar2; plVar7 = plVar7 + 2) {
      lVar6 = *plVar7;
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar6 + 0x1a);
        sVar8 = *(short *)(lVar6 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar8) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01e1aaf0;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01e1aaf0:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar6 + 0x10) != 0) {
              plVar9 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
              local_28 = 0;
              if ((undefined8 *)*plVar7 != (undefined8 *)0x0) {
                local_28 = *(undefined8 *)*plVar7;
              }
              lVar6 = (**(code **)(*plVar9 + 0x68))(plVar9);
              local_50 = CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20) -
                                  (float)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x20),
                                  (float)*(undefined8 *)(lVar6 + 0x30) -
                                  (float)*(undefined8 *)(param_1 + 0xd0));
              uStack_48 = CONCAT44(0.0 - (float)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20),
                                   (float)*(undefined8 *)(lVar6 + 0x38) -
                                   (float)*(undefined8 *)(param_1 + 0xd8));
              FUN_018fcd30(param_1 + 0xf0,&local_28,&local_28,&local_50);
              (**(code **)(*plVar9 + 0x60))(plVar9);
            }
            break;
          }
          sVar8 = sVar3;
        } while (sVar3 != 0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa8));
  return;
}


