/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00811da4; name: FUN_00811da4
 */


void FUN_00811da4(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  param_2[0xd] = param_5;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[6] = (long)PTR_FUN_047d1888;
  param_2[7] = 0;
  param_2[8] = (long)"NatCheckJob::StepResolvePrimaryAddress";
  (**(code **)(*param_2 + 0x10))(param_2,1);
  param_2[0xb] = param_3;
  uVar1 = FUN_0078cb14(param_3);
  if ((uVar1 & 1) == 0) {
    local_40[0] = 0x10408;
  }
  else {
    *(undefined2 *)(param_2 + 0x11) = 0;
    param_2[0xc] = param_4;
    local_40[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


