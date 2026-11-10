/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd8ed4; name: FUN_00cd8ed4
 */


void FUN_00cd8ed4(long *param_1)

{
  undefined *puVar1;
  
  FUN_0129a6e4();
  puVar1 = PTR_DAT_047e1390;
  *(undefined1 *)((long)param_1 + 0x594) = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  param_1[4] = (long)(puVar1 + 0xd8);
  param_1[5] = (long)(puVar1 + 0x128);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xbe] = 0;
  memset(param_1 + 0x71,0,0x201);
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbd] = (long)(PTR_DAT_047e1398 + 0x10);
  *(undefined1 *)(param_1 + 0xbb) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0x1010101;
  return;
}


