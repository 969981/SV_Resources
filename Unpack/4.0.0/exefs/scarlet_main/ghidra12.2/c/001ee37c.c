/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ee37c; name: FUN_001ee37c
 */


undefined8 FUN_001ee37c(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_40 [4];
  
  uVar3 = FUN_001f9f00(param_2);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if (*param_3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_001f9090(param_1);
    if (lVar4 == 0) {
      uVar1 = *param_3;
      if (uVar1 != 0) {
        if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
          iVar2 = *(int *)(param_1 + 0x934);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x938);
        }
        if (iVar2 < (int)uVar1) {
          FUN_001eda20(local_40);
          lVar4 = FUN_001ee4f4(param_1,*param_3,0,local_40,5,0);
          if (lVar4 == 0) {
            return 0xfffffc7b;
          }
          goto LAB_001ee44c;
        }
      }
    }
    else {
      iVar2 = FUN_001f9f00(lVar4);
      if (iVar2 != 0) goto LAB_001ee44c;
    }
    FUN_001eda20(local_40);
    param_3 = local_40;
  }
LAB_001ee44c:
  if (*param_3 == 0) {
    lVar4 = param_1 + 0x20;
  }
  else {
    iVar2 = FUN_001f9974(lVar4,param_2);
    if (iVar2 != 0) {
      FUN_001f9e88(lVar4);
      uVar3 = FUN_001f9e0c(*(undefined8 *)(param_2 + 0x70),lVar4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  if ((lVar4 == *(long *)(param_2 + 0x70)) && ((char)param_3[2] == '\0')) {
    FUN_001f96f0(param_2,param_3[1]);
    uVar3 = 0;
  }
  else {
    FUN_001f9e88(param_2);
    *(uint *)(param_2 + 0xd0) = param_3[1];
    if ((char)param_3[2] == '\0') {
      uVar3 = FUN_001f9e0c(lVar4,param_2);
    }
    else {
      uVar3 = FUN_001f9d34(lVar4,param_2);
    }
  }
  return uVar3;
}


