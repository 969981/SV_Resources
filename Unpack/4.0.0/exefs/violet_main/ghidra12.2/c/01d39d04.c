/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


