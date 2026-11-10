/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a2514; name: FUN_007a2514
 */


void FUN_007a2514(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_047d0a08;
  if (lVar1 == 0) {
    return;
  }
  FUN_007cdbbc(lVar1);
  FUN_007cd7e4(lVar1,param_2,0xffffffff);
  return;
}


