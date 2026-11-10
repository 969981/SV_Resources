/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c41638; name: FUN_00c41638
 */


undefined8 FUN_00c41638(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x1c0) + 0xf8);
  if ((lVar2 == 0) || (*(int *)(*(long *)(param_1 + 0x1c0) + 0x100) != *(int *)(lVar2 + 0x2c))) {
    return 0;
  }
  uVar1 = FUN_00c41664();
  return uVar1;
}


