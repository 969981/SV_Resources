/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bad348; name: FUN_02bad348
 */


bool FUN_02bad348(long param_1)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  short sVar7;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar7 = *(short *)(lVar5 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar7) {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02bad3a0;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02bad3a0:
        bVar6 = false;
      }
      if (bVar6) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return false;
        }
        iVar2 = *(int *)(lVar5 + 0x100);
        (**(code **)(*(long *)(lVar5 + -0x28) + 0x60))();
        return iVar2 == 3;
      }
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  return false;
}


