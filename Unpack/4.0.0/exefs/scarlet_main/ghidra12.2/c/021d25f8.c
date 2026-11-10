/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d25f8; name: FUN_021d25f8
 */


long * FUN_021d25f8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  if (plVar5 != (long *)0x0) {
    plVar4 = plVar3;
    do {
      uVar2 = FUN_021d3370(plVar5 + 4,param_2);
      lVar1 = 8;
      if ((uVar2 & 1) == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (uVar2 = FUN_021d3370(param_2,plVar4 + 4), (uVar2 & 1) == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}


