/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0065ca04; name: FUN_0065ca04
 */


long FUN_0065ca04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0xa0);
  if (lVar1 != 0) {
    FUN_00661c30(lVar1,uVar2,param_1 + 0x40,param_2,param_3);
  }
  return lVar1;
}


