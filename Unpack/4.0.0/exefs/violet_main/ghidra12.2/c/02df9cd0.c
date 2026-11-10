/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02df9cd0; name: FUN_02df9cd0
 */


long FUN_02df9cd0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar5 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar4 = true;
  }
  else {
    lVar3 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
        do {
          if (*plVar1 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
              while (*plVar1 == 0) {
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = lVar3;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  bVar4 = false;
                  goto LAB_02df9d18;
                }
              }
            } while( true );
          }
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        bVar4 = false;
        break;
      }
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
      bVar4 = false;
    } while (cVar2 != '\0');
  }
LAB_02df9d18:
  lVar5 = *(long *)(*(long *)(param_1 + 0x168) + param_2 * 8);
  lVar3 = *(long *)(lVar5 + 0x48);
  lVar5 = *(long *)(lVar5 + 0x50);
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
  }
  return (lVar5 - lVar3 >> 3) * 0x6db6db6db6db6db7;
}


