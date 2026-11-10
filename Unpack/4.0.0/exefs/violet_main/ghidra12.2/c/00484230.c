/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00484230; name: FUN_00484230
 */


bool FUN_00484230(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_00482b20();
    lVar3 = FUN_00484810(param_1,uVar2);
    if (lVar3 == 0) {
      return false;
    }
    iVar1 = FUN_00484420(lVar3,1,param_2,1,0);
    if (iVar1 != 1) {
      return false;
    }
  }
  if (param_3 != 0) {
    uVar2 = FUN_00482240();
    lVar3 = FUN_00484810(param_1,uVar2);
    if (lVar3 == 0) {
      return false;
    }
    iVar1 = FUN_00484420(lVar3,2,param_3,1,0);
    if (iVar1 != 1) {
      return false;
    }
  }
  return param_2 != 0 || param_3 != 0;
}


