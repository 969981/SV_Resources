/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0162f274; name: FUN_0162f274
 */


void FUN_0162f274(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == *(long *)(param_1 + 0x38)) {
    FUN_0162f8f8(param_1 + 0x28,param_2);
    return;
  }
  FUN_0162f2d0(param_1 + 0x40,lVar1);
  *(long *)(param_1 + 0x30) = lVar1 + 0x2b0;
  return;
}


