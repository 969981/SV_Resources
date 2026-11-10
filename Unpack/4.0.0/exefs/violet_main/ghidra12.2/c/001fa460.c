/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001fa460; name: FUN_001fa460
 */


undefined8 FUN_001fa460(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_001f54d4(param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0xfffffffffffffe0b;
  }
  else {
    if ((ulong)(param_4 * 6) <= param_2) {
      uVar2 = FUN_001f4ca8(param_1,param_3,param_4);
      return uVar2;
    }
    uVar2 = 0xfffffffffffffdf3;
  }
  return uVar2;
}


