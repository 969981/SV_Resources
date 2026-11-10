/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040b0e0; name: FUN_0040b0e0
 */


bool FUN_0040b0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  FUN_003ed410(param_5);
  lVar3 = FUN_003ed5c0(param_5);
  if ((lVar3 == 0) || (iVar2 = FUN_0040a970(lVar3,param_3,param_4,param_5), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_0040a7d0(param_1,param_2,lVar3,param_4,param_5);
    bVar1 = iVar2 != 0;
  }
  FUN_003ed530(param_5);
  return bVar1;
}


