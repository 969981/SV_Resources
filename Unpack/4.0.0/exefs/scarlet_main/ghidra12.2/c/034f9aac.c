/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f9aac; name: FUN_034f9aac
 */


void FUN_034f9aac(long *param_1)

{
  *param_1 = (long)&PTR_FUN_047c5f28;
  if ((param_1[2] != 0) && ((*(byte *)((long)param_1 + 0x82) >> 4 & 1) == 0)) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  *param_1 = (long)(PTR_DAT_047e6938 + 0x10);
  return;
}


