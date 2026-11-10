/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d39d04; name: FUN_01d39d04
 */


void FUN_01d39d04(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0196c63c(param_2);
  if (0xc < uVar1) {
    uVar1 = 0xd;
  }
  uVar2 = FUN_0196c644(0xd,param_2);
  FUN_011b8d00(param_1 + 6,uVar2,uVar1);
  return;
}


