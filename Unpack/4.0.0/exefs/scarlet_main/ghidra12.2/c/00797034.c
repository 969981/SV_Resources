/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00797034; name: FUN_00797034
 */


long FUN_00797034(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 < 0x5a4) {
    lVar1 = param_1 + (ulong)(param_2 + 0x1c) + 0x30;
  }
  return lVar1;
}


