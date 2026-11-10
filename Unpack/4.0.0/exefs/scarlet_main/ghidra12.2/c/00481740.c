/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00481740; name: FUN_00481740
 */


void FUN_00481740(uint param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_004807b0();
  if (lVar1 != 0) {
    lVar2 = (long)*(int *)(lVar1 + 0x240) * 4;
    *(uint *)(lVar1 + lVar2) =
         *(uint *)(lVar1 + lVar2) |
         ((int)(param_1 - 1 & (param_1 ^ 0xffffffff)) >> 0x1f ^ 0xffffffffU) & 2;
  }
  return;
}


