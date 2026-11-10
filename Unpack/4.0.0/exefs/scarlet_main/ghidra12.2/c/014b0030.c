/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014b0030; name: FUN_014b0030
 */


/* WARNING: Removing unreachable block (ram,0x014b01f8) */
/* WARNING: Removing unreachable block (ram,0x014b0200) */
/* WARNING: Removing unreachable block (ram,0x014b0208) */
/* WARNING: Removing unreachable block (ram,0x014b0210) */
/* WARNING: Removing unreachable block (ram,0x014b0218) */
/* WARNING: Removing unreachable block (ram,0x014b0288) */
/* WARNING: Removing unreachable block (ram,0x014b0220) */
/* WARNING: Removing unreachable block (ram,0x014b0224) */
/* WARNING: Removing unreachable block (ram,0x014b0198) */
/* WARNING: Removing unreachable block (ram,0x014b01a0) */
/* WARNING: Removing unreachable block (ram,0x014b01a8) */
/* WARNING: Removing unreachable block (ram,0x014b01b0) */
/* WARNING: Removing unreachable block (ram,0x014b01e8) */
/* WARNING: Removing unreachable block (ram,0x014b01c0) */

void FUN_014b0030(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  
  if (param_2 == 0) {
    FUN_00ca1a30(param_1);
  }
  else {
    puVar5 = (undefined8 *)FUN_00c5e120(param_1,8,1);
    if (((*PTR_DAT_047d38a0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d38a0);
    }
    lVar11 = *(long *)PTR_DAT_047d38a8;
    *(long *)PTR_DAT_047d38b0 = lVar11;
    puVar3 = PTR_DAT_047d38f8;
    lVar9 = *(long *)PTR_DAT_047d38f8;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 == lVar9) {
      bVar2 = true;
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
              if (cVar1 == '\0') goto LAB_014b0190;
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
LAB_014b0190:
      bVar2 = false;
    }
    if (*(long *)(lVar11 + 0x28) == *(long *)(lVar11 + 0x30)) {
      puVar10 = (undefined1 *)FUN_00d97840(0x40,8);
    }
    else {
      puVar8 = (undefined8 *)(*(long *)(lVar11 + 0x30) + -8);
      puVar10 = (undefined1 *)*puVar8;
      *(undefined8 **)(lVar11 + 0x30) = puVar8;
    }
    if (!bVar2) {
      *(undefined8 *)puVar3 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    }
    *puVar10 = 0;
    *(long *)(puVar10 + 8) = 0;
    *puVar10 = 0;
    *(long *)(puVar10 + 8) = param_2;
    *puVar5 = puVar10;
    FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)PTR_DAT_047dcd98);
    FUN_00c5e190(param_1,0xfffffffe);
  }
  return;
}


