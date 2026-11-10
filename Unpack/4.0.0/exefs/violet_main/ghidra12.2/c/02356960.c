/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02356960; name: FUN_02356960
 */


void FUN_02356960(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined1 extraout_var;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar6 = *(long *)PTR_DAT_047d38f8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar6) {
    bVar5 = true;
LAB_02356998:
    FUN_02356a4c(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)param_2[1],param_2[2]);
    *(undefined1 *)*param_2 = extraout_var;
    if (bVar5) {
      return;
    }
    *(undefined8 *)puVar2 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    return;
  }
  uVar4 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *(undefined8 *)puVar2 = uVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_023569e4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
  do {
    if (*(long *)puVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
        while (*(long *)puVar2 == 0) {
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *(undefined8 *)puVar2 = uVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_023569e4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *(undefined8 *)puVar2 = uVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_023569e4:
  bVar5 = false;
  goto LAB_02356998;
}


