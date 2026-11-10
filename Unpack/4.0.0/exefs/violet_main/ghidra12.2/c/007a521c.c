/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a521c; name: FUN_007a521c
 */


void FUN_007a521c(undefined8 param_1,long *param_2,long param_3)

{
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,0);
  param_2[0xb] = param_3;
  FUN_0078cac8(param_3);
  FUN_0078cb14(param_2[0xb]);
  param_2[8] = (long)"NetEventCheckBackgroundJob::UpdateConnectionStatus";
  param_2[6] = (long)PTR_FUN_047d0b58;
  param_2[7] = 0;
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


