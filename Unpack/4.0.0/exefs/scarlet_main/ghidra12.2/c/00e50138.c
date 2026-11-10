/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e50138; name: FUN_00e50138
 */


long * FUN_00e50138(long param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 == (long *)0x0) {
    *param_2 = (long)plVar3;
    return plVar3;
  }
  plVar3 = (long *)(param_1 + 8);
  uVar1 = *param_3;
  do {
    uVar5 = plVar4[4];
    if ((uVar1 < uVar5) || ((uVar1 <= uVar5 && (param_3[1] < (ulong)plVar4[5])))) {
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_00e501a8;
      plVar2 = (long *)*plVar4;
    }
    else {
      if ((uVar1 <= uVar5) && (param_3[1] <= (ulong)plVar4[5])) {
LAB_00e501a8:
        *param_2 = (long)plVar4;
        return plVar3;
      }
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_00e501a8;
    }
    plVar4 = plVar2;
  } while( true );
}


