/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f4f08; name: FUN_001f4f08
 */


undefined8 FUN_001f4f08(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -9;
  FUN_001f4614();
  uVar1 = FUN_001ed9b4(*(undefined8 *)(lVar2 + 0x20),param_2 + 0x10,8);
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  return 0;
}


