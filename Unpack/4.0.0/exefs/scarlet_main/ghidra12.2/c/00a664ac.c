/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a664ac; name: FUN_00a664ac
 */


uint FUN_00a664ac(long param_1,uint param_2)

{
  uint uVar1;
  
  if (2 < param_2) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)param_2 * 4 + 0xc);
  if ((uVar1 & 0x7fffffff) == 0) {
    return uVar1 >> 0x1f;
  }
  return 1;
}


