/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f296b0; name: FUN_00f296b0
 */


undefined1  [16] FUN_00f296b0(char *param_1,code *param_2,ulong param_3)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  short sVar8;
  undefined1 auVar9 [16];
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x02') {
    if (*(long *)(param_1 + 8) == 0) {
      return ZEXT816(0);
    }
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar6 == 0) {
      return ZEXT816(0);
    }
    plVar5 = (long *)(lVar6 + lVar1 + -0x28);
  }
  else {
    if (cVar3 == '\x03') {
      lVar6 = *(long *)(param_1 + 8);
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar6 + 0x1a);
        sVar8 = *(short *)(lVar6 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar8) {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_00f2978c;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00f2978c:
            bVar7 = false;
          }
          if (bVar7) {
            plVar5 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
            if (*(long *)(lVar6 + 0x10) == 0) {
              return ZEXT816(0);
            }
            if ((param_3 & 1) != 0) {
              param_2 = *(code **)(param_2 + *(long *)((long)plVar5 + lVar1));
            }
            auVar9 = (*param_2)(0);
            (**(code **)(*plVar5 + 0x60))(plVar5);
            return auVar9;
          }
          sVar8 = sVar4;
        } while (sVar4 != 0);
      }
      return ZEXT816(0);
    }
    if ((cVar3 != '\x01') && (cVar3 != '\0')) {
      return ZEXT816(0);
    }
    if (*(long *)(param_1 + 8) == 0) {
      return ZEXT816(0);
    }
    plVar5 = (long *)(*(long *)(param_1 + 8) + lVar1);
  }
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar5);
  }
  auVar9 = (*param_2)(0);
  return auVar9;
}


