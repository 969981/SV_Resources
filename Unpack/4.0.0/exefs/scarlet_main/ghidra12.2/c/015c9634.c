/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c9634; name: FUN_015c9634
 */


void FUN_015c9634(long param_1)

{
  ulong uVar1;
  
  FUN_015c96b8(param_1 + 0x230);
  uVar1 = FUN_015c967c(param_1 + 0x120);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_015cae6c(param_1);
  FUN_015c99d4(param_1);
  return;
}


