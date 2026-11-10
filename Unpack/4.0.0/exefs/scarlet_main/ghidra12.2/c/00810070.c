/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00810070; name: FUN_00810070
 */


void FUN_00810070(undefined8 param_1,long param_2,long param_3)

{
  int *piVar1;
  int local_78 [4];
  undefined4 local_68 [8];
  int local_48 [4];
  undefined4 local_38 [2];
  
  local_48[0] = 0;
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_68);
  FUN_0080ffac(local_68,param_2);
  FUN_018ff39c(local_48,local_68);
  if (local_48[0] == 0) {
    FUN_0284e338(local_68);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
    FUN_00810f10(param_2,*(undefined8 *)(param_3 + 8));
    FUN_0078cac8(param_2 + 0xa20);
    FUN_0078cac8(param_2 + 0xa50);
    FUN_00810d04(local_78,param_2,param_2 + 0xa20,param_2 + 0xa50,param_2 + 0xee0,param_2 + 0xa80,
                 param_2 + 0xcb0,local_68);
    FUN_018ff39c(local_48,local_78);
    if (local_48[0] == 0) {
      FUN_00811d28(param_2);
      local_78[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_38);
      piVar1 = local_78;
    }
    else {
      piVar1 = local_48;
    }
    FUN_00cbd7c0(param_1,piVar1);
    FUN_0284e3d4(local_68);
  }
  else {
    FUN_00cbd7c0(param_1,local_48);
  }
  return;
}


