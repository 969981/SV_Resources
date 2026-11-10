/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040e5b0; name: FUN_0040e5b0
 */


void FUN_0040e5b0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x30);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


