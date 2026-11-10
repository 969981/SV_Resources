/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a6a9b8; name: FUN_01a6a9b8
 */


void FUN_01a6a9b8(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &DAT_045e8c88;
  param_1[4] = &PTR_LAB_045e8d38;
  param_1[5] = &DAT_045e8d88;
  pcVar1 = (code *)param_1[0x6d];
  if (pcVar1 != (code *)0x0) {
    param_1[0x6f] = 0;
    param_1[0x6e] = 0;
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    (*pcVar1)(param_1 + 0x70);
  }
  FUN_01a6aa10(param_1);
  return;
}


