/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bfbbe0; name: FUN_01bfbbe0
 */


void FUN_01bfbbe0(long *param_1,long *param_2)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  
  lVar6 = *param_2;
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
        if (cVar4 != '\0') goto LAB_01bfbc28;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01bfbc28:
        bVar5 = false;
      }
      if (bVar5) {
        lVar2 = 0;
        if (*(long *)(lVar6 + 0x10) != 0) {
          lVar2 = *(long *)(lVar6 + 0x10) + -0x28;
        }
        *param_1 = lVar2;
        return;
      }
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  *param_1 = 0;
  return;
}


