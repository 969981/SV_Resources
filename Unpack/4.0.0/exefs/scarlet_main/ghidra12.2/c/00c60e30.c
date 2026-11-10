/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c60e30; name: FUN_00c60e30
 */


void FUN_00c60e30(long *param_1,uint param_2,undefined4 param_3,char *param_4,char *param_5,
                 int *param_6,int *param_7)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (*param_4 != '\0') {
    if ((*param_6 < 0) && (*(long *)(param_4 + 8) != 0)) {
      *param_6 = *(int *)(*(long *)(param_4 + 8) + 0x88);
    }
    if (((*param_7 < 0) && (*param_5 != '\0')) && (*(long *)(param_5 + 8) != 0)) {
      *param_7 = *(int *)(*(long *)(param_5 + 8) + 0x68);
    }
  }
  if ((*param_6 < 0) || (*param_7 < 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)PTR_DAT_047e1eb8)(*param_1 + 0x10);
  }
  if (param_2 != 0) {
    if ((param_2 & 1) != 0) {
      (**(code **)PTR_DAT_047e0cb8)(param_1[5],0,param_3,uVar3);
    }
    if (1 < param_2) {
      if ((param_2 >> 1 & 1) != 0) {
        (**(code **)PTR_DAT_047e0cb8)(param_1[5],1,param_3,uVar3);
      }
      if (3 < param_2) {
        if ((param_2 >> 2 & 1) != 0) {
          (**(code **)PTR_DAT_047e0cb8)(param_1[5],2,param_3,uVar3);
        }
        puVar2 = PTR_DAT_047e0cb8;
        if (7 < param_2) {
          uVar5 = 8;
          do {
            if ((uVar5 & param_2) != 0) {
              uVar1 = uVar5 - 4 >> 2;
              if (uVar1 < 8) {
                uVar4 = *(undefined4 *)(&DAT_03cbf080 + (long)(int)uVar1 * 4);
              }
              else {
                uVar4 = 1;
              }
              (**(code **)puVar2)(param_1[5],uVar4,param_3,uVar3);
            }
            uVar5 = uVar5 * 2;
          } while (uVar5 <= param_2);
        }
      }
    }
  }
  return;
}


