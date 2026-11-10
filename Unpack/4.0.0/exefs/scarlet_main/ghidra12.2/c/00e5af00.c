/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e5af00; name: FUN_00e5af00
 */


void FUN_00e5af00(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  float local_34;
  
  *(undefined4 *)(param_1 + 0x72c) = 0;
  plVar8 = (long *)(param_1 + 0x620);
  lVar7 = *plVar8;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar7) {
    plVar8 = (long *)0x0;
    bVar5 = true;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x628));
        do {
          if (*plVar8 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x628));
              while (*plVar8 == 0) {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar5) {
                  *plVar8 = lVar4;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  bVar5 = false;
                  goto LAB_00e5af48;
                }
              }
            } while( true );
          }
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar5 = false;
        break;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
      bVar5 = false;
    } while (cVar3 != '\0');
  }
LAB_00e5af48:
  plVar6 = *(long **)(param_1 + 0x638);
  if (plVar6 != *(long **)(param_1 + 0x640)) {
    pfVar1 = (float *)(param_1 + 0x72c);
    lVar4 = *(long *)(*plVar6 + 0x30);
    if ((*(char *)(lVar4 + 0x14) == '\0') && (*(char *)(lVar4 + 0x10) != '\0')) {
      local_34 = *(float *)(lVar4 + 0xc);
    }
    else {
      local_34 = 3.4028235e+38;
    }
    pfVar2 = &local_34;
    if (local_34 <= *pfVar1) {
      pfVar2 = pfVar1;
    }
    *pfVar1 = *pfVar2;
    while (plVar6 = plVar6 + 4, plVar6 != *(long **)(param_1 + 0x640)) {
      lVar4 = *(long *)(*plVar6 + 0x30);
      if ((*(char *)(lVar4 + 0x14) == '\0') && (*(char *)(lVar4 + 0x10) != '\0')) {
        local_34 = *(float *)(lVar4 + 0xc);
      }
      else {
        local_34 = 3.4028235e+38;
      }
      pfVar2 = &local_34;
      if (local_34 <= *pfVar1) {
        pfVar2 = pfVar1;
      }
      *pfVar1 = *pfVar2;
    }
  }
  if (bVar5) {
    return;
  }
  *plVar8 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
  return;
}


