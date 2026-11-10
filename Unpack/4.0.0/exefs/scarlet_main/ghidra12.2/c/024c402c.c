/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024c402c; name: FUN_024c402c
 */


bool FUN_024c402c(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  
  plVar1 = (long *)(param_1 + 0x318);
  lVar6 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    bVar5 = true;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
        do {
          if (*plVar1 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
              while (*plVar1 == 0) {
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  bVar5 = false;
                  goto LAB_024c407c;
                }
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
        bVar5 = false;
        goto LAB_024c407c;
      }
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar5 = false;
  }
LAB_024c407c:
  if ((param_2 < *(ulong *)(param_1 + 0x290)) &&
     ((*(ulong *)(param_1 + 0x228) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x220) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    bVar3 = *(char *)(*(long *)(param_1 + 0x1e8) + param_2 * 0x20 + 0x10) != '\0';
  }
  else {
    bVar3 = false;
  }
  if (!bVar5) {
    *(undefined8 *)(param_1 + 0x318) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 800));
  }
  return bVar3;
}


