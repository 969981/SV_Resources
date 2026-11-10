/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fdf50; name: FUN_007fdf50
 */


void FUN_007fdf50(int *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (param_3 == 0) {
    local_38[0] = 0x10407;
  }
  else {
    uVar1 = FUN_0078cdf4();
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_2 + 0x90) == 0) {
        *(long *)(param_2 + 0x58) = param_3;
        FUN_0078cac8(param_3);
        FUN_0078cb14(*(undefined8 *)(param_2 + 0x58));
      }
      else {
        FUN_007fe2d4(param_1,*(long *)(param_2 + 0x90),param_2 + 0x60);
        if (*param_1 != 0) {
          return;
        }
        *(long *)(param_2 + 0x58) = param_3;
        FUN_0078cac8(param_3);
        FUN_0078cb14(*(undefined8 *)(param_2 + 0x58));
        FUN_0078cd58(*(undefined8 *)(param_2 + 0x90),1);
      }
      *(undefined8 *)(param_2 + 0x30) = 0x50;
      *(undefined8 *)(param_2 + 0x38) = 1;
      *(char **)(param_2 + 0x40) = "WanLoginJob::WaitLogout";
      local_38[0] = 0;
    }
    else {
      local_38[0] = 0x10408;
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


