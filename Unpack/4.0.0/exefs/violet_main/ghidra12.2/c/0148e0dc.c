/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0148e0dc; name: FUN_0148e0dc
 */


undefined8 FUN_0148e0dc(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_60 [24];
  long *local_48;
  
  if (**(char **)(param_1 + 0xd8) != '\0') {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x48);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0148e124;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0148e124;
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
LAB_0148e124:
  FUN_0148e234(auStack_60,param_1,*(long *)(param_1 + 0xa8) == 0,0);
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar5 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
    FUN_0148ecf4(*(undefined8 *)(param_1 + 0x40),
                 *(long *)(*(long *)(param_1 + 0x68) + (uVar5 >> 4 & 0xffffffffffffff8)) +
                 (uVar5 & 0x7f) * 0x20,auStack_60);
    FUN_0148ebd0(param_1 + 0x60);
  }
  FUN_0148e364(param_1 + 0x60,param_2);
  FUN_0148e4d4(*(undefined8 *)(param_1 + 0x40),param_2,auStack_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50));
  return 1;
}


