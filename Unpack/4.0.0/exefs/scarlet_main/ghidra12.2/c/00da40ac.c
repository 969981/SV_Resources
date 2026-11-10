/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da40ac; name: FUN_00da40ac
 */


undefined8 FUN_00da40ac(long param_1,byte *param_2)

{
  int local_28 [4];
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    if (*(long *)PTR_DAT_047d0860 == 0) {
      return 0;
    }
    if (*param_2 < DAT_045dfcb0) {
      local_18 = 0;
      FUN_00da4118(local_28,*(long *)PTR_DAT_047d0860,&local_18);
      if (local_28[0] != 0) {
        local_18 = 0;
      }
      return local_18;
    }
  }
  return 0;
}


