/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd0378; name: FUN_01dd0378
 */


ulong FUN_01dd0378(long param_1,uint param_2,ulong param_3,undefined8 param_4)

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
    param_3 = unaff_x21;
  }
  else {
    plVar1 = (long *)(param_1 + 0x148);
    lVar6 = *plVar1;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar6) {
      lVar3 = nn::os::GetCurrentThread();
LAB_01dd03c4:
      if (*plVar1 == 0) goto code_r0x01dd03cc;
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
              if (cVar2 == '\0') goto LAB_01dd03d4;
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
LAB_01dd03d4:
      lVar3 = *(long *)(param_1 + 0x138);
      if (lVar3 != 0) {
        bVar5 = false;
        goto LAB_01dd03e0;
      }
      uVar4 = 0;
      goto LAB_01dd0450;
    }
    lVar3 = *(long *)(param_1 + 0x138);
    bVar5 = true;
LAB_01dd03e0:
    uVar4 = FUN_01de5bec(lVar3,param_2 & 1,param_3,param_4);
    param_3 = (ulong)((uint)uVar4 >> 8 & 0xff);
    if (!bVar5) {
LAB_01dd0450:
      *(undefined8 *)(param_1 + 0x148) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
    }
  }
  return uVar4 & 0xff | (param_3 & 0xff) << 8;
code_r0x01dd03cc:
  cVar2 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar5) {
    *plVar1 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01dd03d4;
  goto LAB_01dd03c4;
}


