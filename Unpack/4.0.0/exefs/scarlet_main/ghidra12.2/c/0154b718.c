/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0154b718; name: FUN_0154b718
 */


long FUN_0154b718(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  byte local_8 [4];
  char local_4 [4];
  
  FUN_0298d3c8(local_4,local_8,param_2,param_3,param_4);
  param_1 = param_1 + (ulong)local_8[0] * 0x1c;
  lVar1 = param_1 + 0xa8;
  if (local_4[0] != '\0') {
    lVar1 = param_1;
  }
  return lVar1;
}


