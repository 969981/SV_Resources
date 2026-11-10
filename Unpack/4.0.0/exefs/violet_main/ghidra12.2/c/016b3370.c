/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b3370; name: FUN_016b3370
 */


void FUN_016b3370(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_01100390(param_1,0);
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  plVar1 = (long *)(param_1 + 0x248);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_016b33b8;
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
          if (cVar2 == '\0') goto LAB_016b33b8;
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
LAB_016b33b8:
  if (*(char *)(param_1 + 0x29a) != '\0') {
    lVar4 = *(long *)(*(long *)(param_1 + 0x1c0) + 0xf8);
    if (((lVar4 != 0) && (*(int *)(*(long *)(param_1 + 0x1c0) + 0x100) == *(int *)(lVar4 + 0x2c)))
       && (lVar4 = FUN_00c41664(), lVar4 != 0)) {
      *(undefined1 *)(param_1 + 0x29a) = 0;
      FUN_0213aab4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x248) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x250));
  FUN_016b3658(*(undefined8 *)(param_1 + 0x130),param_2,param_3 & 1);
  return;
}


