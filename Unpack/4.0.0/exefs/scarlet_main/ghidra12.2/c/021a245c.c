/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021a245c; name: FUN_021a245c
 */


undefined8 FUN_021a245c(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *local_38;
  
  uVar4 = FUN_00c70838(param_1 + 0xf0);
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(*(long *)(param_1 + 0x40) + 0x70))();
    if ((uVar4 & 1) == 0) {
      local_38 = (long *)(param_1 + 0x48);
      lVar8 = *local_38;
      lVar6 = nn::os::GetCurrentThread();
      if (lVar6 != lVar8) {
        lVar6 = nn::os::GetCurrentThread();
LAB_021a24d8:
        if (*local_38 == 0) goto code_r0x021a24e0;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
        do {
          if (*local_38 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
              while (*local_38 == 0) {
                cVar2 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(local_38,0x10);
                if (bVar7) {
                  *local_38 = lVar6;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_021a24e8;
              }
            } while( true );
          }
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(local_38,0x10);
          if (bVar7) {
            *local_38 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_021a24e8:
        bVar7 = false;
        goto LAB_021a24ec;
      }
      local_38 = (long *)0x0;
      bVar7 = true;
LAB_021a24ec:
      plVar9 = *(long **)(param_1 + 0x60);
      plVar1 = *(long **)(param_1 + 0x68);
      if (plVar9 != plVar1) {
        uVar3 = 0;
        do {
          if (uVar3 == 0) {
            uVar3 = (**(code **)(*(long *)(*plVar9 + 0x548) + 0x10))(*plVar9 + 0x548,param_2);
          }
          else {
            uVar3 = 1;
          }
          plVar9 = plVar9 + 1;
          uVar3 = uVar3 & 1;
        } while (plVar1 != plVar9);
      }
      if (!bVar7) {
        *local_38 = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_38 + 1));
      }
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
code_r0x021a24e0:
  cVar2 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(local_38,0x10);
  if (bVar7) {
    *local_38 = lVar6;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_021a24e8;
  goto LAB_021a24d8;
}


