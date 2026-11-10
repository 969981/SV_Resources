/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ff39c; name: FUN_018ff39c
 */


int * FUN_018ff39c(int *param_1,int *param_2)

{
  undefined8 uVar1;
  int local_58 [4];
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  *param_1 = *param_2;
  local_38[0] = 0xa466;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  if (*param_2 != local_38[0]) {
    local_28[0] = 0;
    local_48[0] = 0xc47e;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    if (*param_2 != local_48[0]) {
      local_58[0] = 0xc484;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_28);
      if (*param_2 != local_58[0]) {
        local_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)(param_1 + 1),(Result *)local_38);
        return param_1;
      }
    }
  }
  uVar1 = *(undefined8 *)(param_2 + 1);
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 1) = uVar1;
  return param_1;
}


