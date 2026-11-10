/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d95450; name: FUN_00d95450
 */


void FUN_00d95450(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00d9549c();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00dcb834(param_1,param_2), (uVar1 & 1) == 0)) {
    FUN_00dcb5a4(param_1,param_2);
    return;
  }
  return;
}


