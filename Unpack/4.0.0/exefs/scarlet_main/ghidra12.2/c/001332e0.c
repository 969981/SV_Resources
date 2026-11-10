/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001332e0; name: FUN_001332e0
 */


void FUN_001332e0(long *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 != 0xffffffff) {
    if (*param_2 == 0xffffffff) {
      *param_2 = param_3;
      return;
    }
    uVar4 = *param_2;
    do {
      uVar3 = uVar4;
      uVar2 = *(uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar3 * 4);
      iVar1 = (uVar2 >> 7) - 0xffffff;
      uVar4 = 0xffffffff;
      if (iVar1 != -1) {
        uVar4 = uVar3 + iVar1 + 1;
      }
    } while (uVar4 != 0xffffffff);
    if (~uVar3 + param_3 + 0xffffff >> 0x19 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00138770(param_1[2],"control structure too long");
    }
    *(uint *)(*(long *)(*param_1 + 0x40) + (long)(int)uVar3 * 4) =
         (uVar2 & 0x7f | (~uVar3 + param_3) * 0x80) + 0x7fffff80;
  }
  return;
}


