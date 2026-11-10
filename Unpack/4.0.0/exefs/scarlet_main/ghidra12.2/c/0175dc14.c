/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175dc14; name: FUN_0175dc14
 */


void FUN_0175dc14(long *param_1)

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
    if (cVar1 == '\0') goto LAB_0175dc58;
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
          if (cVar1 == '\0') goto LAB_0175dc58;
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
LAB_0175dc58:
  puVar3 = PTR_DAT_047d8bb8;
  if (0xff < *(ulong *)(PTR_DAT_047d8bb8 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(PTR_DAT_047d8bb8 + *(ulong *)(PTR_DAT_047d8bb8 + 0x800) * 8) = param_1;
  *(long *)(puVar3 + 0x800) = *(long *)(puVar3 + 0x800) + 1;
  *plVar4 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar4 + 1));
  *param_1 = (long)&PTR_LAB_045e6d20;
  memset(param_1 + 1,0,0x160);
  *(long **)PTR_DAT_047d3f70 = param_1;
  return;
}


