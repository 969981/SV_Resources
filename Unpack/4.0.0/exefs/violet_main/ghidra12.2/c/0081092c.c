/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081092c; name: FUN_0081092c
 */


void FUN_0081092c(int *param_1,short *param_2,undefined8 param_3)

{
  short sVar1;
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  undefined4 local_50 [6];
  short local_38;
  
  local_50[0] = 0;
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_50);
  sVar1 = *param_2;
  if (sVar1 != 0) {
    FUN_0284e338(local_50);
    local_70[0] = 0;
    local_60[0] = 0;
    local_38 = sVar1;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_60);
    FUN_007923b4(local_60,param_3,local_50,0,0);
    FUN_018ff39c(local_70,local_60);
    FUN_0284e3d4(local_50);
    FUN_018ff39c(param_1,local_70);
    if (*param_1 == 0) {
      return;
    }
  }
  FUN_00810818(local_50,param_2,param_3);
  FUN_018ff39c(param_1,local_50);
  return;
}


