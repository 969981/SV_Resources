/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f9c60; name: FUN_003f9c60
 */


undefined8 FUN_003f9c60(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) == 0x18) {
    uVar1 = FUN_003fa690();
    return uVar1;
  }
  return 0;
}


