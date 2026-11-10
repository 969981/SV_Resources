/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00892a50; name: FUN_00892a50
 */


void FUN_00892a50(undefined8 param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_2 + 0x210) = *param_4;
  *(undefined4 *)(param_2 + 0x214) = param_4[1];
  *(undefined4 *)(param_2 + 0x218) = *param_3;
  *(undefined4 *)(param_2 + 0x21c) = param_3[1];
  FUN_00892ed4(param_1,param_2 + 0x40);
  return;
}


