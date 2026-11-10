/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ebf10; name: FUN_003ebf10
 */


int FUN_003ebf10(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = (int)param_1[1] - (int)param_2[1];
  if (iVar3 != 0) {
    return iVar3;
  }
  lVar4 = (long)(int)param_1[1];
  do {
    if (lVar4 < 1) {
      return 0;
    }
    uVar1 = *(uint *)(*param_1 + -4 + lVar4 * 4);
    uVar2 = *(uint *)(*param_2 + -4 + lVar4 * 4);
    lVar4 = lVar4 + -1;
  } while (uVar1 == uVar2);
  iVar3 = -1;
  if (uVar2 < uVar1) {
    iVar3 = 1;
  }
  return iVar3;
}


