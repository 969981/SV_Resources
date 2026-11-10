/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012b1cd8; name: FUN_012b1cd8
 */


void FUN_012b1cd8(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_047dd928 + 0x10);
  plVar4 = (long *)FUN_012a6cd0();
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_012b1d1c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar4 + 1));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar4 + 1));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_012b1d1c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_012b1d1c:
  puVar3 = PTR_DAT_047d8bb8;
  if (0xff < *(ulong *)(PTR_DAT_047d8bb8 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(PTR_DAT_047d8bb8 + *(ulong *)(PTR_DAT_047d8bb8 + 0x800) * 8) = param_1;
  *(long *)(puVar3 + 0x800) = *(long *)(puVar3 + 0x800) + 1;
  *plVar4 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar4 + 1));
  param_1[4] = 0;
  *param_1 = (long)&PTR_LAB_045ce0a8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  DAT_048592d0 = param_1;
  return;
}


