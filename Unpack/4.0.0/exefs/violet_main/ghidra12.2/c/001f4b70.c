/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f4b70; name: FUN_001f4b70
 */


undefined8 FUN_001f4b70(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + -9;
  FUN_001f4614();
  FUN_001f499c(*(undefined8 *)(lVar1 + 0x20),param_2 + 0x10);
  *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + 5;
  return 0;
}


