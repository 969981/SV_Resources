/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00871890; name: FUN_00871890
 */


undefined8 FUN_00871890(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  undefined4 local_20;
  long local_18;
  
  if ((int)param_1[1] == 0) {
    return 0;
  }
  lStack_38 = param_1[3];
  local_40 = param_1[2];
  lStack_28 = param_1[5];
  local_30 = param_1[4];
  local_20 = 0;
  local_18 = *param_1 + (long)param_1;
  uVar1 = FUN_008718f0(param_1,&local_40,param_2);
  return uVar1;
}


