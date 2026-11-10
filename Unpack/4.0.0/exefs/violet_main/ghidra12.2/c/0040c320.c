/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040c320; name: FUN_0040c320
 */


undefined8 FUN_0040c320(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
      uVar1 = FUN_0040fa80(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x20),param_2,param_3,
                           param_4);
      return uVar1;
    }
  }
  return 0;
}


