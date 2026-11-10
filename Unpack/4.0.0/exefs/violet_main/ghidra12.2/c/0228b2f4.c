/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0228b2f4; name: FUN_0228b2f4
 */


undefined8 FUN_0228b2f4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e47330();
  if (((uVar1 & 0xff) == 0) && (uVar1 = FUN_00e49ce8(param_1), (uVar1 & 0xff) == 0)) {
    return 0;
  }
  uVar2 = FUN_0228ad1c(param_1 + (uVar1 >> 0x20) * 0x78 + 0x38,param_2);
  return uVar2;
}


