/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d955c; name: FUN_021d955c
 */


undefined8 FUN_021d955c(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if ((DAT_0485942c == '\x01') && (plVar2 = (long *)FUN_021dad60(), plVar2 != (long *)0x0)) {
    plVar6 = (long *)(param_1 + 0x80);
    plVar4 = (long *)*plVar6;
    if (plVar4 != (long *)0x0) {
      plVar5 = plVar6;
      do {
        lVar1 = 0x10;
        if (param_2 <= (ulong)plVar4[4]) {
          lVar1 = 8;
          plVar5 = plVar4;
        }
        plVar4 = *(long **)((long)plVar4 + lVar1);
      } while (plVar4 != (long *)0x0);
      if (plVar5 != plVar6) {
                    /* WARNING: Could not recover jumptable at 0x021d95d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,(int)plVar5[6]);
        return uVar3;
      }
    }
  }
  return 0;
}


