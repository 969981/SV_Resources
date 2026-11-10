/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015745dc; name: FUN_015745dc
 */


undefined8 * FUN_015745dc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x1c);
  *puVar1 = 0x200000003;
  puVar1[1] = 0x300000002;
  puVar1[2] = 0x100000001;
  *(undefined4 *)(puVar1 + 3) = 0x41f00000;
  FUN_01574924(param_1,puVar1);
  return puVar1;
}


