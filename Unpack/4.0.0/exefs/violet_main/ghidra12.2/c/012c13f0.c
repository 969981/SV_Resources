/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c13f0; name: FUN_012c13f0
 */


void FUN_012c13f0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [144];
  
  do {
    lVar5 = param_1;
    param_1 = lVar5;
    if (*(long *)(lVar5 + 0x1a8) != 0) {
      param_1 = *(long *)(lVar5 + 0x1a8);
    }
  } while (param_1 != lVar5);
  if ((*(byte *)(lVar5 + 0x1b8) >> 4 & 1) != 0) {
    plVar1 = (long *)(lVar5 + 0x270);
    lVar6 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x278));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_012c1454;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_012c1454:
    local_b0 = &LAB_02c7b7b8;
    local_a8 = FUN_02c7b834;
    local_a0 = &LAB_02c7b838;
    puStack_98 = &LAB_02c7b83c;
    FUN_017834d4(lVar5 + 0x230,&local_b0);
    pcVar4 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = (undefined1 *)0x0;
      puStack_98 = (undefined1 *)0x0;
      local_b0 = (undefined1 *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar4)(auStack_90);
    }
    *(undefined1 *)(lVar5 + 0x268) = 1;
    *(undefined1 *)(lVar5 + 0x288) = 1;
    *(undefined8 *)(lVar5 + 0x270) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x278));
  }
  return;
}


