/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00796534; name: FUN_00796534
 */


bool FUN_00796534(uint *param_1,uint *param_2)

{
  return (*param_2 >> 0xd & 0x1f) < (*param_1 >> 0xd & 0x1f);
}


