/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270253c; name: FUN_0270253c
 */


void FUN_0270253c(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  short sVar8;
  
  lVar6 = param_1[3];
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar8 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_027025a4;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_027025a4:
        bVar7 = false;
      }
      if (bVar7) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        lVar4 = FUN_00c8c7b4(*(undefined8 *)(lVar6 + 0x148));
        if (lVar4 == 0) goto LAB_0270260c;
        lVar5 = nn::os::GetCurrentThread();
        goto LAB_027025e8;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_027025e8:
  if (*param_1 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
    do {
      if (*param_1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
          while (*param_1 == 0) {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar7) {
              *param_1 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_027025f8;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar7) {
        *param_1 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_027025f8:
    FUN_00d4f784(lVar4);
    *param_1 = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 1));
LAB_0270260c:
                    /* WARNING: Could not recover jumptable at 0x02702628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar6 + -0x28) + 0x60))((long *)(lVar6 + -0x28));
    return;
  }
  cVar3 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar7) {
    *param_1 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_027025f8;
  goto LAB_027025e8;
}


