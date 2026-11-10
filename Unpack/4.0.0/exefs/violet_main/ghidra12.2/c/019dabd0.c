/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019dabd0; name: FUN_019dabd0
 */


long FUN_019dabd0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return lVar2 + (uVar1 & 0xffffffff);
}


