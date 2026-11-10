/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052d77c; name: FUN_0052d77c
 */


void FUN_0052d77c(undefined8 param_1,byte *param_2)

{
  if ((*param_2 & 1) == 0) {
    param_2[0] = 0;
    param_2[1] = 0;
    FUN_0052d660();
    return;
  }
  **(undefined1 **)(param_2 + 0x10) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  FUN_0052d660();
  return;
}


