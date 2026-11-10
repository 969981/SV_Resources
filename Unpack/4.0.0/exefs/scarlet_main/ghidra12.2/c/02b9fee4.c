/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b9fee4; name: FUN_02b9fee4
 */


long FUN_02b9fee4(long *param_1)

{
  short *psVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  short sVar9;
  
  lVar8 = *param_1;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02b9ff40;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02b9ff40:
        bVar6 = false;
      }
      if (bVar6) {
        if (*(long *)(lVar8 + 0x10) == 0) {
          return 0;
        }
        lVar2 = *(long *)param_1[2];
        lVar3 = ((long *)param_1[2])[1];
        plVar7 = (long *)(*(long *)(lVar8 + 0x10) + -8);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        return lVar3 - lVar2 >> 3;
      }
      sVar9 = sVar4;
    } while (sVar4 != 0);
  }
  return 0;
}


