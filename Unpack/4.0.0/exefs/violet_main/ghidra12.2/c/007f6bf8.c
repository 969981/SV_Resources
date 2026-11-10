/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f6bf8; name: FUN_007f6bf8
 */


void FUN_007f6bf8(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  piVar1 = local_40;
  FUN_007f6c78(local_30);
  if (local_30[0] == 0) {
    FUN_007ecd08(local_40,param_2 + 0x10);
    FUN_018ff39c(local_30,local_40);
    if (local_30[0] == 0) {
      local_40[0] = 0;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
      goto LAB_007f6c44;
    }
  }
  piVar1 = local_30;
LAB_007f6c44:
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


