/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a21cc; name: FUN_007a21cc
 */


void FUN_007a21cc(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if ((param_3 == (void *)0x0) || (param_4 < 0x10)) {
    local_28[0] = 0x10407;
  }
  else {
    memcpy(param_3,(void *)(param_2 + 0x220),0x10);
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


