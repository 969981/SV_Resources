/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008198f8; name: FUN_008198f8
 */


undefined8 FUN_008198f8(long param_1,long param_2,ulong param_3)

{
  if ((param_2 == 0) || ((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) < param_3))
  {
    return 0;
  }
  FUN_0021d540(param_2,*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18),param_3);
  *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_3;
  return 1;
}


