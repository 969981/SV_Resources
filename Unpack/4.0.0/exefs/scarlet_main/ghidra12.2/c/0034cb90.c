/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034cb90; name: FUN_0034cb90
 */


undefined8 FUN_0034cb90(int param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0x48;
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    lVar1 = 0x49;
  }
  return *(undefined8 *)(*(long *)PTR_DAT_047ccae0 + lVar1 * 8);
}


