/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00888704; name: FUN_00888704
 */


undefined8 FUN_00888704(long param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_14;
  
  uVar1 = FUN_00888360(param_1,&local_14,param_4,param_2);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_00888fbc(param_1 + 0x30,param_2,param_3,local_14);
  return uVar2;
}


