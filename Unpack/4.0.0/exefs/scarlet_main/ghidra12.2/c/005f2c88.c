/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f2c88; name: FUN_005f2c88
 */


void FUN_005f2c88(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)(PTR_DAT_047ceb70 + 0x10);
  if (*(char *)((long)param_1 + 0xb1) != '\0') {
    if ((*(byte *)(param_1 + 10) & 1) != 0) {
      (**(code **)(*(long *)param_1[0xd] + 0x18))
                ((long *)param_1[0xd],param_1[0xc],param_1[10] & 0xfffffffffffffffe,1);
    }
    if ((*(byte *)(param_1 + 6) & 1) != 0) {
      (**(code **)(*(long *)param_1[9] + 0x18))
                ((long *)param_1[9],param_1[8],param_1[6] & 0xfffffffffffffffe,1);
    }
    *(undefined1 *)((long)param_1 + 0xb1) = 0;
  }
  plVar5 = (long *)param_1[0x15];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
      FUN_006c53d4(param_1);
      return;
    }
  }
  FUN_006c53d4(param_1);
  return;
}


