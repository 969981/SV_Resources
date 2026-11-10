/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012dcb00; name: FUN_012dcb00
 */


void FUN_012dcb00(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(param_1 + 0x10);
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


