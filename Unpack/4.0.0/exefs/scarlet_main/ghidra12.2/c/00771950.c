/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00771950; name: FUN_00771950
 */


void FUN_00771950(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = PTR_DAT_047cbe90;
  plVar6 = (long *)param_1[0x34];
  *param_1 = (long)(PTR_DAT_047d0700 + 0x10);
  param_1[0x26] = (long)(puVar4 + 0x10);
  if (plVar6 == (long *)0x0) {
LAB_0077199c:
    plVar6 = (long *)param_1[0x2e];
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) goto LAB_0077199c;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = (long *)param_1[0x2e];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar4 = PTR_DAT_047cbb08;
  if (param_1[0x11] != 0) {
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0xc0))();
  }
  plVar6 = (long *)param_1[0xb];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      lVar5 = param_1[8];
      goto joined_r0x00771a74;
    }
  }
  lVar5 = param_1[8];
joined_r0x00771a74:
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00771a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)puVar4 + 0xc0))();
  return;
}


