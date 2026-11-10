/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001dbbec; name: FUN_001dbbec
 */


undefined4
FUN_001dbbec(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined4 local_4;
  
  uVar1 = FUN_001dbb30(param_1,*(int *)(param_1 + 0x25c) == param_2,param_3,param_4,&local_4);
  *param_5 = uVar1;
  return local_4;
}


