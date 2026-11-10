/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e0a530; name: FUN_00e0a530
 */


void FUN_00e0a530(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(*(long *)(param_1 + 0x130) + 0x100) != 0) {
    FUN_00e0ac24(*param_2);
  }
  FUN_00e0a6e4(*(long *)(param_1 + 0x48) + 600,param_1,&LAB_02e704e4,0);
  FUN_00e0a7a4(*(long *)(param_1 + 0x48) + 0x260,param_1,&LAB_02e70538,0);
  FUN_00e0a864(*(long *)(param_1 + 0x48) + 0x268,param_1,&LAB_02e70598,0);
  FUN_00e0a924(*(long *)(param_1 + 0x48) + 0x270,param_1,&LAB_02e705f4,0);
  FUN_00e0a9e4(*(long *)(param_1 + 0x48) + 0x278,param_1,&LAB_02e705f8,0);
  FUN_00e0aaa4(*(long *)(param_1 + 0x48) + 0x280,param_1,&LAB_02e705fc,0);
  FUN_00e0ab64(*(long *)(param_1 + 0x48) + 0x288,param_1,&LAB_02e70600,0);
  plVar4 = *(long **)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  plVar4 = *(long **)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = 0;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  plVar4 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 4;
  return;
}


