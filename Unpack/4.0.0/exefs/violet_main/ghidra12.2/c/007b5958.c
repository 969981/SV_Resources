/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b5958; name: FUN_007b5958
 */


void FUN_007b5958(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  ulong local_60;
  undefined4 local_58;
  undefined4 local_50 [8];
  
  FUN_00796868(local_50,param_4);
  local_58 = 0;
  local_60 = 0x10;
  FUN_0078b2cc(local_50,&local_60);
  FUN_0284e3d4(local_50);
  (**(code **)(*param_2 + 0x10))(param_2,0);
  param_2[0xb] = param_3;
  FUN_0078cac8(param_3);
  FUN_0078cb14(param_2[0xb]);
  FUN_00796828(param_2 + 0xc,param_4);
  param_2[6] = (long)PTR_FUN_047d0e60;
  param_2[7] = 0;
  param_2[8] = (long)"LocalEjectClientBackgroundJob::EjectClient";
  local_50[0] = 0;
  local_60 = local_60 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_60);
  FUN_00cbd7c0(param_1,local_50);
  return;
}


