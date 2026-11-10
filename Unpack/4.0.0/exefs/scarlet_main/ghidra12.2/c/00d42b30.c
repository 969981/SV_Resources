/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d42b30; name: FUN_00d42b30
 */


int FUN_00d42b30(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = FUN_00d42350();
  if (*param_5 < *param_4) {
    FUN_00d42490(param_4,param_5);
    if (*param_4 < *param_3) {
      FUN_00d42490(param_3,param_4);
      if (*param_3 < *param_2) {
        FUN_00d42490(param_2,param_3);
        if (*param_2 < *param_1) {
          FUN_00d42490(param_1,param_2);
          iVar1 = iVar1 + 4;
        }
        else {
          iVar1 = iVar1 + 3;
        }
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


