/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322acd4; name: FUN_0322acd4
 */


void FUN_0322acd4(long *param_1)

{
  *param_1 = (long)&PTR_LAB_046aad78;
  if ((param_1[3] != 0) && ((char)param_1[4] != '\0')) {
    nn::fs::FlushFile();
    nn::fs::CloseFile(param_1[3]);
    param_1[3] = 0;
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


