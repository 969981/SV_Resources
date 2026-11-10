/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029de110; name: FUN_029de110
 */


undefined1  [16] FUN_029de110(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  
  plVar5 = (long *)(param_1 + 0x140);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_029de150;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar5 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_029de150;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_029de150:
  plVar5 = *(long **)(param_1 + 0x178);
  plVar1 = *(long **)(param_1 + 0x180);
  auVar6 = ZEXT816(0x3f800000);
  if (plVar5 != plVar1) {
    while (*(long *)(*plVar5 + 0x1d0) != *param_3) {
      plVar5 = plVar5 + 1;
      if (plVar1 == plVar5) goto LAB_029de190;
    }
  }
  auVar6 = ZEXT816(0x3f800000);
  if ((plVar5 != plVar1) && (auVar6 = ZEXT816(0x3f800000), *plVar5 != 0)) {
    auVar6 = FUN_00d209f8(*plVar5,param_2);
  }
LAB_029de190:
  uVar8 = auVar6._8_8_;
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
  auVar7._8_8_ = uVar8;
  auVar7._0_8_ = auVar6._0_8_;
  return auVar7;
}


