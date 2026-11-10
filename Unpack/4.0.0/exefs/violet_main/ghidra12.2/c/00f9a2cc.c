/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f9a2cc; name: FUN_00f9a2cc
 */


void FUN_00f9a2cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x30);
  local_18 = lVar1 + 0x10;
  local_28 = *(undefined8 *)(lVar1 + 8);
  uStack_20 = *(undefined8 *)(lVar1 + 0x6098);
  FUN_00f9a318(*(undefined8 *)(lVar1 + 0x6120),&local_28,param_2,
               *(undefined8 *)(*(long *)(param_3 + 0x68) + 8));
  return;
}


