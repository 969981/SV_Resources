/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001250f0; name: FUN_001250f0
 */


undefined8 FUN_001250f0(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_3 == 0) || (iVar1 = FUN_00d34290(param_1,0xffffffff), iVar1 != 5)) {
    return 0;
  }
  FUN_00ca1a30(param_1);
  uVar2 = FUN_012078c0(param_1,0xfffffffe);
  if ((int)uVar2 != 0) {
    do {
      iVar1 = FUN_00d34290(param_1,0xfffffffe);
      if (iVar1 == 4) {
        iVar1 = FUN_00122040(param_1,param_2,0xffffffff);
        if (iVar1 != 0) {
          FUN_00c5db00(param_1,0xfffffffe);
          return 1;
        }
        iVar1 = FUN_001250f0(param_1,param_2,param_3 + -1);
        if (iVar1 != 0) {
          FUN_00c85bd0(param_1,&DAT_03bdface);
          FUN_00121c40(param_1,0xffffffff,0xfffffffd);
          FUN_00c5db00(param_1,0xfffffffe);
          FUN_001234b0(param_1,3);
          return 1;
        }
      }
      FUN_00c5db00(param_1,0xfffffffe);
      uVar2 = FUN_012078c0(param_1,0xfffffffe);
    } while ((int)uVar2 != 0);
  }
  return uVar2;
}


