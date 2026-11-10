/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f83090; name: FUN_00f83090
 */


void FUN_00f83090(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14) ^ *(uint *)(param_1 + 0x14) << 2;
  uVar1 = uVar1 ^ uVar1 >> 0xf;
  *(uint *)(param_1 + 0x14) = uVar1 ^ uVar1 << 0xd;
  return;
}


