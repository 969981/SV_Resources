/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f13a8; name: FUN_008f13a8
 */


uint FUN_008f13a8(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_1 >> 1);
  uVar2 = (uint)param_1;
  return uVar2 & 0x20 |
         uVar2 >> 3 & 2 | uVar1 & 4 | uVar2 & 1 | (uVar1 & 1) << 3 | (uVar2 >> 2 & 1) << 4;
}


