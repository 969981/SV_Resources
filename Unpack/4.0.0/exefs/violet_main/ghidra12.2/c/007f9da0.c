/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f9da0; name: FUN_007f9da0
 */


void FUN_007f9da0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int *piVar2;
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  puVar1 = PTR_DAT_047d0860;
  piVar2 = local_40;
  if (*(char *)(param_2 + 8) == '\0') {
    local_30[0] = 0x10408;
    local_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
    piVar2 = local_30;
  }
  else {
    FUN_007f7394(local_30,*(undefined8 *)PTR_DAT_047d0860,param_2 + 0x10,param_2 + 0x1920,
                 param_2 + 0x3230,param_2 + 0x4b40);
    if (local_30[0] == 0) {
      FUN_007f747c(*(undefined8 *)puVar1);
      local_40[0] = 0;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
    }
    else {
      piVar2 = local_30;
    }
  }
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


