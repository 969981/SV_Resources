/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038b4c0; name: FUN_0038b4c0
 */


undefined1  [16] FUN_0038b4c0(long *param_1)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = *(undefined4 **)(*(long *)(*param_1 + 0x18) + param_1[1] * 0x18);
  auVar2._0_8_ = puVar1 + 1;
  auVar2._8_4_ = *puVar1;
  auVar2._12_4_ = 0;
  return auVar2;
}


