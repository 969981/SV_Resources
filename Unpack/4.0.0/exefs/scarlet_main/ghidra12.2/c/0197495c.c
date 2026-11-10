/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197495c; name: FUN_0197495c
 */


void FUN_0197495c(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_018ce0ec(param_1,uVar1,0);
  return;
}


