/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


