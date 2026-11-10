/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e0e10; name: FUN_017e0e10
 */


void FUN_017e0e10(long param_1)

{
  ulong uVar1;
  
  FUN_015c96b8(param_1 + 0x188);
  uVar1 = FUN_015c967c(param_1 + 0x120);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_017e182c(param_1);
  FUN_017e0e58(param_1);
  return;
}


