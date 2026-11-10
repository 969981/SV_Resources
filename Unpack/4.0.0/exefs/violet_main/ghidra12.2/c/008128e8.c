/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008128e8; name: FUN_008128e8
 */


void FUN_008128e8(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  FUN_0284e338(param_1);
  FUN_0284e360(param_1,uVar1);
  *(short *)(param_1 + 0x18) = (short)*(undefined4 *)(param_2 + 0xc);
  return;
}


