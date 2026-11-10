/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017c3fdc; name: FUN_017c3fdc
 */


void FUN_017c3fdc(long *param_1,char *param_2)

{
  short *psVar1;
  long lVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  
  cVar3 = *param_2;
  if (cVar3 == '\x02') {
    lVar7 = *(long *)(param_2 + 8);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar8 = *(short *)(lVar7 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar8) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_017c4050;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_017c4050:
          bVar5 = false;
        }
        if (bVar5) {
          lVar2 = 0;
          if (*(long *)(lVar7 + 0x10) != 0) {
            lVar2 = *(long *)(lVar7 + 0x10) + -0x28;
          }
          *param_1 = lVar2;
          return;
        }
        sVar8 = sVar4;
      } while (sVar4 != 0);
    }
  }
  else if ((cVar3 == '\x01') || (cVar3 == '\0')) {
    plVar6 = *(long **)(param_2 + 8);
    *param_1 = (long)plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x017c4018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x58))();
    return;
  }
  *param_1 = 0;
  return;
}


