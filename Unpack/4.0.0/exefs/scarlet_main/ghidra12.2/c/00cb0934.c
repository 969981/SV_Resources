/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb0934; name: FUN_00cb0934
 */


void FUN_00cb0934(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *local_8;
  
  if ((*PTR_DAT_047d8c00 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c00);
    if (iVar4 != 0) {
      FUN_00100190(param_1,PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
  }
  lVar6 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar6;
  uVar5 = *(undefined8 *)(lVar6 + 0x70);
  plVar7 = (long *)*param_2;
  local_8 = plVar7;
  if (plVar7 == (long *)0x0) {
    FUN_00cb128c(param_1,uVar5,&local_8);
  }
  else {
    if (plVar7[1] != 0) {
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00cb128c(param_1,uVar5,&local_8);
    if (plVar7[1] != 0) {
      plVar1 = plVar7 + 2;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00cb09dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x18))(plVar7);
        return;
      }
    }
  }
  return;
}


