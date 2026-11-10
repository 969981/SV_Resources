/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c70838; name: FUN_00c70838
 */


undefined8 FUN_00c70838(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar8 = (long *)(param_1 + 0x10);
  lVar6 = *plVar8;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar6) {
    lVar2 = nn::os::GetCurrentThread();
LAB_00c70870:
    if (*plVar8 == 0) goto code_r0x00c70878;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x18));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x18));
          while (*plVar8 == 0) {
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00c70880;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00c70880:
    bVar5 = false;
    goto LAB_00c70884;
  }
  plVar8 = (long *)0x0;
  bVar5 = true;
LAB_00c70884:
  if ((*(long *)(param_1 + 8) == 0) ||
     (plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x48), plVar7 == (long *)0x0)) {
    uVar4 = 0;
  }
  else {
    do {
      if ((plVar7[2] == param_2) ||
         (uVar3 = FUN_00c70838(plVar7[2] + 0x40,param_2), (uVar3 & 1) != 0)) {
        uVar4 = 1;
        break;
      }
      plVar7 = (long *)*plVar7;
      uVar4 = 0;
    } while (plVar7 != (long *)0x0);
  }
  if (!bVar5) {
    *plVar8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
  }
  return uVar4;
code_r0x00c70878:
  cVar1 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar5) {
    *plVar8 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00c70880;
  goto LAB_00c70870;
}


