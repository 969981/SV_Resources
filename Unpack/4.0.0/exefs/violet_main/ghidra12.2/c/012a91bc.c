/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012a91bc; name: FUN_012a91bc
 */


bool FUN_012a91bc(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  lVar5 = *plVar6;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    plVar6 = (long *)0x0;
    bVar4 = true;
  }
  else {
    lVar3 = nn::os::GetCurrentThread();
    do {
      if (*plVar6 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        do {
          if (*plVar6 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
              while (*plVar6 == 0) {
                cVar1 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar4) {
                  *plVar6 = lVar3;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 == '\0') {
                  bVar4 = false;
                  goto LAB_012a91fc;
                }
              }
            } while( true );
          }
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        bVar4 = false;
        break;
      }
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
      bVar4 = false;
    } while (cVar1 != '\0');
  }
LAB_012a91fc:
  lVar3 = *(long *)(param_1 + 0x198);
  if ((((lVar3 == 0) ||
       (*(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 8) >> 6 ==
        *(long *)(lVar3 + 0x80) - *(long *)(lVar3 + 0x78) >> 3)) ||
      (lVar3 = *(long *)(param_1 + 0x1b8), lVar3 == 0)) ||
     (((*(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 8) >> 6 ==
        *(long *)(lVar3 + 0x80) - *(long *)(lVar3 + 0x78) >> 3 ||
       (lVar3 = *(long *)(param_1 + 0x1d8), lVar3 == 0)) ||
      ((*(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 8) >> 6 ==
        *(long *)(lVar3 + 0x80) - *(long *)(lVar3 + 0x78) >> 3 ||
       (lVar3 = *(long *)(param_1 + 0x1f8), lVar3 == 0)))))) {
    bVar2 = true;
  }
  else {
    bVar2 = *(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 8) >> 6 ==
            *(long *)(lVar3 + 0x80) - *(long *)(lVar3 + 0x78) >> 3;
  }
  if (!bVar4) {
    *plVar6 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
  }
  return bVar2;
}


