/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a6294; name: FUN_007a6294
 */


void FUN_007a6294(undefined8 param_1,long *param_2,long param_3,int param_4)

{
  ulong uVar1;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  uVar1 = FUN_0078cdf4();
  if ((((uVar1 & 1) == 0) && ((param_4 < 3 || (*(char *)((long)param_2 + 100) == '\0')))) &&
     ((param_4 < 3 || (*(char *)((long)param_2 + 0x65) == '\0')))) {
    (**(code **)(*param_2 + 0x10))(param_2,0);
    param_2[0xb] = param_3;
    FUN_0078cac8(param_3);
    FUN_0078cb14(param_2[0xb]);
    *(int *)(param_2 + 0xc) = param_4;
    local_40[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
    FUN_018ff39c(param_2 + 0x10,local_40);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_40[0] = 0;
  }
  else {
    local_40[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


