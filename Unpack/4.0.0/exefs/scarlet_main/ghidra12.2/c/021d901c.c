/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d901c; name: FUN_021d901c
 */


void FUN_021d901c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045a6388;
  param_1[1] = &PTR_LAB_045a64a8;
  if ((*(char *)((long)param_1 + 0x19) == '\0') && (param_1[8] != 0)) {
    thunk_FUN_026f76f8(param_1 + 0xb);
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x23));
  FUN_021d9088(param_1 + 0xb);
  *param_1 = &PTR_LAB_045a6500;
  param_1[1] = &PTR_LAB_045a6620;
  return;
}


