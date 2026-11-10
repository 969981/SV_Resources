/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007db518; name: FUN_007db518
 */


void FUN_007db518(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  *(undefined8 *)(param_2 + 0x60) = param_3;
  FUN_0078cac8(param_3);
  FUN_0078cb14(*(undefined8 *)(param_2 + 0x60));
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(char **)(param_2 + 0x40) = "LeaveMeshJob::SendLeaveRequest";
  *(undefined **)(param_2 + 0x30) = PTR_FUN_047d1348;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


