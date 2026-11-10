/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a7268; name: FUN_007a7268
 */


void FUN_007a7268(undefined8 param_1,long param_2,long param_3)

{
  int *piVar1;
  undefined8 local_48;
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (param_3 == 0) {
    local_38[0] = 0x10407;
    local_48 = (ulong)local_48._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)&local_48);
    piVar1 = local_38;
  }
  else {
    FUN_007a6294(local_38,param_2,param_3,8);
    if (local_38[0] == 0) {
      local_48 = 0;
      FUN_007935cc(&local_48);
      *(undefined4 *)(param_2 + 200) = 9;
      *(ulong *)(param_2 + 0xc0) = local_48;
      local_48 = local_48 & 0xffffffff00000000;
    }
    else {
      local_48 = CONCAT44(local_48._4_4_,0x10408);
    }
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_28);
    piVar1 = (int *)&local_48;
  }
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


