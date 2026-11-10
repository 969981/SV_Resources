/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01954534; name: FUN_01954534
 */


void FUN_01954534(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_02162064();
  if ((uVar1 & 1) == 0) {
    FUN_014254dc(param_1);
  }
  else {
    FUN_02162158(param_1,param_2);
  }
  return;
}


