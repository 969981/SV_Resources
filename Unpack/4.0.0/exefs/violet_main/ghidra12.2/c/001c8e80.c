/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c8e80; name: FUN_001c8e80
 */


void FUN_001c8e80(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  
  iVar1 = FUN_001cb444(2,param_1,auStack_38);
  if (iVar1 < 1) {
    lVar2 = nnsocketGetHostByNameWithOptions(param_1,param_3,param_4);
    if (lVar2 != 0) {
      FUN_001c7e44(lVar2,param_2);
    }
  }
  else {
    FUN_001c7f5c(2,auStack_38,param_1,param_2);
  }
  return;
}


