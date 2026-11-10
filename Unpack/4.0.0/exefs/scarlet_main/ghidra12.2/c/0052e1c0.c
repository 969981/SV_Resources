/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052e1c0; name: thunk_FUN_0052e1c4
 */


long thunk_FUN_0052e1c4(long *param_1,long *param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  
  pbVar2 = param_3 + 1;
  uVar4 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    uVar4 = (uVar4 + (uint)*pbVar2 * 0x80) - 0x80;
    if ((char)*pbVar2 < '\0') {
      uVar4 = (uVar4 + (uint)param_3[2] * 0x4000) - 0x4000;
      if ((char)param_3[2] < '\0') {
        uVar4 = (uVar4 + (uint)param_3[3] * 0x200000) - 0x200000;
        if ((char)param_3[3] < '\0') {
          if (7 < param_3[4]) {
            return 0;
          }
          uVar4 = uVar4 + (uint)param_3[4] * 0x10000000 + 0xf0000000;
          if (0x7fffffef < uVar4) {
            return 0;
          }
          pbVar2 = param_3 + 5;
          goto LAB_0052e200;
        }
        lVar3 = 3;
      }
      else {
        lVar3 = 2;
      }
    }
    else {
      lVar3 = 1;
    }
    pbVar2 = param_3 + lVar3 + 1;
  }
LAB_0052e200:
  uVar4 = uVar4 + ((int)pbVar2 - (int)param_1[1]);
  *param_1 = param_1[1] + (long)(int)(uVar4 & (int)uVar4 >> 0x1f);
  lVar3 = param_1[0xb];
  iVar1 = *(int *)((long)param_1 + 0x1c);
  *(uint *)((long)param_1 + 0x1c) = uVar4;
  *(int *)(param_1 + 0xb) = (int)lVar3 + -1;
  if ((int)lVar3 < 1) {
    return 0;
  }
  lVar3 = (**(code **)(*param_2 + 0x58))(param_2,pbVar2,param_1);
  if (lVar3 != 0) {
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
    if ((int)param_1[10] != 0) {
      return 0;
    }
    uVar4 = *(int *)((long)param_1 + 0x1c) + (iVar1 - uVar4);
    *(uint *)((long)param_1 + 0x1c) = uVar4;
    *param_1 = param_1[1] + (long)(int)(uVar4 & (int)uVar4 >> 0x1f);
  }
  return lVar3;
}


