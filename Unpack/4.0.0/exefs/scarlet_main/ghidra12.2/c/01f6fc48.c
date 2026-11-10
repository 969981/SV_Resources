/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6fc48; name: FUN_01f6fc48
 */


void FUN_01f6fc48(long param_1)

{
  long lVar1;
  
  FUN_00258a40();
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_0057dda4(lVar1);
    FUN_0049e790(PTR_LAB_047cba48,lVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_01cfa410(param_1);
  return;
}


