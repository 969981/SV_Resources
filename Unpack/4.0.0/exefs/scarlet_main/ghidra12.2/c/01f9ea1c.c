/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9ea1c; name: FUN_01f9ea1c
 */


void FUN_01f9ea1c(long param_1,byte param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  
  *(byte *)(param_1 + 0x141) = param_2 & 1;
  plVar5 = (long *)FUN_00cbbb00();
  lVar6 = *plVar5;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01f9ea80;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f9ea80:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) == 0) {
          return;
        }
        plVar5 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        (**(code **)(*plVar5 + 0x60))(plVar5);
        FUN_0143cdb0(plVar5,param_2 & 1);
        return;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


