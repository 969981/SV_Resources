/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b9980; name: FUN_007b9980
 */


void FUN_007b9980(undefined8 param_1,long param_2,long param_3,int param_4,long param_5,int param_6)

{
  undefined4 local_f0 [4];
  undefined4 local_e0 [44];
  undefined4 local_28 [2];
  
  if ((((param_6 == 0x10) && (param_3 != 0)) && (param_4 == 0x10)) && (param_5 != 0)) {
    if (*(int *)(param_2 + 0x234) != 0) {
      FUN_0078e928(local_e0,param_2 + 0x238,0x10,1);
      FUN_0078ecf8(local_e0,param_5,0x10,param_3,0x10);
      local_f0[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_f0 | 4),(Result *)local_28);
      FUN_00cbd7c0(param_1,local_f0);
      FUN_0078e920(local_e0);
      return;
    }
    local_e0[0] = 0x10408;
  }
  else {
    local_e0[0] = 0x10407;
  }
  local_f0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_e0 | 4),(Result *)local_f0);
  FUN_00cbd7c0(param_1,local_e0);
  return;
}


