/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d4570; name: FUN_007d4570
 */


void FUN_007d4570(int *param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 local_40 [4];
  
  *param_1 = 0;
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_40);
  FUN_007dcff4(local_40,*(undefined8 *)(param_2 + 0xd0),param_3 & 1,param_4,param_5);
  FUN_018ff39c(param_1,local_40);
  if (*param_1 == 0) {
    FUN_0078cd58(*(undefined8 *)(param_2 + 0xd0),0);
  }
  return;
}


