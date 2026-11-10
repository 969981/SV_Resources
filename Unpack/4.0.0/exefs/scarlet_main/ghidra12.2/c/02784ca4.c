/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02784ca4; name: FUN_02784ca4
 */


void FUN_02784ca4(long *param_1,long param_2,long param_3)

{
  FUN_02784cf0(param_3 + 0x20,*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x28) * 0x20);
  FUN_02784d64(param_2);
  *param_1 = param_3;
  return;
}


