/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a43e0; name: FUN_003a43e0
 */


void FUN_003a43e0(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_003a4380((ulong *)(param_1 + 0x18e0),param_2 + 1);
  uVar1 = (uint)uVar2;
  if ((int)uVar1 < 1) {
    if (-uVar1 < 0x40) {
      *param_2 = *param_2 | 1L << ((ulong)-uVar1 & 0x3f);
    }
    return;
  }
  if (uVar1 < 0x40) {
    uVar2 = *param_2 << (uVar2 & 0x3f) | 1;
  }
  else {
    uVar2 = 1;
  }
  *param_2 = uVar2;
  param_2[1] = *(ulong *)(param_1 + 0x18e0);
  return;
}


