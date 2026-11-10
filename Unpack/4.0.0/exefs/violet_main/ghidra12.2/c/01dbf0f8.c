/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbf0f8; name: FUN_01dbf0f8
 */


void FUN_01dbf0f8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_6c [28];
  
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  FUN_0100c3a8(*(undefined8 *)(param_1 + 0x70),uVar8);
  FUN_0100c048(*(undefined8 *)(param_1 + 0x70),1);
  uVar4 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  lVar9 = *(long *)(param_1 + 0x70);
  plVar1 = (long *)(lVar9 + 0x20);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01dbf160;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x28));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x28));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01dbf160;
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
LAB_01dbf160:
  uVar5 = FUN_0100bd94(lVar9);
  *(undefined8 *)(lVar9 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x28));
  FUN_0100bbbc(auStack_6c,uVar4,uVar5);
  uVar7 = FUN_0131cbf0(uVar8,auStack_6c);
  if ((uVar7 & 1) != 0) {
    FUN_0100c048(*(undefined8 *)(param_1 + 0x70),0);
  }
  return;
}


