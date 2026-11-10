/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025eb780; name: FUN_025eb780
 */


void FUN_025eb780(undefined1 *param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  FUN_025ec2f8(&local_30,param_2);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 3;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_025ec558(param_1 + 8,&local_30);
  FUN_025eb7d8(&local_30);
  return;
}


