/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027844c8; name: FUN_027844c8
 */


void FUN_027844c8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &DAT_045df630;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}


