/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dc884; name: FUN_018dc884
 */


bool FUN_018dc884(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_68;
  char local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar4 = FUN_012a717c(param_1,param_1 + 0x40);
  if ((uVar4 & 1) == 0) {
    return false;
  }
  plVar1 = (long *)(param_1 + 0xd0);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_018dc8d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_018dc8d0;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_018dc8d0:
  puVar6 = (undefined8 *)FUN_012a7334(param_1 + 0x48,param_1 + 0x40);
  FUN_018dca0c(local_60,*puVar6,param_2);
  if (*(char *)(param_1 + 0xb0) == '\0') {
    if (local_60[0] == '\0') {
LAB_018dc9bc:
      local_68 = 0xb6e99426814d708d;
      puVar6 = (undefined8 *)FUN_018dcb28(param_1 + 0x48,&local_68);
      FUN_018dca0c(local_60,*puVar6,param_2);
      if (*(char *)(param_1 + 0xb0) != '\0') {
        if (local_60[0] == '\0') {
          *(undefined1 *)(param_1 + 0xb0) = 0;
          goto LAB_018dc920;
        }
        goto LAB_018dc99c;
      }
      if (local_60[0] == '\0') goto LAB_018dc920;
    }
    *(undefined8 *)(param_1 + 0xb8) = local_58;
    *(undefined1 *)(param_1 + 0xb0) = 1;
    *(undefined8 *)(param_1 + 0xc0) = uStack_50;
    *(undefined8 *)(param_1 + 200) = local_48;
  }
  else {
    if (local_60[0] == '\0') {
      *(undefined1 *)(param_1 + 0xb0) = 0;
      goto LAB_018dc9bc;
    }
LAB_018dc99c:
    *(undefined8 *)(param_1 + 0xc0) = uStack_50;
    *(undefined8 *)(param_1 + 200) = local_48;
    *(undefined8 *)(param_1 + 0xb8) = local_58;
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0xc0);
LAB_018dc920:
  *(undefined8 *)(param_1 + 0xd0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd8));
  return *(char *)(param_1 + 0xb0) != '\0';
}


