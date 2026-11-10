/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01980d08; name: FUN_01980d08
 */


void FUN_01980d08(long param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *local_28;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  if ((*param_2 == '\x01') &&
     (lVar5 = *(long *)(param_2 + 8), param_2[8] = '\0', param_2[9] = '\0', param_2[10] = '\0',
     param_2[0xb] = '\0', param_2[0xc] = '\0', param_2[0xd] = '\0', param_2[0xe] = '\0',
     param_2[0xf] = '\0', lVar5 != 0)) {
    FUN_01a990f8(param_2 + 0x10);
  }
  puVar3 = PTR_DAT_047d38f8;
  lVar6 = *(long *)PTR_DAT_047d38f8;
  lVar5 = nn::os::GetCurrentThread();
  local_28 = param_2;
  if (lVar5 == lVar6) {
    FUN_01980e38(param_1 + 0x28,&local_28);
    return;
  }
  uVar4 = nn::os::GetCurrentThread();
  while (*(long *)puVar3 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(undefined8 *)puVar3 = uVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01980dc8;
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
            *(undefined8 *)puVar3 = uVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01980dc8;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(undefined8 *)puVar3 = uVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01980dc8:
  FUN_01980e38(param_1 + 0x28,&local_28);
  *(undefined8 *)puVar3 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
  return;
}


