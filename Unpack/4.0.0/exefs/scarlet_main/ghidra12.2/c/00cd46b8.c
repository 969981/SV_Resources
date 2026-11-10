/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd46b8; name: FUN_00cd46b8
 */


void FUN_00cd46b8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR___cxa_pure_virtual_045dac88;
  plVar4 = (long *)FUN_00cd477c();
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00cd46f8;
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
          if (cVar1 == '\0') goto LAB_00cd46f8;
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
LAB_00cd46f8:
  puVar3 = PTR_DAT_047e1938;
  if (0xff < *(ulong *)(PTR_DAT_047e1938 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 **)(PTR_DAT_047e1938 + *(ulong *)(PTR_DAT_047e1938 + 0x800) * 8) = param_1;
  *(long *)(puVar3 + 0x800) = *(long *)(puVar3 + 0x800) + 1;
  *plVar4 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar4 + 1));
  return;
}


