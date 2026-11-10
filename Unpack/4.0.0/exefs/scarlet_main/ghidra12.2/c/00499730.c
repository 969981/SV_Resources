/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00499730; name: FUN_00499730
 */


uint FUN_00499730(long param_1)

{
  uint uVar1;
  
  FUN_00498ee0();
  uVar1 = *(uint *)(param_1 + 0xe0);
  if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_1 + 0xe4) >> 2 & 1) != 0)) {
    if ((uVar1 & 1) != 0) {
      return uVar1 >> 4 & 1;
    }
    if ((uVar1 & 0x2040) == 0x2040) {
      return 3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      return 4;
    }
    if (((uVar1 >> 3 & 1) != 0) && ((*(byte *)(param_1 + 0xec) & 7) != 0)) {
      return 5;
    }
  }
  return 0;
}


