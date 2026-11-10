/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b96c0; name: FUN_002b96c0
 */


void FUN_002b96c0(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  lVar3 = *(long *)(*(long *)(param_1[2] + 0x18) + 0x30);
  if (((lVar3 != 0) && (param_2 == 0)) && (*(long **)(lVar3 + 0x10) == param_1)) {
    FUN_0036a810(param_1[8]);
    plVar6 = (long *)param_1[0x1e];
    param_1[8] = 0;
    if (param_1 + 0x1f != plVar6) {
      FUN_002b4f10(param_1,plVar6 + 4);
      plVar5 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar5 = plVar6 + 2;
        plVar4 = (long *)*plVar5;
        if ((long *)*plVar4 != plVar6) {
          do {
            lVar3 = *plVar5;
            plVar5 = (long *)(lVar3 + 0x10);
            plVar4 = (long *)*plVar5;
          } while (*plVar4 != lVar3);
        }
      }
      else {
        do {
          plVar4 = plVar5;
          plVar5 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((long *)param_1[0x1e] == plVar6) {
        param_1[0x1e] = (long)plVar4;
      }
      param_1[0x20] = param_1[0x20] + -1;
      FUN_01336080(param_1[0x1f],plVar6);
      if ((*(byte *)(plVar6 + 4) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar6[6]);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar6);
    }
  }
  plVar6 = param_1 + 1;
  do {
    lVar3 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    FUN_0049e790(PTR_LAB_047cba48,param_1);
  }
  if (param_2 < 5) {
    return;
  }
  FUN_00350fd0(param_2);
  return;
}


