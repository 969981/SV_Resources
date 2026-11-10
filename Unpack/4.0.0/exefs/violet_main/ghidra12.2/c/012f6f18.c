/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f6f18; name: FUN_012f6f18
 */


void FUN_012f6f18(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 auStack_a0 [20];
  
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
    if (cVar2 == '\0') goto LAB_012f6f70;
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
          if (cVar2 == '\0') goto LAB_012f6f70;
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
LAB_012f6f70:
  auStack_a0[0] = *param_2;
  local_c0 = &LAB_00d9f430;
  local_b8 = FUN_02dfdb98;
  local_b0 = &LAB_02dfdb9c;
  local_a8 = &LAB_02dfdba8;
  FUN_012f6980(lVar5 + 0x230,&local_c0);
  pcVar4 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar4)(auStack_a0);
  }
  *(undefined1 *)(lVar5 + 0x268) = 1;
  *(undefined1 *)(lVar5 + 0x288) = 1;
  *(undefined8 *)(lVar5 + 0x270) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x278));
  return;
}


