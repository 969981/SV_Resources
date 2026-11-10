/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fab594; name: FUN_00fab594
 */


void FUN_00fab594(undefined2 *param_1)

{
  *(undefined8 *)(param_1 + 6) = 0x3f80000000000000;
  param_1[1] = param_1[1] & 0xfff0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *param_1 = 0x500;
  return;
}


