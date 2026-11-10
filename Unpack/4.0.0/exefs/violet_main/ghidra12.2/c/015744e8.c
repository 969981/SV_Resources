/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015744e8; name: FUN_015744e8
 */


undefined8 * FUN_015744e8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18);
  *(undefined2 *)(puVar1 + 2) = 0;
  *puVar1 = 0x10000;
  puVar1[1] = 0x40000;
  FUN_01574768(param_1,puVar1);
  return puVar1;
}


