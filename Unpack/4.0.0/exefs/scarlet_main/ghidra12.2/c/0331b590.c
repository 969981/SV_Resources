/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0331b590; name: FUN_0331b590
 */


void FUN_0331b590(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  long local_38;
  ulong *puStack_30;
  ulong local_28;
  
  local_38 = *param_1;
  puStack_30 = *(ulong **)(param_1[1] + 8);
  local_28 = 0;
  puVar7 = puStack_30;
  if (puStack_30 != (ulong *)0x0) {
    do {
      uVar8 = *puVar7;
      if (((uint)uVar8 >> 2 & 1) != 0) {
        local_28 = puVar7[(uVar8 >> 1 & 1) + (uVar8 & 1) + 2];
        goto LAB_0331b5dc;
      }
      puVar7 = (ulong *)puVar7[1];
    } while (puVar7 != (ulong *)0x0);
    local_28 = 0;
  }
LAB_0331b5dc:
  lVar6 = local_38;
  if ((local_28 & 1) != 0) {
    piVar1 = (int *)((local_28 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *param_1;
  }
  if ((lVar6 == 0) || (uVar8 = FUN_031e198c(param_1[1],&DAT_03c62ce4,&DAT_03c62ce8,1), uVar8 < 2)) {
    local_48 = 0;
    local_40 = 0;
    local_50 = 0;
  }
  else {
    FUN_031e32f0(&local_50,param_1,uVar8);
  }
  FUN_031e7578(&local_50,&local_38);
  if ((local_40 & 1) != 0) {
    plVar5 = (long *)(local_40 & 0xfffffffffffffffe);
    plVar2 = plVar5 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((local_28 & 1) != 0) {
    plVar5 = (long *)(local_28 & 0xfffffffffffffffe);
    plVar2 = plVar5 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return;
}


