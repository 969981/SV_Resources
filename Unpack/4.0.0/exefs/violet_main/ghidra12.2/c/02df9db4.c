/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02df9db4; name: FUN_02df9db4
 */


long FUN_02df9db4(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)(param_1 + 0x40);
  lVar5 = *plVar4;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar5) {
    bVar3 = true;
  }
  else {
    lVar2 = nn::os::GetCurrentThread();
    do {
      if (*plVar4 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
        do {
          if (*plVar4 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
              while (*plVar4 == 0) {
                cVar1 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar3) {
                  *plVar4 = lVar2;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 == '\0') {
                  bVar3 = false;
                  goto LAB_02df9e00;
                }
              }
            } while( true );
          }
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        bVar3 = false;
        break;
      }
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      bVar3 = false;
    } while (cVar1 != '\0');
  }
LAB_02df9e00:
  plVar4 = (long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x168) + param_2 * 8) + 0x48) +
                   param_3 * 0x38);
  lVar2 = *plVar4;
  lVar5 = plVar4[1];
  if (!bVar3) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
  }
  return (lVar5 - lVar2 >> 3) * 0x4ec4ec4ec4ec4ec5;
}


