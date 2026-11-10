/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f98924; name: FUN_01f98924
 */


undefined * FUN_01f98924(long *param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  undefined8 local_18;
  
  lVar7 = *param_1;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01f989f0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f989f0:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          plVar9 = (long *)(*(long *)(lVar7 + 0x10) + -8);
          lVar7 = *(long *)param_1[2];
          if (param_2 < (ulong)(((long *)param_1[2])[1] - lVar7 >> 3)) {
            puVar6 = (undefined *)(*(long *)(lVar7 + param_2 * 8) + 8);
          }
          else if (((*PTR_DAT_047d8c28 & 1) == 0) &&
                  (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar5 != 0)) {
            local_18 = FUN_00d44228();
            puVar6 = PTR_DAT_047d8c30;
            FUN_00d1e764(PTR_DAT_047d8c30,&local_18);
            FUN_00100190(PTR_LAB_047d9240,puVar6,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8c28);
          }
          else {
            puVar6 = PTR_DAT_047d8c30;
          }
          (**(code **)(*plVar9 + 0x18))(plVar9);
          return puVar6;
        }
        break;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar5 != 0))
  {
    local_18 = FUN_00d44228();
    puVar6 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_18);
    FUN_00100190(PTR_LAB_047d9240,puVar6,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  else {
    puVar6 = PTR_DAT_047d8c30;
  }
  return puVar6;
}


