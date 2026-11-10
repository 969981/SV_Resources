/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00807e20; name: FUN_00807e20
 */


undefined4 FUN_00807e20(long param_1,ulong param_2)

{
  return *(undefined4 *)(param_1 + (param_2 & 0xff) * 0xc + 4);
}


