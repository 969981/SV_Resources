/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00792de8; name: FUN_00792de8
 */


void FUN_00792de8(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
    FUN_0284e360(param_2,uVar1 >> 0x10 | uVar1 << 0x10);
    *(ushort *)(param_2 + 0x18) = *(ushort *)(param_1 + 2) >> 8 | *(ushort *)(param_1 + 2) << 8;
  }
  return;
}


