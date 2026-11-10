/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c6c60; name: FUN_001c6c60
 */


void FUN_001c6c60(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_2 != 1) {
    if (param_2 == 2) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x420) + 0x84);
      if ((uVar1 >> 9 & 1) != 0) {
        return;
      }
      uVar1 = (uVar1 >> 9 ^ 0xffffffff) & 1;
    }
    else {
      uVar1 = 0;
    }
  }
  if (uVar1 != (*(uint *)(param_1 + 0x3fc) & 1)) {
    *(uint *)(param_1 + 0x3fc) = *(uint *)(param_1 + 0x3fc) & 0xfffffffe | uVar1;
  }
  return;
}


