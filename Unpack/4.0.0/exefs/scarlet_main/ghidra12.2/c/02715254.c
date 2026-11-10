/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02715254; name: FUN_02715254
 */


void FUN_02715254(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  uVar1 = *(ulong *)(param_1 + 0xd0) & 0xffffffff | (ulong)uVar2;
  if ((param_3 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0xd0) & (ulong)~uVar2;
  }
  *(ulong *)(param_1 + 0xd0) = uVar1;
  return;
}


