/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b0c8c; name: FUN_007b0c8c
 */


void FUN_007b0c8c(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if ((param_3 == (void *)0x0) || (0x40 < param_4)) {
    local_48[0] = 0x10407;
  }
  else {
    memset((void *)(param_2 + 0x12e0),0,0x40);
    memcpy((void *)(param_2 + 0x12e0),param_3,(ulong)param_4);
    *(char *)(param_2 + 0x1320) = (char)param_4;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


