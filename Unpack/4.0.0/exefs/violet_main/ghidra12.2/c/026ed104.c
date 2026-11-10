/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026ed104; name: FUN_026ed104
 */


void FUN_026ed104(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045cd958;
  param_1[4] = &PTR_LAB_045cdaf8;
  param_1[5] = &DAT_045cdc20;
  param_1[6] = &PTR_LAB_045cdc78;
  param_1[7] = &PTR_LAB_045cdca0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  FUN_026d5214();
  return;
}


