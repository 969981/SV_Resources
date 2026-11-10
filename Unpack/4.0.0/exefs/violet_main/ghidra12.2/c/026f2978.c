/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f2978; name: FUN_026f2978
 */


void FUN_026f2978(long param_1,undefined8 *param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = (undefined4)((ulong)*param_2 >> 0x20);
  param_1 = param_1 + 0x68;
  local_4 = (undefined4)*param_2;
  local_24 = (undefined4)param_2[1];
  local_28 = (undefined4)((ulong)param_2[1] >> 0x20);
  FUN_01eba4d4(param_1,&local_4);
  FUN_01eba4d4(param_1,&local_8);
  FUN_01eba4d4(param_1,&local_24);
  FUN_01eba4d4(param_1,&local_28);
  return;
}


