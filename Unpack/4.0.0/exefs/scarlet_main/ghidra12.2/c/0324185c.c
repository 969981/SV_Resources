/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324185c; name: FUN_0324185c
 */


void FUN_0324185c(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x48);
  if (UNRECOVERED_JUMPTABLE == (code *)0x1) {
    plVar4 = (long *)(lVar3 + -8);
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 != 0) {
      return;
    }
  }
  else if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03241890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(lVar3,0);
    return;
  }
  (**(code **)(lVar3 + -0x10))(lVar3,0);
                    /* WARNING: Could not recover jumptable at 0x032418dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,(ulong)(lVar3 + -0x10) & 0xfffffffffffffff0,0);
  return;
}


