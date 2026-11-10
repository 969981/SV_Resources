/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001da1d8; name: FUN_001da1d8
 */


undefined8 FUN_001da1d8(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x4a8);
  FUN_001cb588((undefined8 *)(param_2 + 0x4a8),*(undefined8 *)(param_2 + 0x4b0),param_1,
               param_1 + 0x30);
  if ((**(int **)(param_2 + 0x660) == 1) &&
     (puVar1 = *(undefined8 **)(param_2 + 0x4a8), puVar2 != puVar1)) {
    *(byte *)(param_2 + 0x66c) = *(byte *)(param_2 + 0x66c) & 0xfb;
    FUN_001cea34(*puVar1,0,6);
  }
  return 0;
}


