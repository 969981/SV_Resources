/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00316970; name: FUN_00316970
 */


bool FUN_00316970(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 - 1 & 0xff;
  uVar2 = uVar1 + 4;
  if (param_1 - 1 >> 8 != 0xfe) {
    uVar2 = uVar1;
  }
  *param_2 = uVar2;
  if (uVar2 < 7) {
    return *(ushort *)(PTR_DAT_047ccb20 + (ulong)uVar2 * 2) == param_1;
  }
  return false;
}


