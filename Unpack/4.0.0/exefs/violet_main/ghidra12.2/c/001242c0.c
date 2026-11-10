/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001242c0; name: FUN_001242c0
 */


undefined1  [16] FUN_001242c0(undefined1 param_1 [16],undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  int local_24;
  
  uVar4 = param_1._8_8_;
  iVar1 = FUN_00d34290();
  auVar3._8_8_ = uVar4;
  auVar3._0_8_ = param_1._0_8_;
  if (0 < iVar1) {
    auVar3 = FUN_00c41790(param_2,param_3,&local_24);
    uVar5 = auVar3._8_8_;
    uVar4 = auVar3._0_8_;
    if (local_24 == 0) {
      uVar2 = FUN_01b2ccf0(param_2,3);
      FUN_00123c80(param_2,param_3,uVar2);
      auVar3._8_8_ = uVar5;
      auVar3._0_8_ = uVar4;
    }
  }
  return auVar3;
}


