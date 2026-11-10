/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0264b324; name: FUN_0264b324
 */


uint FUN_0264b324(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((*param_1 == 0) || (lVar2 = FUN_0264b374(*param_1 + 8), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))();
    uVar1 = ~uVar1 & 1;
  }
  return uVar1;
}


