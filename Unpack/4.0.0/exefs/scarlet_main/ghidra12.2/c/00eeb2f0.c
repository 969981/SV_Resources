/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eeb2f0; name: FUN_00eeb2f0
 */


void FUN_00eeb2f0(undefined8 param_1,long *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  
  iVar1 = FUN_00121a10(param_1,param_3);
  if (iVar1 == 0) {
    FUN_00123a70(param_1,"stack overflow (%s)","too many upvalues");
    lVar2 = *param_2;
  }
  else {
    lVar2 = *param_2;
  }
  if (lVar2 != 0) {
    if ((int)param_3 < 1) {
      do {
        plVar3 = param_2 + 2;
        if (param_2[1] == 0) {
          FUN_00c419e0(param_1);
        }
        else {
          FUN_00c5dbe0(param_1,param_2[1],param_3);
        }
        FUN_00efafb0(param_1,-2 - param_3,*param_2);
        param_2 = plVar3;
      } while (*plVar3 != 0);
    }
    else {
      do {
        if (param_2[1] == 0) {
          FUN_00c419e0(param_1,0);
        }
        else {
          uVar4 = param_3;
          do {
            FUN_00d341e0(param_1,-param_3);
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          FUN_00c5dbe0(param_1,param_2[1],param_3);
        }
        FUN_00efafb0(param_1,-2 - param_3,*param_2);
        param_2 = param_2 + 2;
      } while (*param_2 != 0);
    }
  }
  FUN_00c5db00(param_1,~param_3);
  return;
}


