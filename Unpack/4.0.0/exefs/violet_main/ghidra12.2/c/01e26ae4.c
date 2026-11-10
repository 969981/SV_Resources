/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e26ae4; name: FUN_01e26ae4
 */


void FUN_01e26ae4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  *(ulong *)(param_2 + 8) = (ulong)*(byte *)(param_2 + 0x10);
  uVar1 = FUN_01e26b54();
  FUN_01e26d14(param_1,param_2,uVar1);
  return;
}


