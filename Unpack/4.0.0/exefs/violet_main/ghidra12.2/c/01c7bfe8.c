/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c7bfe8; name: FUN_01c7bfe8
 */


void FUN_01c7bfe8(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_047d38f8;
  lVar6 = *(long *)PTR_DAT_047d38f8;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    FUN_01c7c0f0(uVar5,*(undefined8 *)*param_2,param_2[1]);
    FUN_00c5db00(uVar5,0);
    return;
  }
  uVar5 = nn::os::GetCurrentThread();
  while (*(long *)puVar3 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(undefined8 *)puVar3 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01c7c064;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
  do {
    if (*(long *)puVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
        while (*(long *)puVar3 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar2) {
            *(undefined8 *)puVar3 = uVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01c7c064;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(undefined8 *)puVar3 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01c7c064:
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  FUN_01c7c0f0(uVar5,*(undefined8 *)*param_2,param_2[1]);
  FUN_00c5db00(uVar5,0);
  *(undefined8 *)puVar3 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
  return;
}


