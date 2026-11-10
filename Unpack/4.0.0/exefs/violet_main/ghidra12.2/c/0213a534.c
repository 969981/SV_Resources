/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0213a534; name: FUN_0213a534
 */


void FUN_0213a534(long param_1,ushort param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x248);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0213a56c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x250));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x250));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0213a56c;
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
LAB_0213a56c:
  lVar4 = *(long *)(param_1 + 0x1c0);
  if (((*(long *)(lVar4 + 0xf8) != 0) &&
      (*(int *)(lVar4 + 0x100) == *(int *)(*(long *)(lVar4 + 0xf8) + 0x2c))) &&
     (lVar4 = FUN_00c41664(lVar4 + 0xf8), lVar4 != 0)) {
    lVar4 = FUN_00c41664(*(long *)(param_1 + 0x1c0) + 0xf8);
    lVar4 = *(long *)(*(long *)(lVar4 + 0x238) + 0x10);
    *(ushort *)(lVar4 + 0x54) = *(ushort *)(lVar4 + 0x54) & 0xfffe | param_2 & 1;
  }
  *(undefined8 *)(param_1 + 0x248) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x250));
  return;
}


