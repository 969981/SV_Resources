/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0133d500; name: FUN_0133d500
 */


void FUN_0133d500(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  do {
    lVar5 = param_1;
    param_1 = lVar5;
    if (*(long *)(lVar5 + 0x1a8) != 0) {
      param_1 = *(long *)(lVar5 + 0x1a8);
    }
  } while (param_1 != lVar5);
  if ((*(byte *)(lVar5 + 0x1b8) >> 4 & 1) == 0) {
    return;
  }
  plVar1 = (long *)(lVar5 + 0x270);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0133d558;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x278));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x278));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0133d558;
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
LAB_0133d558:
  local_a0 = *param_2;
  uStack_98 = param_2[1];
  local_c0 = FUN_021aa400;
  local_b8 = FUN_02b55e54;
  local_b0 = &LAB_02b55e58;
  puStack_a8 = &LAB_02b55e64;
  FUN_00f20aa8(lVar5 + 0x230,&local_c0);
  pcVar4 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar4)(&local_a0);
  }
  *(undefined1 *)(lVar5 + 0x268) = 1;
  *(undefined1 *)(lVar5 + 0x288) = 1;
  *(undefined8 *)(lVar5 + 0x270) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x278));
  return;
}


