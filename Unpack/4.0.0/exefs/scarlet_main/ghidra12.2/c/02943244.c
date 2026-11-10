/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02943244; name: FUN_02943244
 */


void FUN_02943244(undefined2 *param_1,ushort param_2,undefined2 param_3)

{
  *param_1 = param_3;
  param_1[1] = param_1[1] & 0xc000 | param_2 & 0x7f;
  return;
}


