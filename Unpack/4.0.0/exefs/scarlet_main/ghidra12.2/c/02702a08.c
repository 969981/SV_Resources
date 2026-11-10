/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02702a08; name: FUN_02702a08
 */


void FUN_02702a08(long *param_1,undefined8 param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
  lVar5 = param_1[3];
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
        if (cVar3 != '\0') goto LAB_02702a74;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02702a74:
        bVar7 = false;
      }
      if (bVar7) {
        plVar6 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
        if (*(long *)(lVar5 + 0x10) == 0) {
          return;
        }
        lVar5 = FUN_00e895ec(plVar6);
        if (lVar5 == 0) goto LAB_02702ae4;
        lVar4 = nn::os::GetCurrentThread();
        goto LAB_02702abc;
      }
      param_3 = param_3 & 0xffffffff;
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_02702abc:
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
              *param_1 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02702acc;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar7) {
        *param_1 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02702acc:
    if ((param_3 & 1) == 0) {
      FUN_02249c28(lVar5);
    }
    else {
      FUN_01dcc51c();
    }
    *param_1 = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 1));
LAB_02702ae4:
                    /* WARNING: Could not recover jumptable at 0x02702b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x60))(plVar6);
    return;
  }
  cVar3 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar7) {
    *param_1 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_02702acc;
  goto LAB_02702abc;
}


