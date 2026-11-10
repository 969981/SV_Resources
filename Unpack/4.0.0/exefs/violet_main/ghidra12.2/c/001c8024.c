/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c8024; name: FUN_001c8024
 */


undefined8 FUN_001c8024(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  
  iVar1 = FUN_001cb444(2,param_1,auStack_28);
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_001c7f5c(2,auStack_28,param_1,param_2);
  }
  return uVar2;
}


