/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c62f4; name: FUN_012c62f4
 */


void FUN_012c62f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  FUN_012c639c();
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 < 8) {
    uVar1 = 8;
LAB_012c631c:
    FUN_00ddbe68(param_1,uVar1);
    return;
  }
  if (uVar2 != 8) {
    uVar1 = (ulong)((float)*(ulong *)(param_1 + 0x28) / *(float *)(param_1 + 0x30));
    if ((uVar2 & uVar2 - 1) == 0) {
      if (1 < uVar1) {
        uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
      }
    }
    else {
      uVar1 = std::__next_prime(uVar1);
    }
    if (uVar1 < 9) {
      uVar1 = 8;
    }
    if (uVar1 < uVar2) goto LAB_012c631c;
  }
  return;
}


