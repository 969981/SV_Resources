/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0117e060; name: FUN_0117e060
 */


void FUN_0117e060(undefined8 param_1,long *param_2,long param_3,int param_4,undefined8 param_5)

{
  int *piVar1;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar1 = local_60;
  if (param_4 == 0) {
    local_50[0] = 0x10407;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    piVar1 = local_50;
  }
  else {
    (**(code **)(*param_2 + 0xa0))(local_50,param_2,param_4);
    if (local_50[0] == 0) {
      if (param_3 == 0) {
        local_60[0] = 0x10407;
      }
      else {
        FUN_007f1894(local_60,param_2[0xe],param_3,param_4,param_5);
        FUN_018ff39c(local_50,local_60);
        FUN_00797e54(param_2 + 1,*(undefined2 *)(param_2[0xe] + 0x32));
        local_60[0] = 0;
      }
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
    }
    else {
      piVar1 = local_50;
    }
  }
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


