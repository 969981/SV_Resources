/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ba2a4; name: FUN_028ba2a4
 */


undefined8 FUN_028ba2a4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  FUN_0088717c();
  uVar1 = FUN_00886988(param_1);
  return uVar1;
}


