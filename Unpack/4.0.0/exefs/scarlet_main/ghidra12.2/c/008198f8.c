/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


