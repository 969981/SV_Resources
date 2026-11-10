/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c46da0; name: FUN_00c46da0
 */


void FUN_00c46da0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0x13;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
  return;
}


