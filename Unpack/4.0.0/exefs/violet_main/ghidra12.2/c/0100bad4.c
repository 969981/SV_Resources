/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0100bad4; name: FUN_0100bad4
 */


void FUN_0100bad4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_5c [28];
  
  uVar4 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  lVar7 = *(long *)(param_1 + 0x70);
  plVar1 = (long *)(lVar7 + 0x20);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0100bb1c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x28));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x28));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0100bb1c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0100bb1c:
  uVar5 = FUN_0100bd94(lVar7);
  *(undefined8 *)(lVar7 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x28));
  FUN_0100bbbc(auStack_5c,uVar4,uVar5);
  FUN_0100c3a8(*(undefined8 *)(param_1 + 0x70),auStack_5c);
  FUN_0100c048(*(undefined8 *)(param_1 + 0x70),0);
  return;
}


