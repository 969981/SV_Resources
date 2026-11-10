/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003cdd20; name: FUN_003cdd20
 */


undefined8 FUN_003cdd20(int param_1,int param_2,int *param_3)

{
  if (param_2 == 0) {
    *param_3 = 0;
    return 1;
  }
  if (((4 < param_2 - 0x300U) && (3 < param_2 - 0xfefdU)) && (param_2 != 0x100)) {
    return 0;
  }
  if (param_1 == 0x1ffff) {
    if ((param_2 - 0xfefdU < 4) || (param_2 == 0x100)) goto LAB_003cdd90;
  }
  else if ((param_1 == 0x10000) && (param_2 - 0x300U < 5)) {
LAB_003cdd90:
    *param_3 = param_2;
    return 1;
  }
  return 1;
}


