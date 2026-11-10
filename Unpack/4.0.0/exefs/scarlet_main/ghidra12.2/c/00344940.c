/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00344940; name: FUN_00344940
 */


void FUN_00344940(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00343d90();
  }
  uVar1 = FUN_003438f0(param_2);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}


