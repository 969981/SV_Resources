/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d32058; name: FUN_00d32058
 */


undefined1  [16]
FUN_00d32058(long *param_1,code *param_2,ulong param_3,undefined2 *param_4,undefined8 param_5)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  lVar6 = *param_1;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar7) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00d320c8;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d320c8:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar6 + 0x10) == 0) {
          return ZEXT816(0);
        }
        plVar8 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        plVar2 = (long *)((long)plVar8 + ((long)param_3 >> 1));
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar2);
        }
        auVar9 = (*param_2)(plVar2,*param_4,param_5);
        (**(code **)(*plVar8 + 0x60))(plVar8);
        return auVar9;
      }
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  return ZEXT816(0);
}


