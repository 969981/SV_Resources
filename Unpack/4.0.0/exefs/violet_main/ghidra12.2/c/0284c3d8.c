/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284c3d8; name: FUN_0284c3d8
 */


long FUN_0284c3d8(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1[2];
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return lVar2 + (uVar1 & 0xffffffff);
}


