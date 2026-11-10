/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c2c10; name: FUN_007c2c10
 */


void FUN_007c2c10(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + 0x90;
    FUN_007c9e3c(lVar1);
  }
  FUN_007bfd58(*(int *)(param_1 + 0x84) + param_2);
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
  if (lVar1 == 0) {
    return;
  }
  FUN_007c9e44(lVar1);
  return;
}


