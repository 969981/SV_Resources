/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0265efcc; name: FUN_0265efcc
 */


void FUN_0265efcc(long *param_1,long param_2)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  undefined8 local_28;
  
  if (*(short *)(param_2 + 0x1a) != 0) {
    psVar1 = (short *)(param_2 + 0x1a);
    sVar6 = *(short *)(param_2 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar6) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0265f020;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0265f020:
        bVar5 = false;
      }
      if (bVar5) {
        local_28 = 0;
        lVar2 = 0;
        if (*(long *)(param_2 + 0x10) != 0) {
          lVar2 = *(long *)(param_2 + 0x10) + -0x28;
        }
        FUN_02650eb4(&local_28);
        *param_1 = lVar2;
        return;
      }
      sVar6 = sVar3;
    } while (sVar3 != 0);
  }
  *param_1 = 0;
  return;
}


