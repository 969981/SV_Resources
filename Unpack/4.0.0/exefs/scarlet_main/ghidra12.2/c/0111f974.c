/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0111f974; name: FUN_0111f974
 */


void FUN_0111f974(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  uVar2 = *(undefined4 *)(param_2 + 0x520);
  FUN_00f338dc(&local_68);
  lVar5 = local_68;
  plVar1 = (long *)(local_68 + 8);
  lVar8 = *plVar1;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar8) {
    uVar7 = FUN_011201f0(lVar5 + 0x20,param_3);
LAB_0111f9fc:
    *(undefined4 *)(param_2 + 0x520) = uVar2;
    param_1[2] = uStack_60;
    *param_1 = uVar7;
    param_1[1] = local_68;
    *(undefined1 *)(param_1 + 3) = local_58;
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0111f9dc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x10));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x10));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0111f9dc;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0111f9dc:
  uVar7 = FUN_011201f0(lVar5 + 0x20,param_3);
  *(undefined8 *)(lVar5 + 8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x10));
  goto LAB_0111f9fc;
}


