/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b948c; name: FUN_017b948c
 */


void FUN_017b948c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar6 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar6;
  puVar3 = PTR_DAT_047d38f8;
  lVar8 = *(long *)(lVar6 + 0x460);
  lVar7 = *(long *)PTR_DAT_047d38f8;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar7) {
    FUN_017b95f0(*(undefined8 *)(lVar8 + 0x70),*(undefined8 *)(lVar8 + 0x80),param_1,param_2,param_3
                );
    return;
  }
  uVar5 = nn::os::GetCurrentThread();
  while (*(long *)puVar3 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(undefined8 *)puVar3 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_017b9538;
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
            *(undefined8 *)puVar3 = uVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_017b9538;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(undefined8 *)puVar3 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_017b9538:
  FUN_017b95f0(*(undefined8 *)(lVar8 + 0x70),*(undefined8 *)(lVar8 + 0x80),param_1,param_2,param_3);
  *(undefined8 *)puVar3 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
  return;
}


