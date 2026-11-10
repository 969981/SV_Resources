/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b04ae4; name: FUN_02b04ae4
 */


undefined4 FUN_02b04ae4(long param_1,ulong param_2)

{
  return *(undefined4 *)(param_1 + (param_2 & 0xffff) * 0x18 + 0x40);
}


