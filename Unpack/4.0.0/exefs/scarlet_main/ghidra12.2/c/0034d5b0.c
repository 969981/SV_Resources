/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034d5b0; name: FUN_0034d5b0
 */


void FUN_0034d5b0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_1 != (undefined8 *)0x0) && (plVar3 = (long *)*param_1, plVar3 != (long *)0x0)) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0034d5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[3])(param_1[4]);
      return;
    }
  }
  return;
}


