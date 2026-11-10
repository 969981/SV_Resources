/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022e3d04; name: FUN_022e3d04
 */


void FUN_022e3d04(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = (long *)(param_2 + 0x388);
  lVar5 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar5) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    *param_1 = (long)plVar1;
    *(undefined1 *)(param_1 + 1) = 1;
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x390));
        do {
          if (*plVar1 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x390));
              while (*plVar1 == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  return;
                }
              }
            } while( true );
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        return;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


