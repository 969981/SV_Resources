/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013dec0; name: FUN_0013dec0
 */


long FUN_0013dec0(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_0013d2c0(param_1,param_3);
  if ((*(byte *)(lVar1 + 8) & 0xf) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | (byte)(1 << (ulong)(param_2 & 0x1f));
    return 0;
  }
  return lVar1;
}


