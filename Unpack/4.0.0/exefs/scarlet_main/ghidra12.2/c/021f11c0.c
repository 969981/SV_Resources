/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f11c0; name: FUN_021f11c0
 */


uint FUN_021f11c0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xff) << 1;
  return param_1 & (3 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU) |
         (param_3 & 0xff) << (ulong)(uVar1 & 0x1f);
}


