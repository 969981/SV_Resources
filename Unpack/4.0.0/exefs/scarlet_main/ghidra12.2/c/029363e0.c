/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029363e0; name: FUN_029363e0
 */


void FUN_029363e0(long param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if ((uVar1 & 0x1c7) == 2) {
    uVar1 = uVar1 & 0xfffffffffffffe00 |
            uVar1 & 7 | ((ulong)((uint)((int)uVar1 + param_2 * 8) >> 3) & 0x3f) << 3;
    *(ulong *)(param_1 + 8) = uVar1;
  }
  if ((uVar1 & 0x1c7) == 4) {
    *(ulong *)(param_1 + 8) =
         uVar1 & 0xfffffffffffffe00 |
         uVar1 & 7 | ((ulong)((uint)((int)uVar1 + param_2 * 8) >> 3) & 0x3f) << 3;
  }
  return;
}


