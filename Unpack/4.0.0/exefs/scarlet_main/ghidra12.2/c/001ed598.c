/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ed598; name: FUN_001ed598
 */


undefined8 FUN_001ed598(int *param_1,uint *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_4;
  if (iVar1 < 1) {
    if (((-1 < *param_1 + iVar1) && (-0x80000000 - iVar1 <= (int)*param_2)) &&
       (*param_3 <= iVar1 + 0x7fffffff)) {
      *param_1 = *param_1 + iVar1;
      *param_2 = *param_2 + *param_4;
      *param_3 = *param_3 - *param_4;
      *param_4 = 0;
      return 0;
    }
  }
  else {
    uVar3 = (*param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU)) - iVar1;
    if (-1 < (int)uVar3) {
      *param_2 = uVar3;
      return 0;
    }
    if (*param_1 <= (int)(uVar3 + 0x7fffffff)) {
      *param_1 = *param_1 - uVar3;
      iVar2 = *param_3;
      iVar1 = iVar2;
      if ((int)-uVar3 <= iVar2) {
        iVar1 = -uVar3;
      }
      *param_3 = iVar2 - iVar1;
      *param_2 = (*param_2 & (int)*param_2 >> 0x1f) + iVar1;
      *param_4 = *param_4 - iVar1;
      return 0;
    }
  }
  return 0xfffffdf4;
}


