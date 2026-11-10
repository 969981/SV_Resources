/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00445aa0; name: FUN_00445aa0
 */


undefined8 FUN_00445aa0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_64 [64];
  undefined4 local_24;
  
  if ((((*param_1 == 0) || (iVar1 = FUN_0042be20(param_1[1],auStack_64,&local_24), iVar1 == 0)) ||
      (iVar1 = FUN_0042bfb0(param_1[1],param_1[3]), iVar1 == 0)) ||
     ((iVar1 = FUN_0042bd60(param_1[1],auStack_64,local_24), iVar1 == 0 ||
      (iVar1 = FUN_0042be20(param_1[1],param_2,param_3), iVar1 == 0)))) {
    return 0;
  }
  return 1;
}


