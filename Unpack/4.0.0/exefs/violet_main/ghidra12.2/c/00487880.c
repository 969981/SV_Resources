/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00487880; name: FUN_00487880
 */


bool FUN_00487880(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = FUN_00484380(param_1,param_3,0xffffffff);
  if (iVar1 < 0) {
    lVar3 = 0;
  }
  else {
    iVar2 = FUN_00484380(param_1,param_3,iVar1);
    if (iVar2 != -1) {
      return false;
    }
    FUN_00484390(param_1,iVar1);
    lVar3 = FUN_00486010();
  }
  iVar1 = FUN_00484380(param_2,param_3,0xffffffff);
  if (iVar1 < 0) {
    lVar4 = 0;
    if (lVar3 == 0) {
      return true;
    }
  }
  else {
    iVar2 = FUN_00484380(param_2,param_3,iVar1);
    if (iVar2 != -1) {
      return false;
    }
    FUN_00484390(param_2,iVar1);
    lVar4 = FUN_00486010();
    if (lVar3 == 0 && lVar4 == 0) {
      return true;
    }
  }
  if ((lVar3 == 0) || (lVar4 == 0)) {
    return false;
  }
  iVar1 = thunk_FUN_003df4b0(lVar3);
  return iVar1 == 0;
}


