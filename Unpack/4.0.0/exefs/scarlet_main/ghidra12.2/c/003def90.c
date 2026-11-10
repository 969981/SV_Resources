/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003def90; name: FUN_003def90
 */


int FUN_003def90(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((int)param_2 < 0) {
    return -1;
  }
  iVar2 = 1;
  if (0x1e < (int)param_3) {
    do {
      param_3 = param_3 >> 7;
      iVar2 = iVar2 + 1;
    } while (param_3 != 0);
  }
  if (param_1 == 2) {
    iVar2 = iVar2 + 3;
  }
  else {
    iVar2 = iVar2 + 1;
    if (0x7f < (int)param_2) {
      uVar3 = param_2;
      do {
        uVar3 = uVar3 >> 8;
        iVar2 = iVar2 + 1;
      } while (uVar3 != 0);
    }
  }
  iVar1 = iVar2 + param_2;
  if ((int)(0x7fffffff - param_2) <= iVar2) {
    iVar1 = -1;
  }
  return iVar1;
}


