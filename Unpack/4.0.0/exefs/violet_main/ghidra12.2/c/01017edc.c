/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01017edc; name: FUN_01017edc
 */


void FUN_01017edc(long param_1)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 200) != 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0xa8);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar2) {
      *plVar1 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01017f2c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb0));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb0));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar2) {
            *plVar1 = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01017f2c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar2) {
      *plVar1 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01017f2c:
  if (*(long *)(param_1 + 200) == 0) {
    FUN_01018190(&local_50,*(undefined8 *)(param_1 + 8));
    uVar3 = local_50;
    local_50 = 0;
    lVar5 = *(long *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = uVar3;
    if (lVar5 != 0) {
      FUN_00e6cf14(param_1 + 0xd0);
    }
    *(undefined8 *)(param_1 + 0xd8) = uStack_40;
    *(undefined8 *)(param_1 + 0xe0) = local_38;
    *(undefined8 *)(param_1 + 0xd0) = local_48;
    cVar4 = FUN_01018020(param_1 + 0x38);
    if (cVar4 == -0x7e) {
      FUN_00da04fc(*(undefined8 *)(param_1 + 200),1,0);
    }
    if (*(long *)(param_1 + 0xc0) != 0) {
      FUN_015a2318(*(long *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200));
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xb0));
  return;
}


