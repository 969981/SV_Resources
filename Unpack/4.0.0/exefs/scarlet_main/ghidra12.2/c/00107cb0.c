/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00107cb0; name: FUN_00107cb0
 */


void FUN_00107cb0(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = param_2 >> 3;
  uVar2 = (ulong)(uVar1 + 0x20f & 0x3ffffff0);
  *param_1 = uVar2;
  param_1[1] = (ulong)((param_2 >> 4) + 0x20f & 0x1ffffff0);
  param_1[4] = uVar2;
  param_1[5] = uVar2;
  param_1[2] = (ulong)((((uVar1 & 0x7fffff) << 6 | 0xf) + 0x200 & 0x3fffffc0) + 0x40);
  param_1[3] = (ulong)((param_2 & 0x1ffffff8) + 0x20f & 0x3ffffff0 | 8);
  uVar2 = (ulong)((param_2 >> 2 & 0x1ffffffe) + 0x40f & 0x3ffffff0);
  param_1[8] = (ulong)(((uVar1 * 0x30 & 0x1ffffff0 | 0xf) + 0x200 & 0x3ffffff0) + 0x40);
  param_1[6] = uVar2;
  param_1[7] = uVar2;
  return;
}


