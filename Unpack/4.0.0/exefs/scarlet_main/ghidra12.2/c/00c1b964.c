/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c1b964; name: FUN_00c1b964
 */


long FUN_00c1b964(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x18);
  if (param_2 != param_1) {
    uVar1 = FUN_00c1b964();
    *(undefined8 *)(param_2 + 0x18) = uVar1;
    lVar2 = param_2;
  }
  return lVar2;
}


