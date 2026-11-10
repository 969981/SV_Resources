/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079d820; name: FUN_0079d820
 */


int FUN_0079d820(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_007c7184(param_1 + 0x1194);
  return (int)((uVar1 & 0xffffffff) * 0xfffd >> 0x20) + 2;
}


