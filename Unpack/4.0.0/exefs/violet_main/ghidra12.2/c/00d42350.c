/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d42350; name: FUN_00d42350
 */


int FUN_00d42350(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  
  uVar1 = *param_2;
  if (uVar1 < *param_1) {
    if (*param_3 < uVar1) {
      FUN_00d42490(param_1,param_3);
    }
    else {
      FUN_00d42490(param_1,param_2);
      if (*param_3 < *param_2) {
        puVar2 = param_2;
        puVar3 = param_3;
        goto LAB_00d423b4;
      }
    }
  }
  else {
    if (uVar1 <= *param_3) {
      iVar4 = 0;
      goto LAB_00d42404;
    }
    FUN_00d42490(param_2,param_3);
    if (*param_2 < *param_1) {
      puVar2 = param_1;
      puVar3 = param_2;
LAB_00d423b4:
      FUN_00d42490(puVar2,puVar3);
      iVar4 = 2;
      goto LAB_00d42404;
    }
  }
  iVar4 = 1;
LAB_00d42404:
  if (*param_4 < *param_3) {
    FUN_00d42490(param_3,param_4);
    if (*param_3 < *param_2) {
      FUN_00d42490(param_2,param_3);
      if (*param_2 < *param_1) {
        FUN_00d42490(param_1,param_2);
        iVar4 = iVar4 + 3;
      }
      else {
        iVar4 = iVar4 + 2;
      }
    }
    else {
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}


