/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f42d64; name: FUN_00f42d64
 */


uint FUN_00f42d64(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int local_28 [5];
  byte local_14 [4];
  
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar1 = 0xfd;
  }
  else {
    uVar1 = 0xfd;
    if (*(long *)PTR_DAT_047d0860 != 0) {
      local_14[0] = 0xfd;
      FUN_00f42ddc(local_28,*(long *)PTR_DAT_047d0860,local_14,*param_2);
      uVar1 = (uint)local_14[0];
      if (DAT_045dfcb0 <= local_14[0] || local_28[0] != 0) {
        uVar1 = 0xfffffffd;
      }
    }
  }
  return uVar1;
}


