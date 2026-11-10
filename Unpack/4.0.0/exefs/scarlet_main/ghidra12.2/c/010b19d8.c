/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010b19d8; name: FUN_010b19d8
 */


void FUN_010b19d8(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  *(undefined8 *)(param_1 + 0x50) = param_2[2];
  FUN_010a6424(param_1 + 0x58,param_2[3]);
  FUN_010a6424(param_1 + 0x60,param_2[4]);
  FUN_010a6560(param_1 + 0x68,param_2[5]);
  return;
}


