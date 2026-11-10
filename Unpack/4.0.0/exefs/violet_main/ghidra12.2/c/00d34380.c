/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d34380; name: FUN_00d34380
 */


int FUN_00d34380(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00d34290(param_1,0xffffffff);
  if (iVar1 == 0) {
    FUN_00c5db00(param_1,0xfffffffe);
    return -1;
  }
  uVar2 = FUN_00121b80(param_1,param_2);
  iVar1 = FUN_00c5fc50(param_1,uVar2,3);
  if (iVar1 == 0) {
    FUN_00c5d960(param_1,0);
    FUN_00123130(param_1,uVar2,3);
    FUN_00c5db00(param_1,0xfffffffe);
  }
  else {
    iVar1 = FUN_00c92df0(param_1,0xffffffff,0);
    FUN_00c5db00(param_1,0xfffffffe);
    if (iVar1 != 0) {
      FUN_00c5fc50(param_1,uVar2,(long)iVar1);
      FUN_00123130(param_1,uVar2,3);
      goto LAB_00d3445c;
    }
  }
  iVar1 = FUN_00122460(param_1,uVar2);
  iVar1 = iVar1 + 1;
LAB_00d3445c:
  FUN_00123130(param_1,uVar2,(long)iVar1);
  return iVar1;
}


