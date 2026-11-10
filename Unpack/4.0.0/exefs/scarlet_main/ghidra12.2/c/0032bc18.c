/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032bc18; name: FUN_0032bc18
 */


void FUN_0032bc18(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  
  plVar4 = *(long **)PTR_DAT_047ccc18;
  if ((plVar4 == (long *)0x0) || (*plVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar1 = (long *)(*plVar4 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_1 = *plVar4;
  return;
}


