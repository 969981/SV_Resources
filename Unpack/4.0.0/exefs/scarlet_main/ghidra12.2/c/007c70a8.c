/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c70a8; name: FUN_007c70a8
 */


void FUN_007c70a8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = nn::os::GetSystemTick();
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  uVar1 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  return;
}


