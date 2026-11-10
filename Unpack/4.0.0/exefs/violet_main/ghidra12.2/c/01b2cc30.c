/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b2cc30; name: FUN_01b2cc30
 */


undefined8 FUN_01b2cc30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00121b80();
  iVar2 = FUN_00122c30(param_1,uVar1);
  if (iVar2 != 0) {
    FUN_00c85bd0(param_1,param_3);
    iVar2 = FUN_00122b20(param_1,0xfffffffe);
    if (iVar2 != 0) {
      FUN_00c5dcd0(param_1,0xfffffffe,0xffffffff);
      FUN_00c5db00(param_1,0xfffffffe);
      FUN_00d341e0(param_1,uVar1);
      FUN_00123240(param_1,1,1,0,0);
      return 1;
    }
    FUN_00c5db00(param_1,0xfffffffd);
  }
  return 0;
}


