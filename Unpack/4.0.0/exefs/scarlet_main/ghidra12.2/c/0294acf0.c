/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294acf0; name: FUN_0294acf0
 */


void FUN_0294acf0(long param_1,uint param_2)

{
  ulong uVar1;
  
  if (-1 < (int)*(ulong *)(param_1 + 8) * 0x20000000 + -0x20000000) {
    uVar1 = 0x2000000;
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xfffffffffdffffff | uVar1;
  }
  return;
}


