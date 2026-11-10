/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bde07c; name: FUN_02bde07c
 */


void FUN_02bde07c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045e0f28;
  param_1[4] = &PTR_LAB_045e0f58;
  FUN_0186e214(param_1 + 0x3a);
  FUN_0279064c(param_1 + 0x38);
  param_1[0x15] = PTR_DAT_047e20b8 + 0x10;
  if (*(char *)((long)param_1 + 0x1ac) != '\0') {
    *(undefined1 *)((long)param_1 + 0x1ac) = 0;
  }
  FUN_02bde1bc(param_1 + 0x12);
  FUN_02bde154(param_1 + 0x11);
  return;
}


