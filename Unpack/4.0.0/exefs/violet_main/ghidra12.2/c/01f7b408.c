/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7b408; name: FUN_01f7b408
 */


void FUN_01f7b408(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_01d0e1a8(param_1 + 0x10,param_2 + 8);
  FUN_01d0e1a8(param_1 + 0x30,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return;
}


