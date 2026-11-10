/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001240f0; name: FUN_001240f0
 */


long FUN_001240f0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00c646d0();
  if (lVar1 == 0) {
    uVar2 = FUN_01b2ccf0(param_1,4);
    FUN_00123c80(param_1,param_2,uVar2);
  }
  return lVar1;
}


