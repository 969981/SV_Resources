/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033a1300; name: FUN_033a1300
 */


void FUN_033a1300(long *param_1)

{
  *param_1 = (long)&PTR_LAB_047b2f20;
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


