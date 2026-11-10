/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ecb60; name: FUN_003ecb60
 */


undefined4 FUN_003ecb60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  FUN_003ed410(param_4);
  lVar2 = FUN_003ed5c0(param_4);
  if ((lVar2 == 0) || (lVar3 = FUN_003eb8f0(lVar2,param_2), lVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_003ec870(param_1,lVar2,param_3);
  }
  FUN_003ed530(param_4);
  FUN_003ebc30(param_1);
  return uVar1;
}


