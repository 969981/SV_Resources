/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0051fe2c; name: FUN_0051fe2c
 */


undefined8 FUN_0051fe2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0051fe6c();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_0052d318(param_4,**(undefined8 **)(param_1 + 8));
  return uVar2;
}


