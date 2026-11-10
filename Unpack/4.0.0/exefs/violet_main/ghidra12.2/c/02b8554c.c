/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b8554c; name: FUN_02b8554c
 */


undefined1  [16] FUN_02b8554c(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = (**(code **)(*param_1 + 0x68))();
  auVar2._0_8_ = *(undefined8 *)(lVar1 + 0x30);
  auVar2._8_8_ = *(ulong *)(lVar1 + 0x38) & 0xffffffff;
  return auVar2;
}


