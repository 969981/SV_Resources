/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007baba8; name: FUN_007baba8
 */


void FUN_007baba8(undefined8 param_1,long *param_2,long param_3,undefined2 param_4)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  param_2[0xc] = param_3;
  *(undefined2 *)(param_2 + 0xd) = param_4;
  FUN_0078cac8(param_2 + 0x165);
  param_2[0x16c] = 0;
  (**(code **)(*param_2 + 0x10))(param_2,1);
  param_2[8] = (long)"LanBrowseProcessJob::Dispatch";
  param_2[6] = (long)PTR_LAB_047d0f28;
  param_2[7] = 0;
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


