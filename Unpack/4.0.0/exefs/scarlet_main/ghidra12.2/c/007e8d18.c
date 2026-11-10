/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e8d18; name: FUN_007e8d18
 */


void FUN_007e8d18(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6)

{
  int *piVar1;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar1 = local_60;
  local_50[0] = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  FUN_007e8a5c(local_60,param_2,param_3,*(undefined1 *)(param_6 + 0x38));
  FUN_018ff39c(local_50,local_60);
  if (local_50[0] == 0) {
    if ((param_4 == 0) || (param_5 == 0)) {
      local_60[0] = 0x10407;
    }
    else if (*(long *)(param_2 + 0x48) == 0) {
      *(long *)(param_2 + 0x40) = param_6;
      *(long *)(param_2 + 0x48) = param_4;
      *(long *)(param_2 + 0xb8) = param_5;
      *(undefined8 *)(param_2 + 0xc0) = 0;
      local_60[0] = 0;
    }
    else {
      local_60[0] = 0x10408;
    }
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
  }
  else {
    piVar1 = local_50;
  }
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


