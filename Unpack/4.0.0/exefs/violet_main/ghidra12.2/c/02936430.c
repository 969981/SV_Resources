/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02936430; name: FUN_02936430
 */


void FUN_02936430(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (int)uVar1 * 0x20000000 + -0x20000000) {
    *(ulong *)(param_1 + 8) = uVar1 & 0xfffffffffe000000 | uVar1 & 0x1ff | (param_2 & 0xffff) << 9;
  }
  return;
}


