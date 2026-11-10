/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e71cb0; name: FUN_01e71cb0
 */


void FUN_01e71cb0(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 1 << (ulong)(param_2 - 1U & 0x1f);
  if (1 < (uVar4 & 0xffff)) {
    uVar3 = 1;
    uVar5 = 1;
    uVar2 = uVar4 & 0xffff;
    do {
      uVar1 = uVar4 | uVar5;
      uVar5 = uVar3 << 1;
      uVar4 = uVar2 >> 1;
      if (uVar3 != (param_1 & uVar1 & 0xffff) && uVar2 != (param_1 & uVar1 & 0xffff)) {
        uVar1 = 0;
      }
      param_1 = uVar1 ^ param_1;
      uVar3 = uVar5 & 0xfffe;
      uVar2 = uVar4;
    } while (uVar3 < uVar4);
  }
  return;
}


