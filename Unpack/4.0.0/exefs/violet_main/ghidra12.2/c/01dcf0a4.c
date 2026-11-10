/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dcf0a4; name: FUN_01dcf0a4
 */


ulong FUN_01dcf0a4(long param_1,ulong param_2,undefined8 param_3)

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
    param_2 = unaff_x21;
  }
  else {
    plVar1 = (long *)(param_1 + 0x148);
    lVar6 = *plVar1;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar6) {
      lVar3 = nn::os::GetCurrentThread();
LAB_01dcf0e8:
      if (*plVar1 == 0) goto code_r0x01dcf0f0;
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
              if (cVar2 == '\0') goto LAB_01dcf0f8;
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
LAB_01dcf0f8:
      lVar3 = *(long *)(param_1 + 0x138);
      if (lVar3 != 0) {
        bVar5 = false;
        goto LAB_01dcf104;
      }
      uVar4 = 0;
      goto LAB_01dcf170;
    }
    lVar3 = *(long *)(param_1 + 0x138);
    bVar5 = true;
LAB_01dcf104:
    uVar4 = FUN_01de3d50(lVar3,param_2,param_3);
    param_2 = (ulong)((uint)uVar4 >> 8 & 0xff);
    if (!bVar5) {
LAB_01dcf170:
      *(undefined8 *)(param_1 + 0x148) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
    }
  }
  return uVar4 & 0xff | (param_2 & 0xff) << 8;
code_r0x01dcf0f0:
  cVar2 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar5) {
    *plVar1 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01dcf0f8;
  goto LAB_01dcf0e8;
}


