/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049e4a0; name: FUN_0049e4a0
 */


uint FUN_0049e4a0(void)

{
  uint uVar1;
  
  uVar1 = nn::time::IsInitialized();
  return uVar1 & 1;
}


