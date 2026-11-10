/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019e69e4; name: FUN_019e69e4
 */


undefined8 FUN_019e69e4(long param_1)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar5 = *(long *)PTR_DAT_047d38f8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar7 = true;
LAB_019e6a14:
    if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)) {
      uVar6 = FUN_00d97840(0x40,8);
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + -8);
      uVar6 = *puVar4;
      *(undefined8 **)(param_1 + 0x30) = puVar4;
    }
    if (!bVar7) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    return uVar6;
  }
  uVar6 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *(undefined8 *)puVar2 = uVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_019e6a6c;
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
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *(undefined8 *)puVar2 = uVar6;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_019e6a6c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *(undefined8 *)puVar2 = uVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_019e6a6c:
  bVar7 = false;
  goto LAB_019e6a14;
}


