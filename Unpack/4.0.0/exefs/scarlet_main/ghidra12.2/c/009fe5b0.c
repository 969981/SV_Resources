/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 009fe5b0; name: FUN_009fe5b0
 */


undefined8 FUN_009fe5b0(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_28;
  
  plVar5 = (long *)FUN_00c41a10(param_1,1);
  if (plVar5 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar5;
  }
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar10 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar10;
  if (lVar8 != 0) {
    FUN_009ff160(lVar8);
    puVar3 = PTR_DAT_047d38f8;
    lVar9 = *(long *)PTR_DAT_047d38f8;
    lVar6 = nn::os::GetCurrentThread();
    local_28 = lVar8;
    if (lVar6 == lVar9) {
      FUN_01cf53ec(lVar10 + 0x28,&local_28);
    }
    else {
      uVar7 = nn::os::GetCurrentThread();
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
              if (cVar1 == '\0') goto LAB_009fe68c;
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
LAB_009fe68c:
      FUN_01cf53ec(lVar10 + 0x28,&local_28);
      *(undefined8 *)puVar3 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    }
  }
  return 0;
}


