/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


