/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029aad04; name: FUN_029aad04
 */


undefined8 FUN_029aad04(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (((*param_3 == 1) && (piVar2 = *(int **)(param_1 + 0x28), piVar2 != (int *)0x0)) &&
     (*piVar2 != 0)) {
    uVar1 = FUN_029acddc(param_1,param_2,piVar2,(char)param_3[6]);
    return uVar1;
  }
  return 0;
}


