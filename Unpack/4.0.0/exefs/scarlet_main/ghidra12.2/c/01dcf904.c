/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dcf904; name: FUN_01dcf904
 */


ulong FUN_01dcf904(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong unaff_x21;
  bool bVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    uVar4 = 0;
    param_4 = unaff_x21;
  }
  else {
    plVar1 = (long *)(param_1 + 0x148);
    lVar6 = *plVar1;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar6) {
      lVar3 = nn::os::GetCurrentThread();
LAB_01dcf954:
      if (*plVar1 == 0) goto code_r0x01dcf95c;
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
                *plVar1 = lVar3;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01dcf964;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01dcf964:
      lVar3 = *(long *)(param_1 + 0x138);
      if (lVar3 != 0) {
        bVar5 = false;
        goto LAB_01dcf970;
      }
      uVar4 = 0;
      goto LAB_01dcf9e4;
    }
    lVar3 = *(long *)(param_1 + 0x138);
    bVar5 = true;
LAB_01dcf970:
    uVar4 = FUN_01de4c50(lVar3,param_2,param_3,param_4,param_5);
    param_4 = (ulong)((uint)uVar4 >> 8 & 0xff);
    if (!bVar5) {
LAB_01dcf9e4:
      *(undefined8 *)(param_1 + 0x148) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
    }
  }
  return uVar4 & 0xff | (param_4 & 0xff) << 8;
code_r0x01dcf95c:
  cVar2 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar5) {
    *plVar1 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01dcf964;
  goto LAB_01dcf954;
}


