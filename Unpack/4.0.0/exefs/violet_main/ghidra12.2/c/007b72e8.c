/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b72e8; name: FUN_007b72e8
 */


void FUN_007b72e8(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (((param_3 == (void *)0x0) || (0x200 < param_4)) || (param_4 < 0x7c)) {
    local_48[0] = 0x10407;
  }
  else {
    memset((void *)(param_2 + 0xb8),0,0x200);
    memcpy((void *)(param_2 + 0xb8),param_3,(ulong)param_4);
    *(uint *)(param_2 + 0x28) = param_4;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


