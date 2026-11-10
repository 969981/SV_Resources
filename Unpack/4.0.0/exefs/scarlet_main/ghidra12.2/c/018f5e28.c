/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f5e28; name: FUN_018f5e28
 */


uint FUN_018f5e28(long param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  uint unaff_w21;
  bool bVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    uVar3 = 0;
  }
  else {
    plVar1 = (long *)(param_1 + 0x148);
    lVar6 = *plVar1;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar6) {
      lVar4 = nn::os::GetCurrentThread();
LAB_018f5e6c:
      if (*plVar1 == 0) goto code_r0x018f5e74;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_018f5e7c;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_018f5e7c:
      lVar4 = *(long *)(param_1 + 0x138);
      if (lVar4 != 0) {
        bVar5 = false;
        goto LAB_018f5e88;
      }
      uVar3 = 0;
      unaff_w21 = param_2;
      goto LAB_018f5ea0;
    }
    lVar4 = *(long *)(param_1 + 0x138);
    bVar5 = true;
LAB_018f5e88:
    uVar3 = FUN_018f5f30(lVar4,param_2 & 1,param_3);
    unaff_w21 = uVar3 >> 8 & 0xff;
    if (!bVar5) {
LAB_018f5ea0:
      *(undefined8 *)(param_1 + 0x148) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
    }
  }
  return uVar3 & 0xff | (unaff_w21 & 0xff) << 8;
code_r0x018f5e74:
  cVar2 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar5) {
    *plVar1 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_018f5e7c;
  goto LAB_018f5e6c;
}


