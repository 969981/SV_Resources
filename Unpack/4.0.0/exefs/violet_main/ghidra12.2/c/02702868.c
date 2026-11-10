/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02702868; name: FUN_02702868
 */


void FUN_02702868(undefined4 param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
  lVar5 = param_2[3];
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_027028d4;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_027028d4:
        bVar7 = false;
      }
      if (bVar7) {
        plVar6 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
        if (*(long *)(lVar5 + 0x10) == 0) {
          return;
        }
        lVar5 = FUN_00e895ec(plVar6);
        if (lVar5 == 0) goto LAB_02702940;
        lVar4 = nn::os::GetCurrentThread();
        goto LAB_02702918;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_02702918:
  if (*param_2 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 1));
    do {
      if (*param_2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 1));
          while (*param_2 == 0) {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(param_2,0x10);
            if (bVar7) {
              *param_2 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02702928;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar7) {
        *param_2 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02702928:
    FUN_027029a4(param_1,lVar5);
    *param_2 = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 1));
LAB_02702940:
                    /* WARNING: Could not recover jumptable at 0x0270295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x60))(plVar6);
    return;
  }
  cVar3 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(param_2,0x10);
  if (bVar7) {
    *param_2 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_02702928;
  goto LAB_02702918;
}


