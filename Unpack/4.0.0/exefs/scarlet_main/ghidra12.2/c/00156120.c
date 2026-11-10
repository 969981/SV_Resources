/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00156120; name: FUN_00156120
 */


uint FUN_00156120(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 0x80000000 >> (ulong)((uint)LZCOUNT(param_1) & 0x1f);
  }
  return uVar1;
}


