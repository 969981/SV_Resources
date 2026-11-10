/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f50a4; name: FUN_001f50a4
 */


undefined8 FUN_001f50a4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -9;
  FUN_001f4614();
  FUN_001ed514(*(undefined8 *)(lVar2 + 0x20),*(undefined2 *)(puVar1 + 1));
  *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) + 2;
  FUN_001f4310(param_1,*puVar1,puVar1[1]);
  FUN_001f4310(param_1,puVar1[2],puVar1[3]);
  return 0;
}


