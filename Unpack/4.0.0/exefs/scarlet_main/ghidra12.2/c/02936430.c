/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


