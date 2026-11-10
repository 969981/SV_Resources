/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dba40c; name: FUN_00dba40c
 */


ulong FUN_00dba40c(long param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar8 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar8;
  if (*(undefined8 **)(param_1 + 0x50) == (undefined8 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = **(undefined8 **)(param_1 + 0x50);
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x90) != -1)) {
    *(undefined8 *)(lVar8 + (long)*(int *)(lVar5 + 0x90) * 8 + 0x6a0) = uVar9;
  }
  puVar3 = PTR_DAT_047d38f8;
  lVar10 = *(long *)(param_1 + 0x100);
  lVar5 = *(long *)PTR_DAT_047d38f8;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar5) {
    bVar7 = true;
LAB_00dba4b0:
    uVar9 = *(undefined8 *)(lVar10 + 0x70);
    uVar6 = FUN_00dba620(uVar9,*(undefined8 *)(lVar10 + 0x80),*(undefined8 *)(param_1 + 0xc0),
                         param_2,1);
    bVar1 = (uVar6 & 1) == 0;
    if (bVar1) {
      uVar6 = 0;
    }
    else {
      lVar8 = FUN_00c92df0(uVar9,0xffffffff,0);
      uVar6 = lVar8 << 0x20;
    }
    FUN_00c5db00(uVar9,0);
    if (!bVar7) {
      *(undefined8 *)puVar3 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    }
    return uVar6 | !bVar1;
  }
  uVar9 = nn::os::GetCurrentThread();
  while (*(long *)puVar3 == 0) {
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *(undefined8 *)puVar3 = uVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00dba534;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
  do {
    if (*(long *)puVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
        while (*(long *)puVar3 == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar7) {
            *(undefined8 *)puVar3 = uVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00dba534;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *(undefined8 *)puVar3 = uVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00dba534:
  bVar7 = false;
  goto LAB_00dba4b0;
}


