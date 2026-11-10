/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d33c4; name: FUN_021d33c4
 */


long * FUN_021d33c4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  if ((long *)*plVar3 == (long *)0x0) {
    *param_2 = plVar3;
    return plVar3;
  }
  plVar4 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar3;
  do {
    uVar1 = FUN_021d3370(param_3,plVar3 + 4);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_021d3370(plVar3 + 4,param_3);
      if ((uVar1 & 1) == 0) {
LAB_021d3438:
        *param_2 = plVar3;
        return plVar4;
      }
      plVar4 = plVar3 + 1;
      plVar2 = (long *)*plVar4;
      if (plVar2 == (long *)0x0) goto LAB_021d3438;
    }
    else {
      plVar2 = (long *)*plVar3;
      if (plVar2 == (long *)0x0) {
        *param_2 = plVar3;
        return plVar3;
      }
      plVar4 = plVar3;
    }
    plVar3 = plVar2;
  } while( true );
}


