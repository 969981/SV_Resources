/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00810b24; name: FUN_00810b24
 */


void FUN_00810b24(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(int *)(param_3 + 4) < 1) {
    local_38[0] = 0x10408;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
    piVar1 = local_38;
  }
  else {
    local_38[0] = 0;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
    FUN_00792300(local_48,param_3);
    FUN_018ff39c(local_38,local_48);
    if (local_38[0] == 0) {
      local_48[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      piVar1 = local_48;
    }
    else {
      piVar1 = local_38;
    }
  }
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


