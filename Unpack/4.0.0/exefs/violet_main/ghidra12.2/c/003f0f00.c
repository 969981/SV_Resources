/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f0f00; name: FUN_003f0f00
 */


undefined8 FUN_003f0f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_003f1f80();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_003ebf70(param_1,param_3);
    if (-1 < iVar1) {
      uVar2 = FUN_003f06e0(param_1,param_1,param_3);
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}


