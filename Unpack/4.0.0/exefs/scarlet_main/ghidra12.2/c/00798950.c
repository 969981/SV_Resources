/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00798950; name: FUN_00798950
 */


void FUN_00798950(undefined8 param_1,long *param_2,long param_3)

{
  int *piVar1;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((param_2[2] == 0) || (*(char *)((long)param_2 + 9) != '\0')) {
    local_38[0] = 0x10408;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  }
  else {
    (**(code **)(*param_2 + 0x1f0))(local_38,param_2);
    if (local_38[0] == 0) {
      FUN_007a24cc(param_2[2],param_3 + 8);
      *(undefined1 *)((long)param_2 + 9) = 1;
      local_48[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      piVar1 = local_48;
      goto LAB_00798998;
    }
  }
  piVar1 = local_38;
LAB_00798998:
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


