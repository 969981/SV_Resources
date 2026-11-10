/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f70dc8; name: FUN_00f70dc8
 */


void FUN_00f70dc8(undefined8 *param_1,long param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_2 + 0x3c0);
  lVar5 = *plVar6;
  param_3 = param_3 & 0xffffffff;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar5) {
    lVar2 = nn::os::GetCurrentThread();
LAB_00f70e04:
    if (*plVar6 == 0) goto code_r0x00f70e0c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x3c8));
    do {
      if (*plVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x3c8));
          while (*plVar6 == 0) {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00f70e14;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00f70e14:
    bVar4 = false;
    plVar3 = plVar6;
    goto LAB_00f70e1c;
  }
  plVar3 = (long *)0x0;
  bVar4 = true;
LAB_00f70e1c:
  lVar2 = *(long *)(param_2 + 0x3e0);
  lVar5 = *(long *)(param_2 + 0x3d8);
  if (!bVar4) {
    *plVar3 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar3 + 1));
  }
  if (param_3 < (ulong)(lVar2 - lVar5 >> 4)) {
    lVar5 = *plVar6;
    lVar2 = nn::os::GetCurrentThread();
    if (lVar2 != lVar5) {
      lVar2 = nn::os::GetCurrentThread();
LAB_00f70e5c:
      if (*plVar6 == 0) goto code_r0x00f70e64;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x3c8));
      do {
        if (*plVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x3c8));
            while (*plVar6 == 0) {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = lVar2;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00f70e6c;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00f70e6c:
      bVar4 = false;
      goto LAB_00f70e70;
    }
    plVar6 = (long *)0x0;
    bVar4 = true;
LAB_00f70e70:
    lVar2 = *(long *)(param_2 + 0x3d8);
    if ((ulong)(*(long *)(param_2 + 0x3e0) - lVar2 >> 4) <= param_3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00d0a71c(param_1,lVar2 + param_3 * 0x10);
    if (!bVar4) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
      return;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
code_r0x00f70e0c:
  cVar1 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar4) {
    *plVar6 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00f70e14;
  goto LAB_00f70e04;
code_r0x00f70e64:
  cVar1 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar4) {
    *plVar6 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00f70e6c;
  goto LAB_00f70e5c;
}


