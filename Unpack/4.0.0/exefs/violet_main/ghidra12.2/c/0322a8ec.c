/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322a8ec; name: FUN_0322a8ec
 */


void FUN_0322a8ec(long *param_1)

{
  *param_1 = (long)&PTR_LAB_046aacf0;
  if (param_1[3] != 0) {
    nn::fs::CloseFile();
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


