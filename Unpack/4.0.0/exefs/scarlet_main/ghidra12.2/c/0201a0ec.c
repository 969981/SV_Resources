/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0201a0ec; name: FUN_0201a0ec
 */


undefined8 FUN_0201a0ec(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  
  if (((*param_2 == 0) || (*(long *)(*param_2 + 8) == 0)) ||
     (uVar1 = FUN_0201a27c(), (uVar1 & 1) == 0)) {
    FUN_00f0d910(param_1);
  }
  else {
    FUN_00f0d1a0(param_1,param_2);
  }
  return param_1;
}


