/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f5154; name: FUN_005f5154
 */


void FUN_005f5154(long param_1,undefined8 *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_005f5154(param_1,*param_2);
  FUN_005f5154(param_1,param_2[1]);
  plVar6 = (long *)param_2[9];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      bVar2 = *(byte *)(param_2 + 4);
      goto joined_r0x005f51a0;
    }
  }
  bVar2 = *(byte *)(param_2 + 4);
joined_r0x005f51a0:
  if ((bVar2 & 1) != 0) {
    (**(code **)(*(long *)param_2[7] + 0x18))
              ((long *)param_2[7],param_2[6],param_2[4] & 0xfffffffffffffffe,1);
  }
                    /* WARNING: Could not recover jumptable at 0x005f51e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_2,0x50,8);
  return;
}


