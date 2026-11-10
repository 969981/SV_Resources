/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5cf04; name: FUN_00c5cf04
 */


void FUN_00c5cf04(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  
  if (param_2[0x33] == *param_3) {
    *param_1 = (long)param_2;
                    /* WARNING: Could not recover jumptable at 0x00c5d02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x58))(param_2);
    return;
  }
  plVar7 = param_2 + 0x3b;
  lVar6 = *plVar7;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar6) {
    lVar4 = nn::os::GetCurrentThread();
LAB_00c5cf50:
    if (*plVar7 == 0) goto code_r0x00c5cf58;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x3c));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x3c));
          while (*plVar7 == 0) {
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00c5cf60;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00c5cf60:
    bVar5 = false;
    goto LAB_00c5cf64;
  }
  plVar7 = (long *)0x0;
  bVar5 = true;
LAB_00c5cf64:
  puVar1 = (undefined8 *)param_2[0x3f];
  puVar3 = (undefined8 *)param_2[0x3e];
  do {
    if (puVar3 == puVar1) {
      *param_1 = 0;
      break;
    }
    FUN_00c5cf04(param_1,*puVar3,param_3);
    puVar3 = puVar3 + 1;
  } while (*param_1 == 0);
  if (bVar5) {
    return;
  }
  *plVar7 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
  return;
code_r0x00c5cf58:
  cVar2 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar5) {
    *plVar7 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00c5cf60;
  goto LAB_00c5cf50;
}


