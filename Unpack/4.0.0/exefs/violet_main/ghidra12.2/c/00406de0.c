/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00406de0; name: FUN_00406de0
 */


long FUN_00406de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00408150();
  if (lVar2 == 0) {
    FUN_00411e60();
    lVar2 = FUN_0040c900();
  }
  else {
    FUN_00412390();
    lVar2 = FUN_0040c900();
  }
  if ((lVar2 != 0) && (iVar1 = FUN_0040d6a0(lVar2,param_1,param_2,param_3,param_4), iVar1 == 0)) {
    FUN_0040cb30(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}


