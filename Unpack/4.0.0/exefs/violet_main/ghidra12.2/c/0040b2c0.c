/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040b2c0; name: FUN_0040b2c0
 */


undefined4 FUN_0040b2c0(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*param_3 == 0) {
    FUN_003eb9f0(param_1,0);
    uVar2 = 1;
  }
  else {
    FUN_003ed410(param_4);
    lVar3 = FUN_003ed5c0(param_4);
    if ((lVar3 == 0) || (iVar1 = FUN_003ec020(lVar3,*param_3 + -1), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0040b180(param_1,param_2,lVar3,param_3,param_4);
    }
    FUN_003ed530(param_4);
  }
  return uVar2;
}


