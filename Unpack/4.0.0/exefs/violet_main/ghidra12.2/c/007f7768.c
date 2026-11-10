/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f7768; name: FUN_007f7768
 */


void FUN_007f7768(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  puVar1 = local_40;
  if ((*(long *)(param_2 + 0x18) == 0) || (*(long *)(param_2 + 0x20) == 0)) {
    local_30[0] = 0x10408;
    local_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
    puVar1 = local_30;
  }
  else {
    local_30[0] = 0;
    local_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
    FUN_007fa77c(local_40,*(undefined8 *)(param_2 + 0x18));
    FUN_018ff39c(local_30,local_40);
    FUN_007fa77c(local_40,*(undefined8 *)(param_2 + 0x20));
    FUN_018ff39c(local_30,local_40);
    local_40[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
  }
  FUN_00cbd7c0(param_1,puVar1);
  return;
}


