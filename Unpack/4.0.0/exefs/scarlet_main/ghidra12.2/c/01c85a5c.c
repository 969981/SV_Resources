/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c85a5c; name: FUN_01c85a5c
 */


undefined8 FUN_01c85a5c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_047d38f8;
  lVar6 = *(long *)PTR_DAT_047d38f8;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    bVar2 = true;
LAB_01c85a8c:
    if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)) {
      uVar7 = FUN_00d97840(0x40,8);
    }
    else {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + -8);
      uVar7 = *puVar5;
      *(undefined8 **)(param_1 + 0x30) = puVar5;
    }
    if (!bVar2) {
      *(undefined8 *)puVar3 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    }
    return uVar7;
  }
  uVar7 = nn::os::GetCurrentThread();
  while (*(long *)puVar3 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(undefined8 *)puVar3 = uVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01c85af4;
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
            *(undefined8 *)puVar3 = uVar7;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01c85af4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(undefined8 *)puVar3 = uVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01c85af4:
  bVar2 = false;
  goto LAB_01c85a8c;
}


