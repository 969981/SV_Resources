/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124d360; name: FUN_0124d360
 */


uint FUN_0124d360(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_012440e8(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_0124da8c(uVar2,param_2);
  return uVar1 & 1;
}


