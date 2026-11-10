/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b1d10; name: FUN_003b1d10
 */


int * FUN_003b1d10(long param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(long *)(param_1 + 8) + 0x90))(param_2);
  if (((piVar1 == (int *)0x0) || (param_3 != 0)) || (*piVar1 != 0)) {
    return piVar1;
  }
  return (int *)0x0;
}


