/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ba844; name: FUN_021ba844
 */


undefined1  [16] FUN_021ba844(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_2 + 0x10);
  FUN_021ba884(lVar1,(long)*param_3 + (ulong)*(uint *)*param_3);
  auVar2._0_8_ = (ulong)(lVar1 != 0) << 1;
  auVar2._8_8_ = lVar1;
  return auVar2;
}


