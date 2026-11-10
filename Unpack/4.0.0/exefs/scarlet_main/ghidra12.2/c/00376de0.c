/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00376de0; name: FUN_00376de0
 */


void FUN_00376de0(int param_1,long param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == 2) {
    if (param_2 != 0) {
      FUN_00375d3c(param_2);
      FUN_0049e790(PTR_LAB_047cba48,param_2);
      return;
    }
  }
  else if (param_1 == 3) {
    plVar1 = &DAT_047f1180 + (ulong)(param_3 & 0xf) * 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


